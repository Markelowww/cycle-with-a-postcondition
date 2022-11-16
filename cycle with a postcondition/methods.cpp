#include <inttypes.h>
void CycleWithPostcondition(int64_t& k64, double& n1, double& x1, double x, double& rez, int64_t& i64, const int64_t& n64)
{
    do
    {
        k64++;
        n1 = (float)k64 * n1;
        x1 = -1 * x * x * x1;
        rez = rez + x1 / n1;
        ++i64;
    } while (i64 <= n64);
}