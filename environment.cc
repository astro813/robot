#include <iostream>
#include <cmath>
using namespace std;

class environment{
private:
    int coordinate_x;
    int coordinate_y;
    int coordinate_z;
    int *s;
    int *p;
    int *ocean;
    int ocean_depth;
    int land_square;
    int ocean_square;
    int air_height;
public:
    environment(int land_square,int ocean_square,int ocean_depth,int air_height):land_square(land_square),
    ocean_square(ocean_square),ocean_depth(ocean_depth),air_height(air_height){}
    void create_land_ocean(int land_square,int ocean_square)
    {
        this->s=new int[land_square+ocean_square];
        for(int i=0;i<land_square;i++){
            this->s[i]=0;
        }
        for(int j=land_square;j<land_square+ocean_square;j++){
            this->s[j]=1;
        }
    }
    
    void create_belowocean(int ocean_square, int ocean_depth){
        this->ocean=new int[ocean_square*ocean_depth];
        for(int i=0;i<ocean_square*ocean_depth;i++){
            this->ocean[i]=3;
        }
    }
    
    void create_air(int land_square,int ocean_square,int air_height)
    {
        this->p=new int[(land_square+ocean_square)*air_height];
        for(int i=0;i<(land_square+ocean_square)*air_height;i++){
            this->p[i]=2;
        }
    }
    int getdepth(){
        return this->ocean_depth;
    }
    int getheight(){
        return this->air_height;
    }
};

/*int main(){
 
 }
 */
