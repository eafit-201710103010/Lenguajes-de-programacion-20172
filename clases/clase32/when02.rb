def esun str
  case str
  when /[A-Za-z]([A-Za-z]|[0-9])*/
    return :id
  when /[0-9]/
    return :number
  when /[\+|-|\*|\/]/
    return :operator
  else
    return :undefined
  end
end
