#ifndef TERRAIN_H
#define TERRAIN_H
#include <tuple>
using namespace std;

class grid {//TOBE FIXED 3. Add a function getHeight(float x, float z), return height of grid with given x,z value.
public:
    grid();
    grid(int mat,float inH, float mx, float mz);
    float Height;
    int mat;
    float mx;
    float mz;
};

#endif