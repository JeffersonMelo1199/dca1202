#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.h"


using namespace std;

int main()
{
    Sculptor a(90,90,90);
    a.setColor(0.5,1.0,0.5,0.2);

    a.putVoxel(5,5,5);
    //a.cutVoxel(5,5,5);

    a.putBox(10,25,10,25,10,25);
    //a.cutBox(10,25,10,25,10,25);

    a.putSphere(35,30,30,15);
    //a.cutSphere(35,30,30,15);

    a.putEllipsoid(50,35,70,22,15,17);
    //a.cutEllipsoid(50,35,70,22,15,17);


    
    string filename = "C:/Users/UFRNLAB/Documents/untitled/a.off";
    a.writeOFF(filename);


    return 0;
}
