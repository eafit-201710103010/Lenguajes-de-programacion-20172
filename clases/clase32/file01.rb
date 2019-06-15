input=File.open "texto.txt"
until input.eof
  s=input.gets
  puts s
end
