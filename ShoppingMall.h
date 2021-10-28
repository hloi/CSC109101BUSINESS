//
// Created by hloi on 10/26/2021.
//

#ifndef CSC109101BUSINESS_SHOPPINGMALL_H
#define CSC109101BUSINESS_SHOPPINGMALL_H
#include "Business.h"
#include <vector>

using std::vector;

class ShoppingMall : public Business {
public:
    ShoppingMall(string name, string address) : Business(name, address) {}
    void AddShop(Business* b);
    Business GetDept(string name);
    void Print();
    void GetDescription();
    ~ShoppingMall();

private:
    int parking;
    vector<Business*> businesses;
};


#endif //CSC109101BUSINESS_SHOPPINGMALL_H
