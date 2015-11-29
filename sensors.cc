#include <iostream>
#include <cmath>
using namespace std;
#include <random>
//need head

class sensors{
private:
     int x;
     int y;
     int z;
     int t;
     int velocity;
     int theta;
public:
     sensors(int x=0,int y=0,int z=0,int velocity=0,int theta=0):x(x),y(y),z(z),velocity(velocity),theta(theta){}
     double normaldistribution(){
     default_random_engine generator;
     normal_distribution<double> distribution(0.0,1.0);
     return distribution(generator);
     }
     int radar(){
     this->z= this->z+normaldistribution();
     }
     int gps(){
     this->x= this->x+normaldistribution();
     this->y= this->y+normaldistribution();
     }
     int SONAR(){
     this->z= this->z+normaldistribution();
     }
     int compass(){
     this->theta= this->theta+normaldistribution();
     }
     int accelerometer(){
     this->velocity= this->velocity+normaldistribution();
     }
     int Altimeter(){
     this->z= this->z+normaldistribution();
     }
     friend ostream& operator <<(ostream& s, sensors c){
     return s << c.x<<" " <<c.y<< " "<< c.z<<" " <<c.velocity<<" " <<c.theta<<" " ;
     }
};

/*int main(){
    sensors c(1,2,3);
    c.radar();
cout<< c;
}
*/
