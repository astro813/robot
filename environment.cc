#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class environment{
private:
    double HEIGHT;
    double WIDTH;
    double DEPTH;
    vector<vector<vector<double> > > environment3D;
    // need a 2d or 3d grid of land, water, (and if 3d, air)
       //environment needs a list of robots...
public:
      environment(double HEIGHT,double WIDTH,double DEPTH):HEIGHT(HEIGHT),WIDTH(WIDTH),DEPTH(DEPTH)
      {
       environment3D.resize(HEIGHT);
      for (int i = 0; i < HEIGHT; i++)
        {
            environment3D[i].resize(WIDTH);
            for (int j = 0; j < WIDTH; j++)
                {
                    environment3D[i][j].resize(DEPTH);
            }
        }
      }

      int getdwidth(){
      return this->WIDTH;
      }
      int getdepth(){
      return this->DEPTH;
      }
      int getheight(){
      return this->HEIGHT;
      }
      int getenvironment(double HEIGHT,double WIDTH,double DEPTH)
      {
          return environment3D[HEIGHT][WIDTH][DEPTH];
      }
};

/*
int main(){
environment c(1,2,2);
cout<<c.getheight();
}
*/
