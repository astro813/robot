#include <iostream>
#include <cmath>
#include "robot.cc"
#include "environment.cc"
using namespace std;

class submarine : public Robot{
private:
    int state;
    int velocity;
    int submarine_depth_velocity;
    int submarine_depth;
public:
    submarine():Robot(){
    this->velocity=rand()%40+10;
    this->submarine_depth_velocity=rand()%-10+20;
    }
    int ifcrash(){
        environment ocean(500,500,100,200);
        int state=0;
        if(submarine_depth>=ocean.getdepth()){
        cout<<"submarine crash"<<endl;
        state=1;
        return state;
    }
    return state;
    }
};
