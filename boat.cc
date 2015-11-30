#include <iostream>
#include <cmath>
#include "robot.cc"
#include "environment.cc"
using namespace std;


class boat : public Robot{
private:
    int state;
    int velocity;
public:
    boat(int x=0,int y=0,int z=0,int velocity=0,int theta=0)
    {
    Robot(x,y,z,velocity,theta);
    this->velocity=rand()%30+30;
    }

     void update_boat_location()
    {
        int input_x=get_x()+this->velocity*this->theta;
        int input_y=get_y()+this->velocity*this->theta;
        set_x(input_x);
        set_y(input_y);
    }

    int ifcrash(){
        environment ocean(50000,50000,10000,20000);
        int state=0;
        if(get_z()<=0){
        cout<<"boat crash"<<endl;
        state=1;
        return state;
    }
    return state;
    }
};

