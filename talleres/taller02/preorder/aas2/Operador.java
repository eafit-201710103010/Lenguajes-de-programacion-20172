public enum Operador {
    SUMA('+'),
    RESTA('-'),
    MULT('*'),
    DIV('/');

    private final char oper;

    Operador(char oper) {
	this.oper = oper;
    }

    public String toString() {
	return "" + oper;
    }
}
