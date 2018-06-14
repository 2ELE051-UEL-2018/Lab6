#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

TEST(cplxp_init_polar, Init0_0)
{
	cplxp res_esperado = { 0.0, 0.0 };
	ASSERT_EQ(res_esperado, cplxp_init_polar(0.0, 0.0));
}

TEST(cplxp_init_polar, Init1_pi_2)
{
	cplxp res_esperado = { 1.0, M_PI/2.0 };
	ASSERT_EQ(res_esperado, cplxp_init_polar(1.0, M_PI/2.0));
}

TEST(cplxp_init_polar, Init2_mpi_4)
{
	cplxp res_esperado = { 2.0, -M_PI/4.0 };
	ASSERT_EQ(res_esperado, cplxp_init_polar(2.0, -M_PI/4.0));
}
