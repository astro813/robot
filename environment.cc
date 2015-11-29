#include <iostream>
#include <cmath>
using namespace std;

class environment{
private:
       double coordinate_x;
       double coordinate_y;
       double coordinate_z;
       double *s;
       double *p;
       double *ocean;
       int depth;
       int land_square;
       int ocean_square;
       int height;
public:
      void create_land_ocean(double *s,int land_square,int ocean_square)
      {
        this->s=new double[land_square+ocean_square];
        for(int i=0;i<land_square;i++){
           this->s[i]=0;
        }
        for(int j=land_square;j<land_square+ocean_square;j++){
            this->s[j]=1;
        }
      }

      void create_belowocean(double *ocean,int ocean_square, int depth){
        this->ocean=new double[ocean_square*depth];
        for(int i=0;i<ocean_square*depth;i++){
               this->ocean[i]=3;
        }
      }

      void create_air(double *p,int land_square,int ocean_square,int height)
      {
          this->p=new double[(land_square+ocean_square)*height];
          for(int i=0;i<(land_square+ocean_square)*height;i++){
                this->p[i]=2;
        }
      }
};

/*int main(){

}
*/
