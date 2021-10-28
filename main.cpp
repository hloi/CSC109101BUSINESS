#include <iostream>
#include "Business.h"
#include "Restaurant.h"
#include "CoffeeShop.h"
#include "Stand.h"
#include <vector>
using namespace std;

int main() {

    vector<Business> shopList;

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

    Stand std1("Quilt shop", "Floor 2", 5);


    cout << std1.GetDescription() << endl;

    cout << "++++++++++++ vector list ++++++++++++" << endl;
    shopList.push_back(b1);
    shopList.push_back(r1);
    shopList.push_back(co);
    shopList.push_back(std1);

    for (int i=0; i<shopList.size(); i++) {
        cout << shopList.at(i).GetDescription() << endl;
    }

    for (int i=0; i<shopList.size(); i++) {
        shopList.at(i).Print();
    }

    return 0;
}
