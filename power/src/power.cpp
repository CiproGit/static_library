#include "power.h"
#include "mathematics.h"

Power::Power() {}

double Power::square(double a) {
	Mathematics math;
	return math.mul(a, a);
}
