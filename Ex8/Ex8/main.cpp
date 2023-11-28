#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"


int main()
{
    //Declearartion of Vector which store the objects of Triangle class
    std::vector<Triangle> triangles;

    //Reading the file and storing the Triangles into vector
    Reader readShape("E:\\Ramesh__Workspace\\Sketcher Exercise\\EX8\\Ex8\\cubeModel.stl");
    readShape.getTriangles(triangles);

    Triangulation triangulation(triangles);

    //Writing the data into the file from vector of Triangles using object of Writer class
    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("E:\\Ramesh__Workspace\\Sketcher Exercise\\EX8\\Updated Sketchers\\triangles.txt", outTriangles);

}