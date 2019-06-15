public class Binario extends Arbol {

    private Arbol izq;
    private Arbol der;
    private Operador oper;

    public Binario(Operador oper, Arbol izq, Arbol der) {

	this.oper = oper;
	this.izq  = izq;
	this.der  = der;
    }

    public Arbol obtIzq() {

	return this.izq;
    }

    public Arbol obtDer() {

	return this.der;
    }

    public Operador obtOper() {

	return this.oper;
    }
}
