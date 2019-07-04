#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>
#include <vector>


using namespace std;

int collect_change(){
    
    cout << "Please enter a number of cents to be converted: ";
    int total_cents {0};
    cin >> total_cents;
    
    return total_cents;
}

vector<int> convert_money(int i){
    
    int rem_coins {0};    
    vector<int> coins(5);
    
    coins.at(0) = (i / 100);
    rem_coins = (i % 100);
    i = rem_coins;
    
    coins.at(1) = (i / 25);
    rem_coins = (i % 25);
    i = rem_coins;
    
    coins.at(2) = (i / 10);
    rem_coins = (i % 10);
    i = rem_coins;
    
    coins.at(3) = (i / 5);
    rem_coins = (i % 5);
    i = rem_coins;
    
    coins.at(4) = i;
    
    return coins;
}

int main()
{
	int in_money = collect_change();
    vector<int> coin_money = convert_money(in_money);
    
    
    cout << "\nDollars: " << coin_money.at(0) << endl;
    cout << "Quarters: " << coin_money.at(1) << endl;
    cout << "Dimes: " << coin_money.at(2) << endl;
    cout << "Nickles: " << coin_money.at(3) << endl;
    cout << "Pennies: " << coin_money.at(4) << endl;
    
    
    
	return 0;
}
