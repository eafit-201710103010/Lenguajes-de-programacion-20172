#!/usr/bin/ruby
#main
def soyunapapa
  c =0
  s=0
  b=0
  while(true)
    s = gets
    b = gets
    if(s.to_i <0)
      break
    end
    
    if(s.to_i%2 ==0 && b.to_i==0)
      puts "Utuuu"
    elsif (s.to_i%2 ==1 && b.to_i==1)
      puts "Utuuu"
      c=c+1
    elsif (b.to_i==1)
      puts "Nahhh"
      c=c+1
    else
      puts "Nahhh"
    end

  end


  if(c%2 ==0 && b.to_i==1)
      puts "Todo bien"
  elsif (c%2==1 && b.to_i==0)
      puts "Todo bien"
  else
    puts "Muy mal"
  end

end
soyunapapa
