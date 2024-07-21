#include "restart_policy.h"

bool ShouldRestartGame(bool requested, bool alive)
{
    return requested && !alive;
}
