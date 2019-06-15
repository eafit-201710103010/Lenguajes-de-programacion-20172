public class Main {   


  public static StringBuffer notPolaca(Arbol raiz) {
    StringBuffer sb = new StringBuffer();
      if (raiz == null){
          
        }else if (raiz instanceof Numero){
            Numero num = (Numero ) raiz;
            sb.append(num.obtValor());
        }else {
            Binario bin = (Binario) raiz;
            sb.append(bin.obtOper());
            sb.append(notPolaca(bin.obtIzq()));
            sb.append(notPolaca(bin.obtDer()));     
        }
      
      return sb;
   }

   public static StringBuffer imprimir(Arbol raiz) {

      StringBuffer sb = new StringBuffer();
      if (raiz == null) {
         // No hace nada
      }
      else if (raiz instanceof Numero) {

         Numero unNum = (Numero) raiz;

         sb.append(unNum.obtValor());
      }
      else {

         Binario unBin = (Binario) raiz;

         sb.append('(')
            .append(imprimir(unBin.obtIzq()))
            .append(unBin.obtOper().toString())
            .append(imprimir(unBin.obtDer()))
            .append(')');
      }

      return sb;
   }


   private static void imprimirExpresion(Arbol expr) {

      System.out.println(imprimir(expr) +
                         "=" + notPolaca(expr));
   }

   public static void main(String []args) {

      Arbol exprs[] = { new Binario(Operador.SUMA,
                                    new Numero(3),
                                    new Binario(Operador.MULT,
                                                new Numero(4),
                                                new Numero(5))),
                        new Binario(Operador.MULT,
                                    new Binario(Operador.SUMA,
                                                new Numero(3),
                                                new Numero(4)),
                                    new Numero(5)),
                        new Binario(Operador.DIV,
                                    new Binario(Operador.RESTA,
                                                new Numero(9),
                                                new Numero(2)),
                                    new Binario(Operador.SUMA,
                                                new Numero(1),
                                                new Numero(2)))
      };

      for (Arbol expr : exprs) {
         imprimirExpresion(expr);
      }
   }
}
