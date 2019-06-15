class Contador
  attr_accessor:valor
  def initialize valor=0
    @valor=valor
  end
  def incr
    @valor+=1
  end
end

class ContadorFactor < Contador
  attr_accessor:factor
  def initialize valor=0,factor=1
    super valor
    @factor =factor
  end
  def incr
    @valor+=factor
  end
end

class Titulo
  attr_accessor:mensaje
  def initialize mensaje="*"
    @mensaje=mensaje
  end
  def incr
    @mensaje=@mensaje+@mensaje
  end
end

def hacerIncr x
  x.incr
end
