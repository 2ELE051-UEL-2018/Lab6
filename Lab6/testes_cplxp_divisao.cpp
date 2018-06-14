#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_divisao, Arg1_0_Arg1_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg2_0_Arg1_0)
{
	cplxp arg1 = { 2.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg1_0_Arg2_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 2.0, 0.0 };
	cplxp esperado = { 0.5, 0.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg2_pi_2_Arg1_pi_2)
{
	cplxp arg1 = { 2.0, M_PI/2.0 };
	cplxp arg2 = { 1.0, M_PI/2.0 };
	cplxp esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg2_pi_2_Arg2_0)
{
	cplxp arg1 = { 2.0, M_PI/2.0 };
	cplxp arg2 = { 2.0, 0.0 };
	cplxp esperado = { 1.0, M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg3_pi_Arg2_pi_4)
{
	cplxp arg1 = { 3.0, M_PI };
	cplxp arg2 = { 2.0, M_PI/4.0 };
	cplxp esperado = { 1.5, 3.0*M_PI/4.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg6_m2pi_3_Arg3_2pi_3)
{
	cplxp arg1 = { 6.0, -2.0*M_PI/3.0 };
	cplxp arg2 = { 3.0, 2.0*M_PI/3.0 };
	cplxp esperado = { 2.0, 2.0*M_PI/3.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}

TEST(cplxp_divisao, Arg1_mpi_Arg10_mpi)
{
	cplxp arg1 = {  1.0, -M_PI };
	cplxp arg2 = { 10.0, -M_PI };
	cplxp esperado = { 0.1, 0.0 };
	ASSERT_EQ(esperado, cplxp_divisao(arg1, arg2));
}