#!/usr/bin/ruby
#main
def estacosa 
  a=0
   s=1
  while (s.to_i>0)
    s=gets
    if(s.to_i <0)
      break
    end
    if(s.to_i%2==1)
      puts 1
      a=a+1
    end
    if(s.to_i%2 ==0)
      puts 0
    end
  end
  if(a%2==0)
    puts 1
  end
  if(a%2==1)
    puts 0
  end
  
end
estacosa
