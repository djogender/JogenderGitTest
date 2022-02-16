
//   #include <iostraem>
   #include <gtest/gtest.h>


    using namespace std;

    TEST(testname, subtest_1)
{
	ASSERT_EQ(6, 4);
}

    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }
