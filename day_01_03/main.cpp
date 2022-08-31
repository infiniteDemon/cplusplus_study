//
// Created by joker on 22-8-31.
//
#include "iostream"
using namespace std;
#include <unistd.h>

int main ()
{
    int year;
    bool isLeapYear;
     cout<<"Enter the year: ";
     cin>>year;
     isLeapYear = ((year%4==0) && (year%100!=0) || (year%400==0));
     if(isLeapYear)
     {
         cout<<year<<" is a leap year;"<<endl;
     }
     else
     {
         cout<<year<<"is not a leap year;"<<endl;
     }
     pause();
    return 0;
}