#!/usr/bin/ruby

v = gets.chomp.to_i

if v != 10
  puts "v: #{v} es diferente de 10"
else
  puts "v: #{v+=1} es igual a 10"
end

