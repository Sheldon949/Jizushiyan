/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003679304259_1938225339_init();
    work_m_00000000001996417839_1733832700_init();
    work_m_00000000001494274127_2138213552_init();
    work_m_00000000001338965317_3674772129_init();
    work_m_00000000000335156854_0886308060_init();
    work_m_00000000001318477185_3781281531_init();
    work_m_00000000000996317031_2461264495_init();
    work_m_00000000002341936182_3827462465_init();
    work_m_00000000002341936182_1109687540_init();
    work_m_00000000003968650577_1711025897_init();
    work_m_00000000001893200802_2244295302_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001893200802_2244295302");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
