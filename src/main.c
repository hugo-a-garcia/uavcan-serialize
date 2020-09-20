
#include <socketcan.h>
#include <canard.h>
#include <canard_dsdl.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int main(const int argc, const char *const argv[])
{
    float aFloat = 123.4567;
    uint8_t payload[4] = {0, 0, 0, 0};
    canardDSDLSetF32(payload, 0, aFloat);
    CanardDSDLFloat32 distance = canardDSDLGetF32(payload, 4, 0);
    printf("%f\n", aFloat);
    printf("%f\n", distance);
}
