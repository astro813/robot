#include <iostream>
#include <cmath>
#include "robot.cc"
#include "environment.cc"
using namespace std;

class submarine : public Robot{
private:
    int state;
    int submarine_depth_velocity;
public:
    submarine(int x=0,int y=0,int z=0,int velocity=0,int theta=0)
    {
    Robot(x,y,z,velocity,theta);
    this->velocity=rand()%40+10;
    this->submarine_depth_velocity=rand()%-10+20;
    }

    void update_submarine_location()
    {
        int input_x=get_x()+this->velocity*cos(this->theta);
        int input_y=get_y()+this->velocity*sin(this->theta);
        int input_z=get_z()+this->submarine_depth_velocity;
        set_x(input_x);
        set_y(input_y);
        set_z(input_z);
    }

    int ifcrash()
    {
        environment ocean(50000,50000,10000,20000);
        int state=0;
        if(get_z()>=ocean.getdepth())
        {
        cout<<"submarine crash"<<endl;
        state=1;
        return state;
        }
    return state;
    }
};
