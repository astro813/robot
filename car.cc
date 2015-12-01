#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include "robot.cc"
#include "environment.cc"

class car : public Robot{
private:
      int state;
public:
    car(int x=0,int y=0,int z=0,int velocity=0,int theta=0)
    {
    Robot(x,y,z,velocity,theta);
    this->velocity=rand()%40+40;
    }

      void update_car_location()
    {
        int input_x=get_x()+this->velocity*sin(this->theta);
        int input_y=get_y()+this->velocity*cos(this->theta);
        set_x(input_x);
        set_y(input_y);
    }

    void ifborder()
    {
    environment land_ocean(50000,50000,10000,20000);
    land_ocean.create_land_ocean();

    }
};
