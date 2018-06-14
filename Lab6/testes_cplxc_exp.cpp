#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_exp, Arg0_0)
{
	cplxc arg = { 0.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_exp(arg));
}

TEST(cplxc_exp, Arg1_0)
{
	cplxc arg = { 1.0, 0.0 };
	cplxc esperado = { exp(1.0), 0.0 };
	ASSERT_EQ(esperado, cplxc_exp(arg));
}

TEST(cplxc_exp, Arg0_pi_2)
{
	cplxc arg = { 0.0, M_PI/2.0 };
	cplxc esperado = { 0.0, 1.0 };
	ASSERT_EQ(esperado, cplxc_exp(arg));
}

TEST(cplxc_exp, Arg2_pi_2)
{
	cplxc arg = { 2.0, M_PI/2.0 };
	cplxc esperado = { 0.0, exp(2.0) };
	ASSERT_EQ(esperado, cplxc_exp(arg));
}

TEST(cplxc_exp, Argpi_pi)
{
	cplxc arg = { M_PI, M_PI };
	cplxc esperado = { -exp(M_PI), 0.0 };
	ASSERT_EQ(esperado, cplxc_exp(arg));
}