#ifndef SHIPPING_H
#define SHIPPING_H


class Shipping {

    protected:
    Shipping(){}

    public:
    ~Shipping(){}
    virtual float ShippingCost()=0;


    
};

#endif