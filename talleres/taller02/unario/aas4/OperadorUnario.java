public enum OperadorUnario {
    SUMA('+'),
    RESTA('-');

    private final char oper;

    OperadorUnario(char oper) {
	this.oper = oper;
    }

    public String toString() {
	return "" + oper;
    }
}
