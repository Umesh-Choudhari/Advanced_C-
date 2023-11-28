#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"

 
int main()
{
    //Declearartion of Vector which store tge objects of Triangle class
    std::vector<Triangle> triangles;

    //Storing the Triangles into vector
    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    //Writing the data from vectors to File using object of Writer class
    Writer writeGeometry;
    writeGeometry.write("Shape.txt", triangles);

}