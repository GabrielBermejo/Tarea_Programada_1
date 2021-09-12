#ifndef UNIT_TEST

#include <iostream>
#include <vector>
#include "shipping.h"
#include "fedEX.h"
#include "postalService.h"
using namespace std;

int main() {

    FedEX *fedex1 = new FedEX(600, 5);
    FedEX *fedex2 = new FedEX(20, 3);
    PostalService *post1 = new PostalService(600, 10, 1);

//Total Cost Calculation
    double totalShipmentCost=0;
    std::vector<Shipping *> shipment;
    shipment.push_back(fedex1);
    shipment.push_back(fedex2);
    shipment.push_back(post1);
    for (Shipping *shipping : shipment)
    {
        totalShipmentCost+=shipping->ShippingCost();
    }
    std::cout<<"cost :" <<totalShipmentCost<<endl;
    // Memory Freeing
    delete fedex1;
    delete fedex2;
    delete post1;
    //delete shipment;

    return 0;
}

#endif