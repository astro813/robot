#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include "robot.cc"
//need head

class sensors: public Robot{
private:
     int sensors_x;
     int sensors_y;
     int sensors_z;
     int t;
     int sensors_velocity;
     int sensors_theta;
public:
     sensors(int x=0,int y=0,int z=0,int velocity=0,int theta=0){
     Robot(x,y,z,velocity,theta);
     }
     double normaldistribution(){
     default_random_engine generator;
     normal_distribution<double> distribution(0.0,1.0);
     return distribution(generator);
     }
     int radar(){
     this->sensors_z= get_z()+normaldistribution();
     }
     int gps(){
     this->sensors_x= get_x()+normaldistribution();
     this->sensors_y= get_y()+normaldistribution();
     }
     int SONAR(){
     this->sensors_z=get_z()+normaldistribution();
     }
     int compass(){
     this->sensors_theta= this->theta+normaldistribution();
     }
     int accelerometer(){
     this->sensors_velocity= this->velocity+normaldistribution();
     }
     int Altimeter(){
     this->sensors_z= get_z()+normaldistribution();
     }
     friend ostream& operator <<(ostream& s, sensors c){
     return s << c.get_x()<<" " <<c.get_y()<< " "<< c.get_z()<<" " <<c.velocity<<" " <<c.theta<<" " ;
     }
};

/*int main(){
    sensors c(1,2,3);
    c.radar();
cout<< c;
}
*/
