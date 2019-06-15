#!/usr/bin/ruby
# fichero: cond05.rb
#
# proposito: mostrar valores que son considerados verdaderos y falso
#

# Cualquier valor diferente de nil y de false son considerados verdaderos

s = true
if s then
  puts "s: #{s} es verdadero"
end

s = 10

if s then
  puts "s: #{s} es considerado verdadero"
end

s = "Hola Mundo"

if s then
  "s: #{s} es considerado verdadero"
end


