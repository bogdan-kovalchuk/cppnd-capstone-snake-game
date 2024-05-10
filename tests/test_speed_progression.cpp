#include "test_helpers.h"
#include "speed_progression.h"

int main()
{
    ASSERT_EQ(AdvanceSpeed(0.1f, 0.005f, 0.5f), 0.105f);
    ASSERT_EQ(AdvanceSpeed(0.5f, 0.005f, 0.5f), 0.5f);
    ASSERT_EQ(AdvanceSpeed(-1.0f, 0.1f, 0.5f), 0.1f);
    ASSERT_EQ(AdvanceSpeed(0.1f, 0.1f, 0.0f), 0.0f);
    return test_summary();
}
