class Pato
  def graznar
    puts "Cuack"
  end
end

class Vaca
  def mujir
    puts "Muu"
  end
  def graznar
    puts "Muu-cuack"
  end
end

def utilizarPato pato
  pato.graznar
end
