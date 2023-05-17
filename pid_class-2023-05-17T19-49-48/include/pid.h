class pid {
  public:
  pid(float, float, float);
  void setSlew(int, int);
  void reset();
  float calculate(int,float);
};

