#include <iostream>
#include <cmath>
using namespace std;
#include <random>
//need head

class sensors{
private:
     double x;
     double y;
     double z;
     double t;
     double velocity;
     double theta;
public:
     double normaldistribution(){
     default_random_engine generator;
     normal_distribution<double> distribution(0.0,1.0);
     return distribution(generator);
     }
     double radar(){
     this->z= this->z+normaldistribution();
     }
     double gps(){
     this->x= this->x+normaldistribution();
     this->y= this->y+normaldistribution();
     }
     double SONAR(){
     this->z= this->z+normaldistribution();
     }
     double compass(){
     this->theta= this->theta+normaldistribution();
     }
     double accelerometer(){
     this->velocity= this->velocity+normaldistribution();
     }
     double Altimeter(){
     this->z= this->z+normaldistribution();
     }
};
