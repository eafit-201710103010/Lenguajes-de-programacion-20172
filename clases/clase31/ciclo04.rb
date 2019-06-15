#!/usr/bin/env ruby

# Ejemplos de ciclos de ruby
i = 0
num = 4

# begin end until
i = 0
puts "Ciclo begin end until"
begin
  puts "i: #{i}"
  i += 1
end until i >= num

