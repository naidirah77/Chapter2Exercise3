/*
File Name: Chapter2Exercise3.cpp
Programmer: Naidirah Muhammad
Date: 02/2025
Requirements:
Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent,
and the country sales tax is 2 percent.


*/

#include <iostream>
using namespace std;

int main()
{
    int purchase = 95;
     float stateSalesTax = .04,
           countrySalesTax = .02;
     cout << "The total state sales tax on a $95 dollar purchase is $";
     cout << purchase * stateSalesTax << endl;

     cout << "The total country sales tax on a $95 dollar purchase is $";
     cout << purchase * countrySalesTax << endl << endl; 

     return 0;

}


