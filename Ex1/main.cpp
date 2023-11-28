#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"
 
int main()
{

    std::vector<Triangle> triangles;
    Reader readShape("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex1\\Ex1\\resources\\cubeModel.stl");
    readShape.getTriangles(triangles);

    Writer writeGeometry;
    writeGeometry.write("E:\\Ramesh__Workspace\\Sketcher Exercise\\Ex1\\Ex1\\Shape.txt", triangles);
    
    
}