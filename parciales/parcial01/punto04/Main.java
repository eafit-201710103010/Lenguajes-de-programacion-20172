public class Main {

   public static boolean evaluar(Relacion raiz) {
       /* Profe en el parcial c en el enunciado se pedia que se hiciera
       *la evaluacion de "menor que" y "mayor o igual que" , sin embargo en las tablas
       * de verdad estaban "menor que" y "menor o igual que" , asi que
       * yo misma cree la tabla de verdad de "mayor igual que" y fue basada en
       * ella que trabaje
       */
       
       boolean ret =false;
       
       if( raiz == null){
        ret= false;
	
         }else if (raiz instanceof Verdadero ){
            Verdadero ver =(Verdadero) raiz ;
            ret= ver.obtValor();
	    
         }else if ( raiz instanceof Falso){
            Falso  fal =(Falso) raiz ;
            ret= fal.obtValor();
	    
         }else{
            Binario bin = (Binario) raiz;
             switch (bin.obtOper()){
               
                case MENORQUE:
		    
                if( (evaluar(bin.obtIzq())== false ) &&
		    (evaluar(bin.obtDer())== true)  ) {
                    ret =true;
                    break;
		    
                  } else {
                   ret =false;
                   break;
                  }
		
               
                case MAYORIGUALQUE:
		    
                  if(  (evaluar(bin.obtIzq())== false)  &&
		       (evaluar(bin.obtDer())== true ) ){
                     ret =false;
                     break;
		     
                    } else {
                      ret =true;
                      break;
                    }
	     }
            
       }
     return ret;
   }

   public static void main(String []args) {

      Relacion exprs[] = { new Binario(Operador.MENORQUE,
                                    new Falso(),
                                    new Verdadero()),
                           new Binario(Operador.MAYORIGUALQUE,
                                       new Falso(),
                                       new Verdadero()),
                           new Binario(Operador.MENORQUE,
                                       new Verdadero(),
                                       new Verdadero()),
                           new Binario(Operador.MAYORIGUALQUE,
                                       new Verdadero(),
                                       new Falso())
      };

      for (Relacion expr : exprs) {
         System.out.println("Valor: " + evaluar(expr));
      }
   }
}
