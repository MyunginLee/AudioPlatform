#ifndef __240C_HELPERS__
#define __240C_HELPERS__

#include <cmath>

float mtof(float m) { return 8.175799 * powf(2.0f, m / 12.0f); }
float ftom(float f) { return 12.0f * log2f(f / 8.175799); }
float dbtoa(float db) { return 1.0f * powf(10.0f, db / 20.0f); }
float atodb(float a) { return 20.0f * log10f(a / 1.0f); }

#endif
