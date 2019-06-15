#!/usr/bin/ruby
# fichero: cond02.rb
#
# proposito: mostrar otros tipos de condiciones
#
v = gets.chomp.to_i


unless v == 10 then
  puts "v: #{v} es diferente de 10"

else
  puts " v: #{v} es verdadero"
end

