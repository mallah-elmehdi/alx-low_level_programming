#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H
#include <limits.h>

#define ABS(x) ((x < 0) ? (x == INT_MAX) ? (INT_MAX + 1) : (-x) : (x))

#endif
