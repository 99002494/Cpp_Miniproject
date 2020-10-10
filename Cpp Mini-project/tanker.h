#include <iostream>
#include<string>
#ifndef TANKER_H_  // base class
#define TANKER_H_

using namespace std;

class Tanker{

private:
    int n1_5000;
    int n2_10000;
    int n1_cost;
    int n2_cost;

public:
    Tanker();
    Tanker(int,int,int,int);
    int getT1();
    int getT2();
    int getC1();
    int getC2();

};

#endif

