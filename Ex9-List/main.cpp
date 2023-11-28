#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    //Declearartion of list which store the objects of Triangle class
    std::list<Triangle> triangles;

    //Reading the file and storing the Triangles into vector
    Reader reader("cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    //Writing the data into the file from list of Triangles using object of Writer class
    Writer writer;
    std::list<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);

    
}
