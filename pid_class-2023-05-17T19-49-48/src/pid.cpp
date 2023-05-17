class pid {
  private:
  float gp,gi,gd;
  int start,c;
  public:
  pid(float kp, float ki, float kd) {
    gp=kp;
    gi=ki;
    gd=kd;
  }
  
  void setSlew(int startt, int vt) {
    start = startt;
    c=vt;
  }

  float pe=0;
  float integral = 0;
  void reset(){
    integral = 0;
    pe = 0;
  }

  

  float calculate(int target, float v) {
    float error = target - v;
    float derivative = error - pe;
    integral += error;

    return error*gi+ derivative*gd+ integral*gi;
  }

};