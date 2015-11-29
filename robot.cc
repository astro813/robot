#include <iostream>
#include <cmath>
using namespace std;
#include <random>

class Robot{
private:
    int x;
    int y;
    int z;
    int t;
    int velocity;
    int theta;
public:
    Robot(int x=0,int y=0,int z=0,int velocity=0,int theta=0):x(x),y(y),z(z),velocity(velocity),theta(theta){}

    void setlocation(int x, int y, int z=0){this->x=x;this->y=y;this->z=z;}

    void updatelocation(int& x, int& y, int v, int theta)
    {
        x=x+v*cos(theta);
        y=y+v*sin(theta);
    }

      int* getlocation(){
        int x[3] ;
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
int *location=car.getlocation();
cout<< "x="<<location[0]<<" "<<"y="<<location[1]<<" "<<"z="<<location[2];
return 0;
}
