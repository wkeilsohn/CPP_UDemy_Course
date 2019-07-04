#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>
#include <vector>
#include <numeric>


using namespace std;

bool run = true;

bool runChecker(string i){
    vector<string> answers {
        "No", "n", "N", "no", "NO", "Nah", "nah"
    };
    bool runChecked = false;
    for(auto val: answers){
        if(i == val){
            runChecked = true;
            break;
        }else{
            runChecked = false;
        }
    }
    return runChecked;
};


vector<int> numLst {
    100, 88, 25
}; // Shust a little something to start the show.


void numAdder(){
    cout << "Please enter a number: ";
    int i;
    cin >> i;
    numLst.push_back (i);
};

void numPrinter(){
    for(auto val: numLst){
        cout << val << endl;
    }
};

bool quit(){
    string ans;
    cout << "Are you sure you want to Quit? ";
    cin >> ans;    
    bool quitVal = runChecker(ans);
    return quitVal;
}

vector<string> optionVals {
    "P - Print Numbers",
    "A - Add a number",
    "M - Display mean of the Numbers",
    "S - Display the Smallest Number",
    "L - Display the Largect Number",
    "Q - Quit"
};

int optionsDisplay(){
    for(auto i: optionVals){
        cout << i << endl;
    }
    cout << "Enter the letter coresponding to your choice:";
    string userVal;
    cin >> userVal;
    
    if(userVal == "P" || userVal == "p"){
        return 0;
    }else if(userVal == "A" || userVal == "a"){
        return 1;
    }else if(userVal == "M" || userVal == "m"){
        return 2;
    }else if(userVal == "s" || userVal == "S"){
        return 3;
    }else if(userVal == "l" || userVal == "L"){
        return 4;
    }else if(userVal == "q" || userVal == "Q"){
        return 5;
    }else{
        return 6;
    };
};

void meanPrinter(){
    float meanVal = accumulate(numLst.begin(), numLst.end(), 0.0)/ numLst.size();
    cout << "The mean of the list is: " << meanVal << endl;
};

void maxPrinter(){
    auto maxium = *max_element(numLst.begin(), numLst.end());
    cout << "The max value in the list is: " << maxium << endl;
};

void minPrinter(){
    auto minmum = *min_element(numLst.begin(), numLst.end());
    cout << "The smallest value in the list is: " << minmum << endl;
};


int main()
{
    while(run){
        cout << "Please select an option from the list:" << endl;
        int optNumber = optionsDisplay();
        if(optNumber == 0){
            numPrinter();
        }else if(optNumber == 1){
            numAdder();
        }else if(optNumber == 2){
            meanPrinter();
        }else if(optNumber == 3){
            minPrinter();
        }else if(optNumber == 4){
            maxPrinter();
        }else if(optNumber == 5){
            run = quit();
        }else{
            cout << "That us an invalid option. \n Please try again." << endl;
        }
    }
	return 0;
}
