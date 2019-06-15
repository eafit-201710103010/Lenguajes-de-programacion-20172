public class Binario extends Relacion {

    private Relacion izq;
    private Relacion der;
    private Operador oper;

    public Binario(Operador oper, Relacion izq, Relacion der) {

	this.oper = oper;
	this.izq  = izq;
	this.der  = der;
    }

    public Relacion obtIzq() {

	return this.izq;
    }

    public Relacion obtDer() {

	return this.der;
    }

    public Operador obtOper() {

	return this.oper;
    }
}
