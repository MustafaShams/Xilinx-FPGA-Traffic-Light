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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Shams/Desktop/Final Project/FinalProject/traffic_light.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {150000000U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {250000000U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {8U, 0U};



static void Always_41_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 2292U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2488);
    *((int *)t2) = 1;
    t3 = (t0 + 2320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1172U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1676);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(103, ng0);

LAB101:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1492);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB24:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(42, ng0);

LAB12:    xsi_set_current_line(43, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1492);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB11;

LAB14:    xsi_set_current_line(49, ng0);

LAB25:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 1768);
    t8 = (t7 + 36U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB27;

LAB26:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB28;

LAB29:    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(56, ng0);

LAB43:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1584);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;

LAB47:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(61, ng0);

LAB52:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB50:
LAB33:    goto LAB24;

LAB16:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB54;

LAB53:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB55;

LAB56:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(71, ng0);

LAB62:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB60:    goto LAB24;

LAB18:    xsi_set_current_line(76, ng0);

LAB63:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB65;

LAB64:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB66;

LAB67:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(83, ng0);

LAB81:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1584);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB85;

LAB82:    if (t18 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t6) = 1;

LAB85:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(88, ng0);

LAB90:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB88:
LAB71:    goto LAB24;

LAB20:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB92;

LAB91:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB92;

LAB95:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB93;

LAB94:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(98, ng0);

LAB100:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB98:    goto LAB24;

LAB27:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(50, ng0);

LAB34:    xsi_set_current_line(51, ng0);
    t33 = ((char*)((ng7)));
    t34 = (t0 + 1492);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 4, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1264U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB38:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB33;

LAB37:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(53, ng0);

LAB42:    xsi_set_current_line(54, ng0);
    t22 = ((char*)((ng3)));
    t28 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    goto LAB41;

LAB46:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t29 = ((char*)((ng8)));
    t31 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB50;

LAB54:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;
    goto LAB56;

LAB58:    xsi_set_current_line(68, ng0);

LAB61:    xsi_set_current_line(69, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 1492);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 32, 0LL);
    goto LAB60;

LAB65:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t6) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(77, ng0);

LAB72:    xsi_set_current_line(78, ng0);
    t31 = ((char*)((ng11)));
    t32 = (t0 + 1492);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1264U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB76;

LAB73:    if (t18 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB76:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB71;

LAB75:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(80, ng0);

LAB80:    xsi_set_current_line(81, ng0);
    t22 = ((char*)((ng3)));
    t28 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    goto LAB79;

LAB84:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(84, ng0);

LAB89:    xsi_set_current_line(85, ng0);
    t29 = ((char*)((ng12)));
    t31 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB88;

LAB92:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;
    goto LAB94;

LAB96:    xsi_set_current_line(95, ng0);

LAB99:    xsi_set_current_line(96, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 1492);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 4, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 32, 0LL);
    goto LAB98;

}


extern void work_m_00000000003930362652_2999996614_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000003930362652_2999996614", "isim/traffic_light_isim_beh.exe.sim/work/m_00000000003930362652_2999996614.didat");
	xsi_register_executes(pe);
}
