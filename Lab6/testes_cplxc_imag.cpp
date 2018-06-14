#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_imag, Arg0_0)
{
	cplxc arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, cplxc_imag(arg), 1e-10);
}

TEST(cplxc_imag, Arg1_0)
{
	cplxc arg = { 1.0, 0.0 };
	ASSERT_NEAR(0.0, cplxc_imag(arg), 1e-10);
}

TEST(cplxc_imag, Argm1_0)
{
	cplxc arg = { -1.0, 0.0 };
	ASSERT_NEAR(0.0, cplxc_imag(arg), 1e-10);
}

TEST(cplxc_imag, Arg0_m1)
{
	cplxc arg = { 0.0, -1.0 };
	ASSERT_NEAR(-1.0, cplxc_imag(arg), 1e-10);
}

TEST(cplxc_imag, Arg2_1)
{
	cplxc arg = { 2.0, 1.0 };
	ASSERT_NEAR(1.0, cplxc_imag(arg), 1e-10);
}