#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H
#include <limits.h>

#define ABS(x) ((x < 0) ? (x == INT_MIN) ? (INT_MAX) : (-x) : (x))

#endif
