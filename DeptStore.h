//
// Created by hloi on 10/26/2021.
//

#ifndef CSC109101BUSINESS_DEPTSTORE_H
#define CSC109101BUSINESS_DEPTSTORE_H
#include "Business.h"
#include <vector>

using std::vector;

class DeptStore : public Business {
public:
    DeptStore(string name, string address) : Business(name, address) {}
    void AddDept(Business b);
    Business GetDept(string name);

private:
    int parking;
    vector<Business> businesses;
};


#endif //CSC109101BUSINESS_DEPTSTORE_H
