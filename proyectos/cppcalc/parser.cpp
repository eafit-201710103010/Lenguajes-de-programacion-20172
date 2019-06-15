#include "parser.h"
#include "calcex.h"
#include <string>
#include <sstream>

Parser::Parser(istream* in) {
   scan = new Scanner(in);
}

Parser::~Parser() {
   try {
      delete scan;
   } catch (...) {}
}

AST* Parser::parse() {
   return prog();
}

AST* Parser::prog() {
   AST* result = expr();
   Token* t = scan->getToken();

   if (t->getType() != eof) {
      cout << "Syntax Error: Expected EOF, found token at column " << t->getCol() << endl;
      throw ParseError;
   }

   return result;
}

AST* Parser::expr() {
   return restExpr(term());
}

AST* Parser::restExpr(AST* e) {
   Token* t = scan->getToken();

   if (t->getType() == add) {
      return restExpr(new AddNode(e,term()));
   }

   if (t->getType() == sub)
      return restExpr(new SubNode(e,term()));

   scan->putBackToken();

   return e;
}

AST* Parser::term() {
  return restTerm(storable());
}

AST* Parser::restTerm(AST* e) {
 Token* t = scan->getToken();

   if (t->getType() == times) {
     return restTerm(new TimesNode(e,storable()));
    }

   if (t->getType() == divide){
     return restTerm(new DivideNode(e,storable()));
     }
   scan->putBackToken();

   return e;
  
}

AST* Parser::storable() {
  AST* result=factor();
  
  Token *t =scan->getToken();
  
  if( t -> getType() == keyword){
    if(t->getLex() == "S"){
      return new StoreNode(result); 
    }else{
    cout << "Parser error : Expected S found: "
	 << t->getLex() << endl;
    throw ParseError;
    }
  }

  scan->putBackToken();
  return result;
}

AST* Parser::factor() {

   Token* t = scan->getToken();

   if (t->getType() == number) {
      istringstream in(t->getLex());
      int val;
      in >> val;
      return new NumNode(val);
   }

   if (t->getType() == keyword) {
     if(t->getLex() == "R"){
       return new RecallNode();   
     }else{
       cout<< "Parse error : Expected R found: "
	   << t->getLex() << endl;
       throw ParseError;
     }
   }

   if(t->getType() == lparen){
     AST* temp = expr();
     t= scan->getToken();
     if(t->getType()==rparen){
       return temp; 
     }else{
       cout<< "Parse error : Expected ) found: "
	   << t->getLex() << endl;
       throw ParseError;
     }
     
   }
   

   cout << "Expected Number , 'R' or '(' "<<endl;
   throw ParseError;
   
}

   
