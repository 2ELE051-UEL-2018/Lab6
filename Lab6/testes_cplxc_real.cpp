#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_real, Arg0_0)
{
	cplxc arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, cplxc_real(arg), 1e-10);
}

TEST(cplxc_real, Arg0_1)
{
	cplxc arg = { 0.0, 1.0 };
	ASSERT_NEAR(0.0, cplxc_real(arg), 1e-10);
}

TEST(cplxc_real, Arg0_m1)
{
	cplxc arg = { 0.0, -1.0 };
	ASSERT_NEAR(0.0, cplxc_real(arg), 1e-10);
}

TEST(cplxc_real, Arg1_0)
{
	cplxc arg = { 1.0, 0.0 };
	ASSERT_NEAR(1.0, cplxc_real(arg), 1e-10);
}

TEST(cplxc_real, Arg2_1)
{
	cplxc arg = { 2.0, 1.0 };
	ASSERT_NEAR(2.0, cplxc_real(arg), 1e-10);
}

TEST(cplxc_real, Arg3_m1)
{
	cplxc arg = { 3.0, -1.0 };
	ASSERT_NEAR(3.0, cplxc_real(arg), 1e-10);
}
