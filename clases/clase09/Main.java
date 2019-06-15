public class Main {

    public static int evaluar(Arbol raiz) {

	int ret = 0;

	if (raiz == null) {

	    ret =  0;
	}
	else if (raiz instanceof Numero) {

	    Numero unNum = (Numero) raiz;

	    ret = unNum.obtValor();
	}
	else {

	    Binario unBin = (Binario) raiz;

	    switch (unBin.obtOper()) {
	    case SUMA:
		ret = evaluar(unBin.obtIzq()) +
		    evaluar(unBin.obtDer());
		break;

	    case RESTA:
		ret = evaluar(unBin.obtIzq()) -
		    evaluar(unBin.obtDer());
		break;

	    case MULT:
		ret = evaluar(unBin.obtIzq()) *
		    evaluar(unBin.obtDer());
		break;

	    case DIV:
		ret = evaluar(unBin.obtIzq()) /
		    evaluar(unBin.obtDer());
		break;
	    }
	}

	return ret;
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

    private static void imprimirEvaluarExpresion(Arbol expr) {

	System.out.println(imprimir(expr) +
			   "=" + evaluar(expr));
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
			  new Binario(Operador.SUMA,
				      new Binario(Operador.MULT,
						  new Numero(9),
						  new Numero(6)),
				      new Binario(Operador.SUMA,
						  new Numero(7),
						  new Numero(8))),
			  new Binario(Operador.DIV,
				  new Binario(Operador.RESTA,
					      new Numero(9),
					      new Numero(2)),
				  new Binario(Operador.SUMA,
					      new Numero(1),
					      new Numero(2)))
	};

	for (Arbol expr : exprs) {
	    imprimirEvaluarExpresion(expr);
	}
    }
}
