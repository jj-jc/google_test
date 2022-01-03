#include <iostream> 
#include <gtest/gtest.h>

TEST(TestName , Subtest_1){  
    EXPECT_EQ(1, 1);
    std::cout<<"After expect"<< std::endl;

    ASSERT_EQ(1, 2);
    std::cout<<"After assertion"<< std::endl;  
}

// TEST(TestName2 , Subtest_1){
//     ASSERT_TRUE(1 ==1);
// }

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}