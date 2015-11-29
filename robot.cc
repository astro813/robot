#include <iostream>
#include <cmath>
using namespace std;
#include <random>

class Robot{
private:
    double x;
    double y;
    double z;
    double t;
    double velocity;
    double theta;
public:
    Robot(double x=0,double y=0,double z=0,double velocity=0,double theta=0):x(x),y(y),z(z),velocity(velocity),theta(theta){}

    void setlocation(double x, double y, double z=0){this->x=x;this->y=y;this->z=z;}

    void updatelocation(double& x, double& y, double v, double theta)
    {
        x=x+v*cos(theta);
        y=y+v*sin(theta);
    }

      double* getlocation(){
        double x[3] ;
        x[0]=this->x;
        x[1]=this->y;
        x[2]=this->z;
        //cout <<*(x+1)<<"w";
        return x;

        }
     friend ostream& operator <<(ostream& s, Robot c){
     return s << c.x<<" " <<c.y<< " "<< c.z<<" " <<c.velocity<<" " <<c.theta<<" " ;
     }
};

int main(){
Robot car(2.0,1.0,0);
car.setlocation(1.0,2.0,1.0);
double *location=car.getlocation();
cout<< "x="<<location[0]<<" "<<"y="<<location[1]<<" "<<"z="<<location[2];
return 0;
}
