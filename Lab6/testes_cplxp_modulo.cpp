#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_modulo, Arg0_0)
{
	cplxp arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, cplxp_modulo(arg), 1e-10);
}

TEST(cplxp_modulo, Arg0_pi_2)
{
	cplxp arg = { 0.0, M_PI/2.0 };
	ASSERT_NEAR(0.0, cplxp_modulo(arg), 1e-10);
}

TEST(cplxp_modulo, Arg1_0)
{
	cplxp arg = { 1.0, 0.0 };
	ASSERT_NEAR(1.0, cplxp_modulo(arg), 1e-10);
}

TEST(cplxp_modulo, Arg2_pi)
{
	cplxp arg = { 2.0, M_PI };
	ASSERT_NEAR(2.0, cplxp_modulo(arg), 1e-10);
}