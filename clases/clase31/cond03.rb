#!/usr/bin/ruby
# fichero: cond03.rb
#
# proposito: mostrar valores que son considerados falso
#

def cond03
  s = nil
  
  unless s then
    puts "s: #{s} es falso"
  end
  
  s = false

  unless s then
    print "s: #{s} es considerado falso"
  end
end

