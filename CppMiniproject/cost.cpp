#include<iostream>
#include<string>
#include "cost.h"


using namespace std;

Cost::Cost():
    day_cost(0), month_cost(0){
    }

Cost::Cost(long int dayc, long int monthc):
    day_cost(dayc), month_cost(monthc){
    }

long int Cost:: getDaycost(){
    return day_cost;
    }

long int Cost:: getMonthcost(){
    return month_cost;
    }
