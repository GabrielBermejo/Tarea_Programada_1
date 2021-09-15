#include <gtest/gtest.h>

#include "../src/postalService.h"
//First Weight Class / First Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_1_1) {
        PostalService postser {1, 1, 1};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.195, result);
    }
}
//First Weight Class / Second Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_1_2) {
        PostalService postser {1, 1, 2};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.0195, result);
    }
}
//First Weight Class / Third Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_1_3) {
        PostalService postser {1, 1, 3};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.0150, result);
    }
}

//Second Weight Class / First Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_2_1) {
        PostalService postser {1, 4, 1};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.450, result);
    }
}

//Second Weight Class / Second Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_2_2) {
        PostalService postser {1, 4, 2};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.0450, result);
    }
}

//Second Weight Class / Third Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_2_3) {
        PostalService postser {1, 4, 3};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.0160, result);
    }
}

//Third Weight Class / First Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_3_1) {
        PostalService postser {1, 9, 1};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.500, result);
    }
}

//Third Weight Class / Second Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_3_2) {
        PostalService postser {1, 9, 2};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.0500, result);
    }
}

//Third Weight Class / Third Class Fee Cost Test
namespace {
    TEST(postalServiceTest, ShippingCost_Test_3_3) {
        PostalService postser {1, 9, 3};
        float result = postser.ShippingCost();

        EXPECT_EQ(0.0170, result);
    }
}