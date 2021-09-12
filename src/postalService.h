#include "shipping.h"
#ifndef POSTALSERVICE_H
#define POSTALSERVICE_H

class PostalService : public Shipping {

    float distance;
    float weight;
    int clss;

    public:
        PostalService(float, float, int);
        virtual float ShippingCost(); 
        
};

#endif