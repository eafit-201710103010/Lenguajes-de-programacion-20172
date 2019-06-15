def  convNota nota
  case nota
  when 0..2
    return "c"
  when 3..6
    return "B"
  when 7..8
    return "A"
  else return "A+"
  end
end
