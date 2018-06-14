#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_init_polar, Init0_0)
{
	cplxc res_esperado = { 0.0, 0.0 };
	ASSERT_EQ(res_esperado, cplxc_init_polar(0.0, 0.0));
}

TEST(cplxc_init_polar, Init1_pi_2)
{
	cplxc res_esperado = { 0.0, 1.0 };
	ASSERT_EQ(res_esperado, cplxc_init_polar(1.0, M_PI/2.0));
}

TEST(cplxc_init_polar, Init2_mpi_4)
{
	cplxc res_esperado = { sqrt(2.0), -sqrt(2.0) };
	ASSERT_EQ(res_esperado, cplxc_init_polar(2.0, -M_PI/4.0));
}

TEST(cplxc_init_polar, Init3_4pi_3)
{
	cplxc res_esperado = { -1.5, -3*sqrt(3.0)/2.0};
	ASSERT_EQ(res_esperado, cplxc_init_polar(3.0, 4.0*M_PI/3.0));
}
