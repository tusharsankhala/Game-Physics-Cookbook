#ifndef VEC3_H
#define VEC3_H

#include "../../Utilities/Utilities.h"

typedef struct Vec3
{
	union
	{
		struct
		{
			float x;
			float y;
			float z;
		};

		float asArray[3];
	};

	Vec3() : x(0.0f), y(0.0f), z(0.0f) {}
	Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

	float& operator[](int i)
	{
		return asArray[i];
	}
}Vec3;

Vec3 operator+(const Vec3& v1, const Vec3& v2)
{
	return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}

Vec3 operator-(const Vec3& v1, const Vec3& v2)
{
	return { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z };
}

Vec3 operator*(const Vec3& v1, const Vec3& v2)
{
	return { v1.x * v2.x, v1.y * v2.y, v1.z * v2.z };
}

Vec3 operator*(const Vec3& v1, const float s)
{
	return { v1.x * s, v1.y * s, v1.z * s };
}


bool operator==(const Vec3& v1, const Vec3& v2)
{
	return CMP(v1.x, v2.x);
}

bool operator!=(const Vec3& v1, const Vec3 v2)
{
	return !(v1 == v2);
}

#endif
