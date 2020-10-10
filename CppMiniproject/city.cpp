#include<iostream>
#include<string>
#include "city.h"
#include "tanker.h"

using namespace std;

City::City(): Tanker(), Cost(), m_city(""), m_area(0.0){
}

City::City(string city,int n1, int n2, int c1, int c2, long int dayc, long int monthc, float area):
    m_city(city),
    Tanker(n1,n2,c1,c2),
    Cost(dayc,monthc),
    m_area(area){
    }

string City::getCity(){
    return m_city;
}

float City::getArea(){
    return m_area;
}
