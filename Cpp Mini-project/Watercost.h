#include<iostream>  //stl class
#include<string>
#include"city.h"
#include "tanker.h"
#include "cost.h"
#ifndef WATERCOST_H_
#define WATERCOST_H_

using namespace std;

#include <list>
#include <iterator>

class Watercost{
   std::list <City> cities;

public:
    void add_city(string city,int n1, int n2, int c1, int c2, long int dayc, long int monthc, float area);
    void remove_city(string city);
    int number_of_cities_with_above_50000_cost();
    long int max_month_cost();
    long int min_month_cost();
    int max_5000t();
    int max_10000t();
    int min_5000t();
    int min_10000t();
    void display();
    int Number_of_cities();
};


#endif // WATERCOST_H_
