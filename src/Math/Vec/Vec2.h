#ifndef VEC2_H
#define VEC2_H

#include "../../Utilities/Utilities.h"

typedef struct Vec2
{
	union
	{
		struct
		{
			float x;
			float y;
		};

		float asArray[2];
	};

	Vec2() : x(0.0f), y(0.0f) {}
	Vec2(float _x, float _y) : x(_x), y(_y) {}

	float& operator[](int i)
	{
		return asArray[i];
	}
}Vec2;

Vec2 operator+(const Vec2& v1, const Vec2& v2)
{
	return { v1.x + v2.x, v1.y + v2.y };
}

Vec2 operator-(const Vec2& v1, const Vec2& v2)
{
	return { v1.x - v2.x, v1.y - v2.y };
}

Vec2 operator*(const Vec2& v1, const Vec2& v2)
{
	return { v1.x * v2.x, v1.y * v2.y };
}

Vec2 operator*(const Vec2& v1, const float s)
{
	return { v1.x * s, v1.y * s };
}

bool operator==(const Vec2& v1, const Vec2& v2)
{
	return CMP(v1.x, v2.x) && CMP(v1.y, v2.y);
}

bool operator!=(const Vec2& v1, const Vec2 v2)
{
	return !(v1 == v2);
}

#endif
