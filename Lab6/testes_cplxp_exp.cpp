#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_exp, Arg0_0)
{
	cplxp arg = { 0.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_exp(arg));
}

TEST(cplxp_exp, Arg1_0)
{
	cplxp arg = { 1.0, 0.0 };
	cplxp esperado = { exp(1.0), 0.0 };
	ASSERT_EQ(esperado, cplxp_exp(arg));
}

TEST(cplxp_exp, Argpi_2_pi_2)
{
	cplxp arg = { M_PI/2.0, M_PI/2.0 };
	cplxp esperado = { 0.0, 1.0 };
	ASSERT_EQ(esperado, cplxp_exp(arg));
}