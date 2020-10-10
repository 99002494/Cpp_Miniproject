
#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "cost.h"
#include "city.h"
#include "tanker.h"
#include "Watercost.h"


using namespace std;

class WatercostTest : public ::testing::Test {

protected:
  void SetUp()
  {

std::fstream fin;
fin.open("mini.csv");
std::vector<std::string> row;

std::string line, word;

 while(!fin.eof())
{
    row.clear();
    getline(fin,line);

    std::stringstream s(line);

    while(getline(s,word,','))
    {
        row.push_back(word);
    }

    int n1, n2, c1, c2;
    long int dayc, monthc;
    string city;
    float area;

 //   std::string arr[8] = {row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7]};

   std::vector<int> num;

   for(int i=0; i<8 ;i++)
   {
       int n = atoi(row[i].c_str());
       num.push_back(n);
   }

    city = num[0];
    n1 = num[1];
    n2 = num[2];
    c1 = num[3];
    c2 = num[4];
    dayc = num[5];
    monthc = num[6];
    area = num[7];

    dummy.add_city(city,n1,n2,c1,c2,dayc,monthc,area);

}

  }
  void TearDown() {}

  Watercost dummy;

};

TEST_F(WatercostTest,Addcity)
{
    dummy.add_city("Hyderabad", 20, 10, 500, 1000, 20000, 600000, 60.0);
    EXPECT_EQ(75,dummy.Number_of_cities());
}

TEST_F(WatercostTest,RemovecityTest)
{
    dummy.remove_city("Zaheerabad");
    EXPECT_EQ(74,dummy.Number_of_cities());
}

TEST_F(WatercostTest,Min5000_Test)
{
 EXPECT_EQ(0,dummy.min_5000t());

}

TEST_F(WatercostTest,Max5000_Test)
{
 EXPECT_EQ(50,dummy.max_5000t());

}

TEST_F(WatercostTest,MinMonthcostTest)
{
 EXPECT_EQ(0,dummy.min_month_cost());

}

TEST_F(WatercostTest,MaxMonthcostTest)
{
 EXPECT_EQ(1950000,dummy.max_month_cost());

}


TEST_F(WatercostTest,Max10000_Test)
{
 EXPECT_EQ(30,dummy.max_10000t());

}

TEST_F(WatercostTest,Min10000_Test)
{
 EXPECT_EQ(0,dummy.min_10000t());

}

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }




