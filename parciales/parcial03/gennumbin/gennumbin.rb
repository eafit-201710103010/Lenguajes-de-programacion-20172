#!/usr/bin/env ruby

require './functions'

s = 0
until $stdin.eof
  n = $stdin.gets.chop.to_i
  t =  gennumbin n
  s += t
  puts "#{t}"
end
puts "#{checkbin s}"

