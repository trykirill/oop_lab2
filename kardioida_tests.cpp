#include <gtest/gtest.h>
#include "head.h"
#include <math.h>

using namespace prog2;


TEST(kardioida, Test_001){
	Kard courv1(3);
	double rad1 = courv1.radius(M_PI * 0.3);
	ASSERT_NEAR(rad1, 2.47, 0.1);

	Kard courv2(6);
	double rad2 = courv2.radius(M_PI * 0.7);
	ASSERT_NEAR(rad2, 19.05, 0.1);

	Kard courv3(15);
	double rad3 = courv3.radius(M_PI * 1.3);
	ASSERT_NEAR(rad3, 47.63, 0.1);

	Kard courv4(11);
	double rad4 = courv4.radius(M_PI * 1.8);
	ASSERT_NEAR(rad4, 4.2, 0.1);
}

TEST(kardioida, Test_002){
	Kard courv1(3);
	double area1 = courv1.area();
	ASSERT_NEAR(area1, 169.646, 10);

	Kard courv2(6);
	double area2 = courv2.area();
	ASSERT_NEAR(area2, 678.584, 10);
	
	Kard courv3(15);
	double area3 = courv3.area();
	ASSERT_NEAR(area3, 4241.15, 10);
}


TEST(kardioida, Test_003){
	Kard courv1(3);
	double startAngle1 =37*M_PI/180;
	double endAngle1 =89*M_PI/180;
	double len1 = courv1.arc(startAngle1, endAngle1);
	ASSERT_NEAR(len1, 5.64, 0.1);

	Kard courv2(6);
	double startAngle2 =135*M_PI/180;
	double endAngle2 =360*M_PI/180;
	double len2 = courv2.arc(startAngle2, endAngle2);
	ASSERT_NEAR(len2, 66.37, 0.1);

	Kard courv3(15);
	double startAngle3 =5*M_PI/180;
	double endAngle3 =190*M_PI/180;
	double len3 = courv3.arc(startAngle3, endAngle3);
	ASSERT_NEAR(len3, 130.34, 0.1);
}

TEST(kardioida, Test_004){
	Kard courv1(3);
	double rad1 = courv1.radiusCr(M_PI * 0.3);
	ASSERT_NEAR(rad1, 2.72, 0.1);

	Kard courv2(6);
	double rad2 = courv2.radiusCr(M_PI * 0.7);
	ASSERT_NEAR(rad2, 10.69, 0.1);

	Kard courv3(15);
	double rad3 = courv3.radiusCr(M_PI * 1.3);
	ASSERT_NEAR(rad3, 26.73, 0.1);
}

/*
TEST(kardioida, Test_003){
	Kard courv(3);
	double rad1 = courv.radius();
	ASSEERT_NEAR(rad1, , 0.001);

}

TEST(kardioida, Test_004){
	Kard courv(3);
	double rad1 = courv.radius();
	ASSEERT_NEAR(rad1, , 0.001);

}


TEST(Evolvent, Test_002)
{
    Evolvent ev1;
    double r1 = ev1.GetRadius();
    ASSERT_EQ(r1, double(1));
    Evolvent ev2(5);
    double r2 = ev2.GetRadius();
    ASSERT_EQ(r2, double(5));
    Evolvent ev3(31.3);
    ASSERT_EQ(ev3.GetRadius(), 31.3);
    Evolvent ev4[2] = {4, 10};
    ASSERT_EQ(ev4[0].GetRadius(), 4);
    ASSERT_EQ(ev4[1].GetRadius(), 10);
    try {
        Evolvent ev5(-1);
    } catch (const std::runtime_error &x) {
        ASSERT_STREQ(x.what(), "У окружности не может быть отрицательный радиус");
    }
    try {
        Evolvent ev6(-1.21);
    } catch (const std::runtime_error &x) {
        ASSERT_STREQ(x.what(), "У окружности не может быть отрицательный радиус");
    }
}

TEST(Evolvent, Test_003)
{
    Kard courv(1);
    courv.radius(80);
    ASSERT_EQ(ev1.GetRadius(), 5);
    Evolvent ev2(5.31);
    ev2.SetRadius(4);
    ASSERT_EQ(ev2.GetRadius(), 4);
    Evolvent ev3(13.66);
    try
    {
        ev3.SetRadius(-4.1);
    } catch(const std::runtime_error &x) {
        ASSERT_STREQ(x.what(), "Вы не можете устанавливать отрицательный радиус");
    }
}

TEST(Evolvent, TEST_004)
{
    Evolvent ev1;
    double coordinates[2];
    Angle ang(90);
    ev1.calc_coord(ang, coordinates);
    double x = coordinates[0];
    double y = coordinates[1];
    ASSERT_NEAR(x, 1.5707, 0.0001);
    ASSERT_NEAR(y, double(1), 0.0001);

    double coordinates2[2];
    Angle ang2(180);
    ev1.calc_coord(ang2, coordinates);
    double x1 = coordinates[0];
    double y1 = coordinates[1];
    ASSERT_NEAR(x1, -1, 0.0001);
    ASSERT_NEAR(y1, 3.1415, 0.0001);
}

TEST(Evolvent, TEST_005)
{
    Evolvent ev1;
    Angle ang1(80);
    Angle ang2(175);
    Angle ang3(31);
    double dist1 = ev1.calc_dist(ang1);
    double dist2 = ev1.calc_dist(ang2);
    double dist3 = ev1.calc_dist(ang3);
    ASSERT_NEAR(dist1, 1.9596, 0.3);
    ASSERT_NEAR(dist2, 3.2135, 0.);
    ASSERT_NEAR(dist3, 1.137, 0.2);
}
*/
