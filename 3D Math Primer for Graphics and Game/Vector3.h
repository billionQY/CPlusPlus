#pragma once
class Vector3
{
public:
	float x;
	float y;
	float z;

public:
	Vector3() { }
	Vector3(const Vector3 &a) : x(a.x), y(a.y), z(a.z) { }
	Vector3(float nx, float ny, float nz) : x(nx), y(ny), z(nz) { }

public:
	Vector3 &operator =(const Vector3 &a);
	bool operator ==(const Vector3 &a) const;
	bool operator !=(const Vector3 &a) const;
	Vector3 operator -() const;
	Vector3 operator +(const Vector3 &a) const;
	Vector3 operator -(const Vector3 &a) const;
	Vector3 operator *(float a) const;
	Vector3 operator /(float a) const;
	Vector3 &operator +=(const Vector3 &a);
	Vector3 &operator -=(const Vector3 &a);
	Vector3 &operator *=(float a);
	Vector3 &operator /=(float a);
	float operator *=(const Vector3 &a) const;

public:
	void Zero();
	void Normalize();
};

inline float VectorMag(const Vector3 &a);
inline float CrossProduct(const Vector3 &a, const Vector3 &b);
inline Vector3 operator *(float k, const Vector3 &v);
inline float Distance(const Vector3 &a, const Vector3 &b);

extern const Vector3 KZeroVector;

