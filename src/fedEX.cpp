#include "fedEX.h"

//Constructor for class FedEX
FedEX::FedEX(float distance, float weight)
{
    this->distance=distance;
    this->weight = weight;
}

//Shipping Cost Calculator
float FedEX::ShippingCost() {
    float cost = 20;
    if(distance>500){
        cost+=5;
    }
    if (weight>4)
    {
        cost+=3;
    }
    
    return cost;
}
