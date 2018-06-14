#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_produto, Arg0_0_Arg0_0)
{
	cplxp arg1 = { 0.0, 0.0 };
	cplxp arg2 = { 0.0, 0.0 };
	cplxp esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg1_0_Arg1_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg2_0_Arg1_0)
{
	cplxp arg1 = { 2.0, 0.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg1_0_Arg2_0)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 2.0, 0.0 };
	cplxp esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg1_pi_2_Arg1_0)
{
	cplxp arg1 = { 1.0, M_PI/2.0 };
	cplxp arg2 = { 1.0, 0.0 };
	cplxp esperado = { 1, M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg1_0_Arg1_pi_2)
{
	cplxp arg1 = { 1.0, 0.0 };
	cplxp arg2 = { 1.0, M_PI/2.0 };
	cplxp esperado = { 1, M_PI/2.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg3_pi_3_Arg0_5_pi_4)
{
	cplxp arg1 = { 3.0, M_PI/3.0 };
	cplxp arg2 = { 0.5, M_PI/4.0 };
	cplxp esperado = { 1.5, 7.0*M_PI/12.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg2_5_pi_3_Arg2_mpi_3)
{
	cplxp arg1 = { 2.5, M_PI/3.0 };
	cplxp arg2 = { 2.0, -M_PI/3.0 };
	cplxp esperado = { 5.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg2_5_mpi_3_Arg2_pi_3)
{
	cplxp arg1 = { 2.5, -M_PI/3.0 };
	cplxp arg2 = { 2.0, M_PI/3.0 };
	cplxp esperado = { 5.0, 0.0 };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}

TEST(cplxp_produto, Arg2_mpi_2_Arg3_mpi_2)
{
	cplxp arg1 = { 2.0, -M_PI/2.0 };
	cplxp arg2 = { 3.0, -M_PI/2.0 };
	cplxp esperado = { 6.0, M_PI };
	ASSERT_EQ(esperado, cplxp_produto(arg1, arg2));
}