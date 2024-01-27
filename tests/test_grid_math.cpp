#include "test_helpers.h"
#include "grid_math.h"

int main()
{
    ASSERT_EQ(WrapGridCoordinate(0, 5), 0);
    ASSERT_EQ(WrapGridCoordinate(6, 5), 1);
    ASSERT_EQ(WrapGridCoordinate(-1, 5), 4);
    ASSERT_EQ(WrapGridCoordinate(-11, 5), 4);
    ASSERT_EQ(WrapGridCoordinate(3, 0), 0);
    return test_summary();
}
