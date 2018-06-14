#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_soma, Arg0_0_Arg0_0)
{
	cplxp arg1 = { 0.0, 0.0 };
	cplxp arg2 = { 0.0, 0.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg1_0_Arg0_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 0.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg0_0_Arg1_0)
{
	cplxp arg1 = { 0.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg1_0_Arg1_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg1_0_Argm1_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { -1.0, 0.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg0_pi_2_Arg1_pi_2)
{
	cplxp arg1 = { 0.0, M_PI/2.0 };
	cplxp arg2 = { 1.0, M_PI/2.0 };
	cplxp esperado = { 1.0, M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg1_pi_2_Arg1_mpi_2)
{
	cplxp arg1 = { 1.0, M_PI/2.0 };
	cplxp arg2 = { 1.0, -M_PI/2.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg1_7pi_4_Arg1_7pi_4)
{
	cplxp arg1 = { 1.0, 7.0*M_PI/4.0 };
	cplxp arg2 = { 1.0, 7.0*M_PI/4.0 };
	cplxp esperado = { 2.0, 7.0*M_PI/4.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg2_pi_4_Arg2_3pi_4)
{
	cplxp arg1 = { 2.0, M_PI/4.0 };
	cplxp arg2 = { 2.0, 3.0*M_PI/4.0 };
	cplxp esperado = { 2.0*sqrt(2.0), M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg3_mpi_4_Arg3_5pi_4)
{
	cplxp arg1 = { 3.0, -M_PI/4.0 };
	cplxp arg2 = { 3.0, 5.0*M_PI/4.0 };
	cplxp esperado = { 3.0*sqrt(2.0), 3.0*M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}

TEST(cplxp_soma, Arg4_m2pi_3_Arg4_2pi_3)
{
	cplxp arg1 = { 4.0, -2.0*M_PI/3.0 };
	cplxp arg2 = { 4.0, 2.0*M_PI/3.0 };
	cplxp esperado = { 4.0, M_PI };
	ASSERT_EQ(esperado, cplxp_soma(arg1, arg2));
}