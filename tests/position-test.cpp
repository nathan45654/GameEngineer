#include "gtest/gtest.h"

#include "../src/math/Position.h"

TEST(PositionConstructorTest, GivenXandY_WhenInitializingPosition_ExpectCorrectXandY)
{
	int x{ 1 };
	int y{ 4 };

	Position position(x, y);

	ASSERT_EQ(x, position.x);
	ASSERT_EQ(y, position.y);
}


//TEST(PositionOperatorTests, GivenTwoPositions_WhenSubstractingTwoPositions_ExpectVectorDifferenceBetweenPositions)
//{
//	Position position_1(5, 4);
//	Position position_2(1, 2);
//
//	int x_diff{ 4 };
//	int y_diff{ 2 };
//
//	Vector2D vector = position_1 - position_2;
//
//	ASSERT_EQ(x_diff, vector.get_x());
//	ASSERT_EQ(y_diff, vector.get_y());
//}

//TEST(PositionOperatorTests, GivenPositionAndVector_WhenAddingThem_ExpectUpdatedPosition)
//{
//	Position position(3, 2);
//	Vector2D vector(2, 1);
//
//	position = position + vector;
//
//	ASSERT_EQ(5, position.x);
//	ASSERT_EQ(3, position.y);
//}

//TEST(PositionOperatorTests, GivenPositionAndVector_WhenSubtractingThem_ExpectUpdatedPosition)
//{
//	Position position(3, 2);
//	Vector2D vector(2, 1);
//
//	position = position - vector;
//
//	ASSERT_EQ(1, position.x);
//	ASSERT_EQ(1, position.y);
//}

//TEST(PositionOperatorTests, GivenPositionAndPosition_WhenAssigning_ExpectUpdatedPosition)
//{
//	Position position_1(3, 2);
//
//	Position position_2 = position_1;
//
//	ASSERT_EQ(position_2.x, position_1.x);
//	ASSERT_EQ(position_2.y, position_1.y);
//}
