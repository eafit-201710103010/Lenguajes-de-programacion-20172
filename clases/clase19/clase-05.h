#pragma once

class Factor {
  double factor;
  friend void imprCons(Factor* factor);
public:
  Factor();
  Factor(double factor);
  virtual ~Factor();
  double obtFactor() const;
  void modFactor(double factor);
  double multFactor(double value) const;
};
