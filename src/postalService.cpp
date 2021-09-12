#include "postalService.h"

//Constructor for class PostalService
PostalService::PostalService(float distance, float weight, int clss)
{
    this->distance=distance;
    this->weight = weight;
    this->clss=clss;
}

//Shipping Cost Calculator
float PostalService::ShippingCost() {
    float cost = 0;
    switch (clss)
    {
    case 1:
        if (weight<4)
        {
            cost=distance*0.195;
        }
        else{
            if (weight<9)
            {
            cost=distance*0.450;
            }
            else{
                cost=distance*0.500;
                }
            }
        break;
    case 2:
        if (weight<4)
        {
            cost=distance*0.0195;
        }
        else{
            if (weight<9)
            {
            cost=distance*0.0450;
            }
            else{
                cost=distance*0.0500;
                }
            }
        break;
    case 3:
        if (weight<4)
        {
            cost=distance*0.0150;
        }
        else{
            if (weight<9)
            {
            cost=distance*0.0160;
            }
            else{
                cost=distance*0.0170;
                }
            }
        break;
    
    
    }
    return cost;
}