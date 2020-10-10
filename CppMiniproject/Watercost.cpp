#include "Watercost.h"
#include "cost.h"
#include "city.h"
#include "tanker.h"
#include<iostream>
#include<string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void Watercost:: add_city(string city, int n1, int n2, int c1, int c2, long int dayc, long int monthc, float area)
{
       cities.push_back(City(city,n1,n2,c1,c2,dayc,monthc,area));
}

void Watercost:: remove_city(string city)
{
    std::list<City> :: iterator iter;
    for(iter=cities.begin(); iter!=cities.end(); ++iter)
    {
        if(iter->getCity()==city)
        {
            cities.erase(iter);
            break;
        }
    }
}


int Watercost::number_of_cities_with_above_50000_cost()
{
    std::list<City>:: iterator iter;
    int count=0;

    for(iter=cities.begin(); iter!=cities.end(); ++iter)
    {
        if(iter->getMonthcost() >= 50000)
            count++;
    }
return count;
}


long int Watercost::min_month_cost()
{
    std::list<City>:: iterator iter = cities.begin();

    int minc = iter-> getMonthcost();
    iter++;

    for(;iter!=cities.end(); ++iter)
    {
        if(minc > iter-> getMonthcost())
        {
            minc = iter->getMonthcost();
        }
    }

    return minc;
}


long int Watercost::max_month_cost()
{
    std::list<City>:: iterator iter = cities.begin();

    int maxc = iter->getMonthcost();
    iter++;

    for(; iter!=cities.end();++iter)
     {
         if( maxc < iter->getMonthcost())
         {
             maxc = iter->getMonthcost();
         }
     }
    return maxc;
}


int Watercost::min_10000t()
{
    std::list<City>:: iterator iter = cities.begin();

    int mini = iter-> getT2();
    iter++;

    for(;iter!=cities.end(); ++iter)
    {
        if(mini > iter-> getT2())
        {
            mini = iter->getT2();
        }
    }

    return mini;
}


int Watercost:: max_10000t()
{
    std::list<City> :: iterator iter = cities.begin();

    int maxi = iter->getT2();
    iter++;

     for(; iter!=cities.end();++iter)
     {
         if( maxi < iter->getT2())
         {
             maxi = iter->getT2();
         }

     }
    return maxi;
}


int Watercost::min_5000t()
{
    std::list<City>:: iterator iter = cities.begin();

    int minimum = iter-> getT1();
    iter++;

    for(;iter!=cities.end(); ++iter)
    {
        if(minimum > iter-> getT1())
        {
            minimum = iter->getT1();
        }
    }

    return minimum;
}


int Watercost:: max_5000t()
{
    std::list<City> :: iterator iter = cities.begin();

    int maximum = iter->getT1();
    iter++;

     for(; iter!=cities.end();++iter)
     {
         if( maximum < iter->getT1())
         {
             maximum = iter->getT1();
         }

     }
    return maximum;
}


void Watercost:: display()
{
      std::list<City> :: iterator iter;
    for(iter=cities.begin(); iter!=cities.end();++iter)
    {
        std::cout << iter->getCity() << "," << iter->getDaycost() << "," << iter->getMonthcost() << iter->getArea() <<std::endl;
    }

}


int Watercost::Number_of_cities()
{
   std::list<City> :: iterator iter;
   int count =0;
    for(iter=cities.begin(); iter!=cities.end();++iter)
    {
        count++;
    }

   return count;
}
