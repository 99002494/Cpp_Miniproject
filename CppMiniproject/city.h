#include <iostream>  //derived class
#include<string>
#ifndef CITY_H_
#define CITY_H_

#include "cost.h"
#include "tanker.h"

using namespace std;

class City: public Tanker, public Cost
{
private:
    string m_city;
    float m_area;

public:
    City();
    City(string,int,int,int,int,long int,long int,float);
    string getCity();
    float getArea();
};

#endif
