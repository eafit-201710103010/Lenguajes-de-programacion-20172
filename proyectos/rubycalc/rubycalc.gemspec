
Gem::Specification.new do |s|
  s.name    = 'rubycalc'
  s.version = '0.0.1.2'
  s.date    = '2017-11-01'
  s.summary = 'Another calculator in ruby'
  s.description = 'An calculator implementation on ruby'
  s.author  = 'Luisa Maria Vasquez Gomez'
  s.email   = 'lmvasquezg@eafit.edu.co'
  s.homepage = 'http://www1.eafit.edu.co/fcardona/cursos/st0244/rubycal'
  s.files    = ["lib/token.rb",
                "lib/scanner.rb",
                "lib/ast.rb",
                "lib/parser.rb",
                "lib/calculator.rb",
                "lib/calcex.rb"]
  s.license  = 'ARTISTIC'
  s.executables << 'rubycalc'
end
