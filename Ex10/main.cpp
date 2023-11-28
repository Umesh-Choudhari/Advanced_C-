#include<iostream>
#include<deque>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    //Declearartion of deque which store the objects of Triangle class
    std::deque<Triangle> triangles;

    //Reading the file and storing the Triangles into vector
    Reader reader("cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    //Writing the data into the file from vector of Triangles using object of Writer class
    Writer writer;
    std::deque<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);

}