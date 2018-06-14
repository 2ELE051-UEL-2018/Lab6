#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_fase, Arg0_0)
{
	cplxp arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, normaliza_fase(cplxp_fase(arg)), 1e-10);
}

TEST(cplxp_fase, Arg1_0)
{
	cplxp arg = { 1.0, 0.0 };
	ASSERT_NEAR(0.0, normaliza_fase(cplxp_fase(arg)), 1e-10);
}

TEST(cplxp_fase, Arg1_pi_2)
{
	cplxp arg = { 1.0, M_PI/2.0 };
	ASSERT_NEAR(M_PI/2.0, normaliza_fase(cplxp_fase(arg)), 1e-10);
}

TEST(cplxp_fase, Arg1_m3pi_2)
{
	cplxp arg = { 1.0, -3.0*M_PI/2 };
	ASSERT_NEAR(M_PI/2.0, normaliza_fase(cplxp_fase(arg)), 1e-10);
}

TEST(cplxp_fase, Arg2_pi)
{
	cplxp arg = { 2.0, M_PI };
	ASSERT_NEAR(M_PI, normaliza_fase(cplxp_fase(arg)), 1e-10);
}

TEST(cplxp_fase, Arg3_mpi)
{
	cplxp arg = { 3.0, -M_PI };
	ASSERT_NEAR(M_PI, normaliza_fase(cplxp_fase(arg)), 1e-10);
}
