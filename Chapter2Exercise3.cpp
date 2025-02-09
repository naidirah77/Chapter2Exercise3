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
    int purchase;
     float stateSalesTax,
           countrySalesTax;
     cout << "Please enter your purchase total:"; 
     cin >> purchase;
     cout << "Please enter the state sales tax:";
     cin >> stateSalesTax;
     cout << "Please enter the country sales tax:";
     cin >> countrySalesTax;
     cout << purchase * stateSalesTax << endl;

     cout << "The total country sales tax on a $95 dollar purchase is $";
     cout << purchase * countrySalesTax << endl << endl; 
     return 0;


}


