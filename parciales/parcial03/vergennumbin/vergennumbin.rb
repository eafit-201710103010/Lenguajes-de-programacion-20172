#!/usr/bin/env ruby

require './functions'

until $stdin.eof
  ns,cs = $stdin.gets.chomp.split
  n = ns.to_i
  c = cs.to_i
  if ok? n,c
    puts "** bien **"
  else
    puts "** fallo **"
  end
end
