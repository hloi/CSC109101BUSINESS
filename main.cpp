#include <iostream>
#include "Business.h"
#include "Restaurant.h"
#include "CoffeeShop.h"

using namespace std;

int main() {
    Business b1("QCC", "670 West Boylston street, Worcester, MA 01606");

    Restaurant r1("Roy Rogers", "444 Park ave., Worcester, MA 01606", 5, 20);

//    b1.SetName("QCC");
//    b1.SetAddress("670 West Boylston street, Worcester, MA 01606");
    b1.Print();

//    r1.SetName("Roy Rogers");
//    r1.SetAddress("444 Park ave., Worcester, MA 01606");
//    r1.SetRating(5);
//    r1.SetSeating(100);
    r1.Print();
    cout << r1.GetDescription() << endl;

    CoffeeShop co("News", "20 Main st., Worcester, MA 01606");
    co.Print();

    cout << co.GetDescription() << endl;


    return 0;
}
