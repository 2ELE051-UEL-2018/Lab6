#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_real, Arg0_0)
{
	cplxp arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg0_pi_2)
{
	cplxp arg = { 0.0, M_PI/2.0 };
	ASSERT_NEAR(0.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg0_pi)
{
	cplxp arg = { 0.0, M_PI };
	ASSERT_NEAR(0.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg1_0)
{
	cplxp arg = { 1.0, 0.0 };
	ASSERT_NEAR(1.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg2_pi)
{
	cplxp arg = { 2.0, M_PI };
	ASSERT_NEAR(-2.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg3_mpi)
{
	cplxp arg = { 3.0, -M_PI };
	ASSERT_NEAR(-3.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg4_pi_2)
{
	cplxp arg = { 4.0, M_PI/2.0 };
	ASSERT_NEAR(0.0, cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg5_pi_4)
{
	cplxp arg = { 5.0, M_PI/4.0 };
	ASSERT_NEAR(2.5*sqrt(2.0), cplxp_real(arg), 1e-10);
}

TEST(cplxp_real, Arg6_pi_4)
{
	cplxp arg = { 6.0, 3.0*M_PI/4.0 };
	ASSERT_NEAR(-3.0*sqrt(2.0), cplxp_real(arg), 1e-10);
}
