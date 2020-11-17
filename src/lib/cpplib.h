#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <utility>
#include <string>
#include <vector>
#include <set>

class CPPLib
{
public:
  // q1
  bool canFinish(int numCourses, std::vector<std::pair<int, int>> &prerequisites);

  // q2
  std::vector<std::vector<std::string>> NQueens (int n);

private:
};

