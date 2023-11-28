#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"

 
int main()
{
    //Declearartion of Vector which store the objects of Triangle class
    std::vector<Triangle> triangles;

    //Reading the file and storing the Triangles into vector
    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    //Writing the data into the file from vector of Triangles using object of Writer class
    Writer writeGeometry;
    writeGeometry.write("Shape.txt", triangles);


}