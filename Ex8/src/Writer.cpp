#include <fstream>
#include "../headers/Writer.h"
#include "iostream"

Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}

void Writer::write(std::string filePath, std::vector<Triangle> &triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);

  for (std::vector<Triangle>::iterator itr = triangles.begin(); itr != triangles.end(); ++itr)
  {
    std::cout << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
    std::cout << (*itr).p2().x() << " " << (*itr).p2().y() << " " << (*itr).p2().z() << std::endl;
    std::cout << (*itr).p3().x() << " " << (*itr).p3().y() << " " << (*itr).p3().z() << std::endl;
  }

  for (std::vector<Triangle>::iterator itr = triangles.begin(); itr != triangles.end(); ++itr)
  {
    dataFile << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
    dataFile << (*itr).p2().x() << " " << (*itr).p2().y() << " " << (*itr).p2().z() << std::endl;
    dataFile << (*itr).p3().x() << " " << (*itr).p3().y() << " " << (*itr).p3().z() << std::endl;
    dataFile << (*itr).p1().x() << " " << (*itr).p1().y() << " " << (*itr).p1().z() << std::endl;
  }

  
  dataFile.close();
};