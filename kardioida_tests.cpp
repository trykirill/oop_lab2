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

    
