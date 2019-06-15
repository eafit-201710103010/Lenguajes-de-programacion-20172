#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void){
  int base,n;
  cin >> base;
  cin >> n;
  int total=0;

  for(int i =0;i<n;++i){
    int valor,res;
    string cadena;
    cin >> valor;
    cin >> cadena;
    res=valor%base;
    if(res==cadena.length()-1){
      cout <<"="<<endl;
      total=total+res;
      
    }else if(res<cadena.length()-1){
      cout <<">"<<endl;
      total=total+res;
      
    }else if(res>cadena.length()-1){
      cout <<"<"<<endl;
      total=total+res;
      }
      
  }

  int t;
  string tot;
  cin >> tot;
    t=total%base;
    if(t==tot.length()-1){
      cout <<"="<<endl;
      
      
    }else if(t<tot.length()-1){
      cout <<">"<<endl;
      
      
    }else if(t>tot.length()-1){
      cout <<"<"<<endl;
      }
      return EXIT_SUCCESS;
}
      


