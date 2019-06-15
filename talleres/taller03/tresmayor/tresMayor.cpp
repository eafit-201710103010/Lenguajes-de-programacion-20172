#include "tresMayor.h"
#include <iostream>
int tresMayor(int a , int b , int c){
  if(a>=b ){
    if(a>=c){
      return a ;
    }else{
      return c;
    }
  }else{
    if(b>=c){
      return b;
    }else{
      return c;
    }
  }
  return 0;
}
