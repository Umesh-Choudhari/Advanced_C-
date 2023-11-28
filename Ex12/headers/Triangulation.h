#pragma once
#include <vector>
#include "Triangle.h"
#include "BBox.h"

class Triangulation : public Triangle
{

public:
    Triangulation();
    Triangulation(std::vector<Triangle> triangles);
    ~Triangulation();

    std::vector<Triangle> getTriangles();
    virtual void print();


private:
    std::vector<Triangle> mTriangles;
    BBox mBBox;
};
