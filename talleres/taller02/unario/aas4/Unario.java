public class Unario extends Arbol {

   private Arbol hijo;
   private OperadorUnario oper;

    public Unario(OperadorUnario oper, Arbol hijo) {

	this.oper = oper;
	this.hijo = hijo;
    }

    public Arbol obtHijo() {

	return this.hijo;
    }
   
    public OperadorUnario obtOper() {

	return this.oper;
    }
}
