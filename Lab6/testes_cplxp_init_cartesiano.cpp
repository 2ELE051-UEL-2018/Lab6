#include <iostream>
#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_init_cartesiano, Init1_0)
{
	cplxp res_esperado = { 1.0, 0.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(1.0, 0.0));
}

TEST(cplxp_init_cartesiano, Init0_1)
{
	cplxp res_esperado = { 1.0, M_PI/2.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(0.0, 1.0));
}

TEST(cplxp_init_cartesiano, Init1_1)
{
	cplxp res_esperado = { sqrt(2), M_PI / 4.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(1.0, 1.0));
}

TEST(cplxp_init_cartesiano, Init0_0)
{
	cplxp res_esperado = { 0.0, 0.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(0.0, 0.0));
}

TEST(cplxp_init_cartesiano, Initm2_2)
{
	cplxp res_esperado = { sqrt(8), 3.0*M_PI/4.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(-2.0, 2.0));
}

TEST(cplxp_init_cartesiano, Initm3_m3)
{
	cplxp res_esperado = { sqrt(18), 5.0*M_PI / 4.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(-3.0, -3.0));
}

TEST(cplxp_init_cartesiano, Init4_m4)
{
	cplxp res_esperado = { sqrt(32), 7.0*M_PI / 4.0 };
	ASSERT_EQ(res_esperado, cplxp_init_cartesiano(4.0, -4.0));
}