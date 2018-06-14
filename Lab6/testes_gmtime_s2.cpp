#include <ctime>
#include "gtest/gtest.h"
#include "aux_test_functions.h"

extern "C"
{
	errno_t gmtime_s2(struct tm *result, const time_t *clock);
}

TEST(gmtime_s2, Data01011970_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora000001)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 1, 0, 0, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora000059)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 0, 0, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);

}

TEST(gmtime_s2, Data01011970_Hora000100)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 1, 0, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora000130)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 30, 1, 0, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora005959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 0, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora010000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 1, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora123456)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 56, 34, 12, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011970_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 1, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data02011970_Hora133700)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 00, 37, 13, 2, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31011970_Hora101010)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 10, 10, 10, 31, 0, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01021970_Hora010203)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 3, 2, 1, 1, 1, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021970_Hora120000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 12, 28, 1, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031970_Hora152535)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 35, 25, 15, 1, 2, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31031970_Hora141516)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 16, 15, 14, 31, 2, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data30041970_Hora175739)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 39, 57, 17, 30, 3, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31051970_Hora180000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 00, 00, 18, 31, 4, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data30061970_Hora021433)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 33, 14, 2, 30, 5, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31071970_Hora081500)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 15, 8, 31, 6, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31081970_Hora212959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 29, 21, 31, 7, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data30091970_Hora092142)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 42, 21, 9, 30, 8, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31101970_Hora192357)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 57, 23, 19, 31, 9, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data30111970_Hora222222)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 22, 22, 22, 30, 10, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121970_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 70 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data0101971_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 71 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021971_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 71 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031971_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 71 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121971_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 71 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011972_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 72 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data29021972_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 29, 1, 72 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031972_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 72 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121972_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 72 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011973_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 73 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021973_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 73 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031973_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 73 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121973_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 73 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011974_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 74 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021974_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 74 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031974_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 74 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121974_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 74 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011975_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 75 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021975_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 75 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031975_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 75 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121975_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 75 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011976_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 76 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data29021976_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 29, 1, 76 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031976_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 76 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121976_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 76 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011979_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 79 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021979_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 79 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031979_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 79 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121979_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 79 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011980_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 80 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data29021980_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 29, 1, 80 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031980_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 80 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121980_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 80 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01011999_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 99 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28021999_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 99 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01031999_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 99 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31121999_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 99 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01012000_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 100 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data29022000_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 29, 1, 100 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01032000_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 100 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31122000_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 100 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01012001_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 0, 101 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data28022001_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 28, 1, 101 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data01032001_Hora000000)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 0, 0, 1, 2, 101 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data31122001_Hora235959)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 59, 59, 23, 31, 11, 101 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data07062018_Hora023500)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 0, 35, 2, 7, 5, 118 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}

TEST(gmtime_s2, Data19012038_Hora031407)
{
	time_t clock;
	struct tm res, res_esperado;

	struct tm arg = { 7, 14, 3, 19, 0, 138 };
	clock = _mkgmtime(&arg);

	gmtime_s(&res_esperado, &clock);
	gmtime_s2(&res, &clock);
	ASSERT_EQ(res_esperado, res);
}
