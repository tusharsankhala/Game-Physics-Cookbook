#ifndef UTILITIES_H
#define UTILITIES_H

#include <float.h>
#include <math.h>

#define CMP(x, y)							 \
	(fabsf((x) - (y)) <= FLT_EPSILON *		 \
		fmaxf(1.0f,							 \
		fmaxf(fabsf(x), fabsf(y)))			 \
)											 \

#endif
