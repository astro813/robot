#include <iostream>
#include <cmath>
#include "robot.cc"
#include "environment.cc"
using namespace std;

class plane : public Robot{
private:
    int state;
    int velocity;
    int plane_height_velocity;
    int plane_height;
public:
    plane():Robot(){
    this->velocity=rand()%700+200;
    this->plane_height_velocity=rand()%-100+200;
    }
    int ifcrash(){
        environment sky(50000,50000,10000,20000);
        int state=0;
        if(plane_height>=sky.getheight()){
        cout<<"plane crash"<<endl;
        state=1;
        return state;
    }
    return state;
    }
};
