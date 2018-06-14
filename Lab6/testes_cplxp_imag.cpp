#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_imag, Arg0_0)
{
	cplxp arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg1_0)
{
	cplxp arg = { 1.0, 0.0 };
	ASSERT_NEAR(0.0, cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg1_pi)
{
	cplxp arg = { 1.0, M_PI };
	ASSERT_NEAR(0.0, cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg2_pi_2)
{
	cplxp arg = { 2.0, M_PI/2.0 };
	ASSERT_NEAR(2.0, cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg3_3pi_2)
{
	cplxp arg = { 3.0, 3.0*M_PI/2.0 };
	ASSERT_NEAR(-3.0, cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg4_mpi_2)
{
	cplxp arg = { 4.0, -M_PI/2.0 };
	ASSERT_NEAR(-4.0, cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg5_pi_4)
{
	cplxp arg = { 5.0, M_PI/4.0 };
	ASSERT_NEAR(2.5*sqrt(2), cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg6_4pi_3)
{
	cplxp arg = { 6.0, 4.0*M_PI/3.0 };
	ASSERT_NEAR(-3.0*sqrt(3), cplxp_imag(arg), 1e-10);
}

TEST(cplxp_imag, Arg7_7pi_4)
{
	cplxp arg = { 7.0, 7.0*M_PI/4.0 };
	ASSERT_NEAR(-3.5*sqrt(2), cplxp_imag(arg), 1e-10);
}