//
// Created by hloi on 10/26/2021.
//

#ifndef CSC109101BUSINESS_RESTAURANT_H
#define CSC109101BUSINESS_RESTAURANT_H
#include "Business.h"
#include <string>

using std::string;
using std::to_string;

class Restaurant : public Business {
public:


    Restaurant(string name, string address, int rating=0, int seating=0) : Business(name, address) {
        this->seating = seating;
        this->rating = rating;
    }

    void SetRating(int userRating) {
        rating = userRating;
    }

    void SetSeating(int seat) {
        seating = seat;
    }

    int GetRating() const {
        return rating;
    }

    string GetDescription() {
        string s = Business::GetDescription();
        s += " -- " + to_string(rating) + " -- " + to_string(seating);
        return s;
    }

    void Print() {
        Business::Print();
        cout << "Seating: " << seating << endl;
        cout << "Rating: " << rating << endl;
    }
protected:
    int rating;
    int seating;
};

#endif //CSC109101BUSINESS_RESTAURANT_H
