#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_subtracao, Arg0_0_Arg0_0)
{
	cplxp arg1 = { 0.0, 0.0 };
	cplxp arg2 = { 0.0, 0.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg1_0_Arg0_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 0.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg0_0_Arg1_0)
{
	cplxp arg1 = { 0.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 1.0, M_PI };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg1_0_Arg1_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg1_pi_2_Arg0_0)
{
	cplxp arg1 = { 1.0, M_PI/2.0 };
	cplxp arg2 = { 0.0, 0.0 };
	cplxp esperado = { 1.0, M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg1_pi_2_Arg1_m3pi_2)
{
	cplxp arg1 = { 1.0, M_PI/2.0 };
	cplxp arg2 = { 1.0, -3.0*M_PI/2.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg1_pi_4_Arg1_m1_m3pi_4)
{
	cplxp arg1 = { 1.0, M_PI/4.0 };
	cplxp arg2 = { 1.0, -3.0*M_PI/4.0 };
	cplxp esperado = { 2.0, M_PI/4.0 };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}

TEST(cplxp_subtracao, Arg1_3pi_4_Arg1_pi_4)
{
	cplxp arg1 = { 1.0, 3.0*M_PI/4.0 };
	cplxp arg2 = { 1.0, M_PI/4.0 };
	cplxp esperado = { sqrt(2.0), M_PI };
	ASSERT_EQ(esperado, cplxp_subtracao(arg1, arg2));
}