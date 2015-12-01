#include <iostream>
#include <cmath>
using namespace std;

class environment{
private:
       int land_length;
       int land_width;
       int ocean_length;
       int ocean_width;
       int ocean_depth;
       int air_height;
       int ***envir;
public:
      environment(int land_length,int land_width, int ocean_length,int ocean_width,int ocean_depth,int air_height):land_length(land_length),
      land_width(land_width),ocean_length(ocean_length),ocean_width(ocean_width),ocean_depth(ocean_depth),air_height(air_height){
        int ***envir = new int ** [land_length+ocean_length];
          for (int i = 0;i < land_length+ocean_length;i++)
            {
                envir[i] = new int*[land_width+ocean_width];
          for (int j = 0;j < land_width+ocean_width;j++)
            {
                envir[i][j] = new int [ocean_depth+air_height];
          }
          }

          for (int k = 0;k < land_length+ocean_length;k++)
            {
                for (int j = 0;j < land_width+ocean_width;j++)
                {
                    for (int i = 0;i < ocean_depth+air_height;i++)
                    {
                        envir[k][j][i] = 0;
          }
          }
          }

          for (int k = 0;k < land_length;k++)
            {
                for (int j = 0;j < land_width;j++)
                {

                        envir[k][j][ocean_depth] = 1;
          }
          }
           for (int k = land_length;k < land_length+ocean_length;k++)
            {
                for (int j = land_width;j < land_width+ocean_width;j++)
                {

                        envir[k][j][ocean_depth] = 2;
          }
          }
         for (int k = land_length;k < land_length+ocean_length;k++)
            {
                for (int j = land_width;j < land_width+ocean_width;j++)
                {
                    for (int i = 0;i < ocean_depth;i++)
                    {
                        envir[k][j][i] = 3;
          }
          }
          }
           for (int k = 0;k < land_length+ocean_length;k++)
            {
                for (int j = 0;j < land_width+ocean_width;j++)
                {
                    for (int i = ocean_depth;i < ocean_depth+air_height;i++)
                    {
                        envir[k][j][i] = 4;
          }
          }
          }
      }

      int getdepth(){
      return this->ocean_depth;
      }
      int getheight(){
      return this->air_height;
      }
};
