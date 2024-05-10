#include "speed_progression.h"

float AdvanceSpeed(float speed, float increment, float maximum)
{
    if (maximum <= 0.0f)
    {
        return 0.0f;
    }
    const float current = speed < 0.0f ? 0.0f : speed;
    const float next = increment > 0.0f ? current + increment : current;
    return next > maximum ? maximum : next;
}
