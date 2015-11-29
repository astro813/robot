#include <iostream>
#include <cmath>
using namespace std;
#include <random>
#include "robot.cc"

class car : public Robot{
private:
    double velocity;
public:
    car():Robot(){
    this->velocity=rand()%40+40;
    }
};
