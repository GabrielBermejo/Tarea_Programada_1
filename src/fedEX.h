#ifndef FEDEX_H
#define FEDEX_H

#include "shipping.h"
#include <string>

class FedEX : public Shipping {

    float distance;
    float weight;

    public:
        FedEX(float, float);
        virtual float ShippingCost(); 
        
};

#endif