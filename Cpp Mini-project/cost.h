#include<iostream>
#include<string>

#ifndef COST_H_  // base class
#define COST_H_

using namespace std;

class Cost{

private:
    long int day_cost;
    long int month_cost;

public:
    Cost();
    Cost(long int, long int);
    long int getDaycost();
    long int getMonthcost();
};


#endif // COST_H_
