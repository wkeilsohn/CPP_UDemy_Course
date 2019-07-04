#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>

using namespace std;

const int large_rm_price {35};
const int small_rm_price {25};

const double tax {0.06};

const int estimate_time {30};

double priceCalculator(){
    
    int i {0};
    cout << "\nHow many large rooms would you like cleaned: " << endl;
    cin >> i;
    
    int j {0};
    cout << "\nHow many small rooms would you like cleaned: " << endl;
    cin >> j;
    
    double total_price = (large_rm_price * i) + (small_rm_price * j);
    double price_with_tax = total_price * tax;
    total_price += price_with_tax;
    
    return total_price;
}

int main()
{
	cout << "Welcome to Frank's Carpet Cleaning Service!" << endl;

    double price  = priceCalculator();
    
    cout << "\nTotal cost for your cleaning is: $" << price << endl;
    
    cout << "\nThis offer is good for " << estimate_time << " days." << endl;
	
    
    return 0;
}
