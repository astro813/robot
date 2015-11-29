#include <iostream>
#include <cmath>
#include "robot.cc"
#include "environment.cc"
using namespace std;


class boat : public Robot{
private:
    int state;
    int velocity;
    int boat_depth;
public:
    boat():Robot(){
    this->velocity=rand()%30+30;
    }
    int ifcrash(){
        environment ocean(50000,50000,10000,20000);
        int state=0;
        if(boat_depth>=0){
        cout<<"boat crash"<<endl;
        state=1;
        return state;
    }
    return state;
    }
};

