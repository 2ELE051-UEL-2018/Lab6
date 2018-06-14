#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_modulo, Arg0_0)
{
	cplxc arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, cplxc_modulo(arg), 1e-10);
}

TEST(cplxc_modulo, Arg1_0)
{
	cplxc arg = { 1.0, 0.0 };
	ASSERT_NEAR(1.0, cplxc_modulo(arg), 1e-10);
}

TEST(cplxc_modulo, Arg0_1)
{
	cplxc arg = { 0.0, 1.0 };
	ASSERT_NEAR(1.0, cplxc_modulo(arg), 1e-10);
}

TEST(cplxc_modulo, Argsqrt2_sqrt2)
{
	cplxc arg = { sqrt(2.0), sqrt(2.0) };
	ASSERT_NEAR(2.0, cplxc_modulo(arg), 1e-10);
}

TEST(cplxc_modulo, Arg3_m3)
{
	cplxc arg = { 3.0, -3.0 };
	ASSERT_NEAR(3.0*sqrt(2.0), cplxc_modulo(arg), 1e-10);
}

TEST(cplxc_modulo, Argm4_2)
{
	cplxc arg = { -4.0, 2.0 };
	ASSERT_NEAR(2*sqrt(5.0), cplxc_modulo(arg), 1e-10);
}

TEST(cplxc_modulo, Argm1_m5)
{
	cplxc arg = { -1.0, 5.0 };
	ASSERT_NEAR(sqrt(26.0), cplxc_modulo(arg), 1e-10);
}