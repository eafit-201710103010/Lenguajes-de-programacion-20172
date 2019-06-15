#pragma once

class Factor {
  double factor;
  void imprCons();
public:
  Factor();
  Factor(double factor);
  virtual ~Factor();
  double obtFactor() const;
  void modFactor(double factor);
  double multFactor(double value) const;
};


