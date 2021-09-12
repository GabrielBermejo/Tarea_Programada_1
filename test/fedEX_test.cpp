#include <gtest/gtest.h>

#include "../src/FedEX.h"
//Maximum Cost Test
namespace {
    TEST(FedEXTest1, ShippingCost_Test) {
        FedEX fedex {666, 7};
        float result = fedex.ShippingCost();

        EXPECT_EQ(28, result);
    }
}
//Distance Below Threshold Test
namespace {
    TEST(FedEXTest2, ShippingCost_Test) {
        FedEX fedex {300, 5};
        float result = fedex.ShippingCost();

        EXPECT_EQ(23, result);
    }
}
//Weight Below Threshold Test
namespace {
    TEST(FedEXTest3, ShippingCost_Test) {
        FedEX fedex {913, 3};
        float result = fedex.ShippingCost();

        EXPECT_EQ(25, result);
    }
}
//Both Values Below Threshold
namespace {
    TEST(FedEXTest4, ShippingCost_Test) {
        FedEX fedex {3, 1};
        float result = fedex.ShippingCost();

        EXPECT_EQ(20, result);
    }
}