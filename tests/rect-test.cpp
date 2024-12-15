#include <gtest/gtest.h>

#include "../src/math/Rect.h"
#include "../src/math/Vector2D.h"
#include "../src/math/Position.h"

TEST(RectConstructorTest, WhenInitialized_GivenXandY_ExpectXandY) {

	int x{ 1 };
	int y{ 2 };
	int w{ 5 };
	int h{ 5 };

	Rect rect(x, y, w, h);

	ASSERT_EQ(x, rect.x);
	ASSERT_EQ(y, rect.y);
	ASSERT_EQ(w, rect.w);
	ASSERT_EQ(h, rect.h);
}

TEST(RectConstructorTest, WhenInitialized_GivenPosition_ExpectXandY) {

	Position pos(1, 2);
	int w{ 5 };
	int h{ 5 };

	Rect rect(pos.x, pos.y, w, h);

	ASSERT_EQ(pos.x, rect.x);
	ASSERT_EQ(pos.y, rect.y);
	ASSERT_EQ(w, rect.w);
	ASSERT_EQ(h, rect.h);
}


TEST(RectMoveTest, WhenMovingToCenter_GivenCenter_ExpectXandY)
{
	Rect rect(1, 2, 5, 5);
	Position new_center(4, 5);

	rect.move_center_to(new_center);

	ASSERT_EQ(new_center.x, rect.center().x);
	ASSERT_EQ(new_center.y, rect.center().y);
}

//TEST(RectMoveTest, WhenMovingToTopLeft_GivenTopLeft_ExpectXandY)
//{
//	Rect rect(1, 2, 5, 5);
//	Position new_top_left(4, 5);
//
//	rect.move_top_left_to(new_top_left);
//
//	ASSERT_EQ(new_top_left.x, rect.top_left().x);
//	ASSERT_EQ(new_top_left.y, rect.top_left().y);
//}

TEST(RectGetPosTests, WhenCalculatingTopLeft_GivenXYWH_ExpectTopLeftPos)
{
	Rect rect(1, 2, 5, 5);

	Position top_left( 1, 2 );

	ASSERT_EQ(top_left.x, rect.top_left().x);
	ASSERT_EQ(top_left.y, rect.top_left().y);
}

TEST(RectGetPosTests, WhenCalculatingTopRight_GivenXYWH_ExpectTopRightPos)
{
	Rect rect(1, 2, 5, 5);

	Position top_right{ 6, 2 };

	ASSERT_EQ(top_right.x, rect.top_right().x);
	ASSERT_EQ(top_right.y, rect.top_right().y);
}

TEST(RectGetPosTests, WhenCalculatingBottomLeft_GivenXYWH_ExpectBottomLeftPos)
{
	Rect rect(1, 2, 5, 5);

	Position bottom_left{ 1, 7 };

	ASSERT_EQ(bottom_left.x, rect.bottom_left().x);
	ASSERT_EQ(bottom_left.y, rect.bottom_left().y);
}

TEST(RectGetPosTests, WhenCalculatingBottomRight_GivenXYWH_ExpectBottomRightPos)
{
	Rect rect(1, 2, 5, 5);

	Position bottom_right{ 6, 7 };

	ASSERT_EQ(bottom_right.x, rect.bottom_right().x);
	ASSERT_EQ(bottom_right.y, rect.bottom_right().y);
}

TEST(RectGetPosTests, WhenCalculatingCenter_GivenXYWH_ExpectCenterPos)
{
	Rect rect(1, 2, 5, 5);

	Position center{ 3, 4 };

	ASSERT_EQ(center.x, rect.center().x);
	ASSERT_EQ(center.y, rect.center().y);
}


TEST(RectGetIntTests, WhenCalculatingLeft_GivenGivenXYWH_ExpectLeft)
{
	Rect rect(1, 2, 5, 5);

	int left{ 1 };

	ASSERT_EQ(left, rect.left());
}

TEST(RectGetIntTests, WhenCalculatingLeft_GivenGivenXYWH_ExpectRight)
{
	Rect rect(1, 2, 5, 5);

	int right{ 6 };

	ASSERT_EQ(right, rect.right());
}

TEST(RectGetIntTests, WhenCalculatingLeft_GivenGivenXYWH_ExpectTop)
{
	Rect rect(1, 2, 5, 5);

	int top{ 2 };

	ASSERT_EQ(top, rect.top());
}

TEST(RectGetIntTests, WhenCalculatingLeft_GivenGivenXYWH_ExpectBottom)
{
	Rect rect(1, 2, 5, 5);

	int bottom{ 7 };

	ASSERT_EQ(bottom, rect.bottom());
}


TEST(RectCopyTests, WhenMovingCenterTo_GivenCenter_ExpectGetCenterAtCenter)
{
	Rect rect{ 1, 2, 5, 5 };
	Position center{ 5, 6 };

	rect.move_center_to(center);

	ASSERT_EQ(center.x, rect.center().x);
	ASSERT_EQ(center.y, rect.center().y);
}

TEST(RectCopyTests, WhenCopyingRect_GivenOtherRect_ExpectExactCopy)
{
	int x{ 1 };
	int y{ 2 };
	int w{ 5 };
	int h{ 5 };

	Rect other_rect(x, y, w, h);
	Rect rect;
	rect.copy_rect(other_rect);

	ASSERT_EQ(x, rect.x);
	ASSERT_EQ(y, rect.y);
	ASSERT_EQ(w, rect.w);
	ASSERT_EQ(h, rect.h);
}


TEST(RectVectorTests, WhenAddingVectorAndRect_GivenVectorAndRect_ExpectRectMovedByVector)
{
	Rect rect(3, 4, 2, 2);
	Vector2D vector(1, 2);

	rect.add_vector(vector);

	ASSERT_EQ(4, rect.x);
	ASSERT_EQ(6, rect.y);
}