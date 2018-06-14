#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_conj, Arg0_0)
{
	cplxp arg = { 0.0, 0.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_conj(arg));
}

TEST(cplxp_conj, Arg1_0)
{
	cplxp arg = { 1.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_conj(arg));
}

TEST(cplxp_conj, Arg2_pi_2)
{
	cplxp arg = { 2.0, M_PI/2.0 };
	cplxp esperado = { 2.0, 3.0*M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_conj(arg));
}

TEST(cplxp_conj, Arg3_pi)
{
	cplxp arg = { 3.0, M_PI };
	cplxp esperado = { 3.0, M_PI };
	ASSERT_EQ(esperado, cplxp_conj(arg));
}