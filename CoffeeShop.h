//
// Created by hloi on 10/26/2021.
//

#ifndef CSC109101BUSINESS_COFFEESHOP_H
#define CSC109101BUSINESS_COFFEESHOP_H
#include "Restaurant.h"

class CoffeeShop : public Restaurant {
public:
    CoffeeShop(string name, string address, int rating = 0, int seating = 0) : Restaurant(name, address, rating, seating) {
        this->SetName(name);
        this->SetAddress(address);
        this->rating = rating;
        this->seating = seating;
    }

};


#endif //CSC109101BUSINESS_COFFEESHOP_H
