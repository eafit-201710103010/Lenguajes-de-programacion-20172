class Contador
  attr_reader: valor
  def inicialize valor=0
    @valor=valor
  end
  def incrementar
    @valor=@valor +1
  end
end
