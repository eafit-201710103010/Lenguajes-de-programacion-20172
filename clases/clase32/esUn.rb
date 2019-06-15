def isLetter c
  /[A-Za-z]/ =~ c
end

def isDigit c
  /[0-9]/ =~ c
end

def isWhiteSpace c
 /[ \t\v\f]/ =~ c
end
