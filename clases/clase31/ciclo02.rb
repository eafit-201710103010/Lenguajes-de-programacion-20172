#!/usr/bin/env ruby

# Ejemplos de ciclos de ruby
i = 0
num = 4

# ciclo begin end while
i = 0
puts "Ciclo begin end while"
begin
  puts "i: #{i}"
  i += 1
end while i < num
