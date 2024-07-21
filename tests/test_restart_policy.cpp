#include "test_helpers.h"
#include "restart_policy.h"

int main()
{
    ASSERT_FALSE(ShouldRestartGame(false, true));
    ASSERT_FALSE(ShouldRestartGame(true, true));
    ASSERT_FALSE(ShouldRestartGame(false, false));
    ASSERT_TRUE(ShouldRestartGame(true, false));
    return test_summary();
}
