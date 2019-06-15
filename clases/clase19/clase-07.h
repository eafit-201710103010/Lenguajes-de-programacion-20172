#pragma once

class Factor {
  double factor;
  friend void imprCons(Factor& factor, const char *msg);
public:
  Factor();
  Factor(double factor);
  Factor(const Factor& factor);
  Factor& operator=(const Factor&);
  virtual ~Factor();
  double obtFactor() const;
  void modFactor(double factor);
  double multFactor(double value) const;
};
