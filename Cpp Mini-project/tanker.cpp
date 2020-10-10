#include<iostream>
#include<string>
#include "tanker.h"

Tanker::Tanker():
    n1_5000(0), n2_10000(0), n1_cost(0), n2_cost(0){
    }

Tanker::Tanker(int n1, int n2, int c1, int c2):
    n1_5000(n1), n2_10000(n2){
    }

int Tanker::getT1(){
    return n1_5000;
    }

int Tanker::getT2(){
    return n2_10000;
    }

int Tanker::getC1(){
    return n1_cost;
    }

int Tanker::getC2(){
    return n2_cost;
    }
