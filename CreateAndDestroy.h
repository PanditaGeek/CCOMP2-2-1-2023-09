#include <string>

#ifndef TIME_H
#define TIME_H

class CreateAndDestroy{
  public:
    CreateAndDestroy(int, std::string);
    ~CreateAndDestroy();
  private:
    int objectID;
    std::string message;
};

#endif