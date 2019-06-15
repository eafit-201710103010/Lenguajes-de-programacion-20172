class Contador
  attr_writer: valor
  attr_reader: valor
  def initialize valor=0
    @valor= valor
  end

  def incr
    @valor=@valor+1
  end
end
