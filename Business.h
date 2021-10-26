//
// Created by hloi on 10/26/2021.
//

#ifndef CSC109101BUSINESS_BUSINESS_H
#define CSC109101BUSINESS_BUSINESS_H


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Business {
public:
    // Business() {}

    Business(string name, string address) {
        this->name = name;
        this->address = address;
    }

     void SetName(string busName) {
        name = busName;
    }

    void SetAddress(string busAddress) {
        address = busAddress;
    }

    string GetDescription() const {
        return name + " -- " + address;
    }

    void Print() {
        cout << "Name: " << name << endl;
        cout << "Adress: " << address << endl;
    }

private:
    string name;
    string address;
};



#endif //CSC109101BUSINESS_BUSINESS_H
