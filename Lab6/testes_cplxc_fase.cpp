#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_fase, Arg0_0)
{
	cplxc arg = { 0.0, 0.0 };
	ASSERT_NEAR(0.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Arg1_0)
{
	cplxc arg = { 1.0, 0.0 };
	ASSERT_NEAR(0.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Arg0_1)
{
	cplxc arg = { 0.0, 1.0 };
	ASSERT_NEAR(M_PI/2.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Arg1_1)
{
	cplxc arg = { 1.0, 1.0 };
	ASSERT_NEAR(M_PI/4.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Argm1_sqrt3)
{
	cplxc arg = { -1.0, sqrt(3.0) };
	ASSERT_NEAR(2.0*M_PI/3.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Arg1_msqrt3)
{
	cplxc arg = { 1.0, -sqrt(3.0) };
	ASSERT_NEAR(5.0*M_PI/3.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Argsqrt3_m1)
{
	cplxc arg = { sqrt(3.0), -1.0 };
	ASSERT_NEAR(11.0*M_PI/6.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Argmsqrt3_1)
{
	cplxc arg = { -sqrt(3.0), 1.0 };
	ASSERT_NEAR(5.0*M_PI/6.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}

TEST(cplxc_fase, Argm1_m1)
{
	cplxc arg = { -1.0, -1.0 };
	ASSERT_NEAR(5.0*M_PI/4.0, normaliza_fase(cplxc_fase(arg)), 1e-10);
}