def funcion (x,y)
  z=x + y
  yield z
end

funcion 10,20 do |i|
  puts i
end

funcion "Hola","mundo  " do |i|
  w=i.length
  puts w
end
