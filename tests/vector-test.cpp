#include <gtest/gtest.h>

#include "../src/math/Vector2D.h"

TEST(VectorConstructorTest, WhenInitializingVector_GivenXandY_ExpectVector)
{
	float x{ 0.6 };
	float y{ 5.2 };

	Vector2D vector(x, y);

	ASSERT_EQ(x, vector.get_x());
	ASSERT_EQ(y, vector.get_y());
}

TEST(VectorMagTest, WhenGettingMagnitude_GivenVector_ExpectMagnitude)
{
	Vector2D vector(4, 3);

	float mag = vector.magnitude();

	ASSERT_EQ(5, mag);
}

TEST(VectorOverloadedTest, WhenAddingVectors_GivenTwoVectors_ExpectAddedXandY)
{
	float tol{ 0.001 };
	Vector2D vector1(2.5, 6.0);
	Vector2D vector2(5.2, 5.6);

	vector1 = vector1 + vector2;

	ASSERT_NEAR(7.7, vector1.get_x(), tol);
	ASSERT_NEAR(11.6, vector1.get_y(), tol);
}
