//
// Created by hloi on 10/28/2021.
//

#ifndef CSC109101BUSINESS_STAND_H
#define CSC109101BUSINESS_STAND_H
#include <string>
#include <iostream>

#include "Business.h"

class Stand : public Business {

private:
    int standNum;
public:

    Stand(string name, string address, int stand) : Business(name, address), standNum(stand) {}

    int getStandNum() const;
    string GetDescription() const {
        string s = Business::GetDescription() + "\n";
        return s + " -- " + std::to_string(standNum);
    }

    void Print() {
        Business::Print();
        cout << "Stand number: " << standNum << endl;
    }
};


#endif //CSC109101BUSINESS_STAND_H
