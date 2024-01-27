#include "grid_math.h"

int WrapGridCoordinate(int coordinate, int extent)
{
    if (extent <= 0)
    {
        return 0;
    }
    int wrapped = coordinate % extent;
    return wrapped < 0 ? wrapped + extent : wrapped;
}
