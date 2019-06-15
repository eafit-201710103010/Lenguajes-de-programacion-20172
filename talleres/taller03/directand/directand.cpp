#include"directand.h"
#include <iostream>

using namespace std;

bool* directand(int *leftExpr , int *rightExpr){
  int c,d,e;
  bool* res;
  *res=false;
  cin >>c >> d >> e;
  *leftExpr=c-d;
  
    if(*leftExpr > 0){
      *rightExpr=d-e;
	if(*rightExpr>0){
	  *res=true;
	}else{
	  *res=false;
	}
    }else{
      *rightExpr=d-e;
      *res=false;
    }
  
        return res;
}

