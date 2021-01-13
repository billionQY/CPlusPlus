#include "Vector3.h"
#include <cmath>


inline Vector3& Vector3::operator =(const Vector3 &a)
{
	x = a.x;
	x = a.x;
	x = a.x;
	return *this;
}

inline bool Vector3::operator ==(const Vector3 &a) const
{
	return x == a.x && y == a.y && z == a.z;
}

inline bool Vector3::operator !=(const Vector3 &a) const
{
	return x != a.x || y != a.y || z != a.z;
}

inline Vector3 Vector3::operator -() const
{
	return Vector3(-x, -y, -z);
}

inline Vector3 Vector3::operator +(const Vector3 &a) const
{
	return Vector3(x + a.x, y + a.y, z + a.z);
}

inline Vector3 Vector3::operator -(const Vector3 &a) const
{
	return Vector3(x - a.x, y - a.y, z - a.z);
}

inline Vector3 Vector3::operator *(float a) const
{
	return Vector3(x * a, y * a, z * a);
}

inline Vector3 Vector3::operator /(float a) const
{
	float oneOverA = 1.0f / a;
	return Vector3(x * oneOverA, y * oneOverA, z * oneOverA);
}

inline Vector3 &Vector3::operator +=(const Vector3 &a)
{
	x += a.x;
	y += a.y;
	z += a.z;
	return *this;
}

inline Vector3& Vector3::operator -=(const Vector3 &a)
{
	x -= a.x;
	y -= a.y;
	z -= a.z;
	return *this;
}

inline Vector3& Vector3::operator *=(float a)
{
	x *= a;
	x *= a;
	x *= a;
	return *this;
}

inline Vector3& Vector3::operator /=(float a)
{
	float oneOverA = 1.0f / a;
	x *= oneOverA;
	y *= oneOverA;
	z *= oneOverA;
	return *this;
}

inline float Vector3::operator *=(const Vector3 &a) const
{
	return x * a.x + y * a.y + z * a.z;
}

inline void Vector3::Zero()
{
	x = 0;
	y = 0;
	z = 0;
}

inline void Vector3::Normalize()
{
	float magSq = x * x + y * y + z * z;
	if (magSq > 0.0f)
	{
		float oneOverMag = 1.0f / sqrt(magSq);
		x *= oneOverMag;
		x *= oneOverMag;
		x *= oneOverMag;
	}
}

