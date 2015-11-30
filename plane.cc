#include <iostream>
#include <cmath>
#include "robot.cc"
#include "environment.cc"
using namespace std;

class plane : public Robot{
private:
    int state;
    int plane_height_velocity;
public:
    plane(int x=0,int y=0,int z=0,int velocity=0,int theta=0)
    {
    Robot(x,y,z,velocity,theta);
    this->velocity=rand()%700+200;
    this->plane_height_velocity=rand()%-100+200;
    }

    void update_plane_location()
    {
        int input_x=get_x()+this->velocity*sin(this->theta);
        int input_y=get_y()+this->velocity*cos(this->theta);
        int input_z=get_z()+this->plane_height_velocity;
        set_x(input_x);
        set_y(input_y);
        set_z(input_z);
    }


    int ifcrash(){
        environment sky(50000,50000,10000,20000);
        int state=0;
        if(get_z()>=sky.getheight()){
        cout<<"plane crash"<<endl;
        state=1;
        return state;
    }
    return state;
    }
};
