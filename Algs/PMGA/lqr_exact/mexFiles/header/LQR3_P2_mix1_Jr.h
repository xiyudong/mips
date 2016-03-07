#ifndef LQR3_P2_mix_Jr_H
#define LQR3_P2_mix_Jr_H

double LQR3_P2_mix_Jr(double* tv, int tdim, double* param, int pdim) {

double t1 = tv[0], t2 = tv[1];

double r1 = param[0];
double r2 = param[1];
double r3 = param[2];
double r4 = param[3];
double r5 = param[4];
double r6 = param[5];
double r7 = param[6];
double r8 = param[7];
double r9 = param[8];

double t4 = r8*t1;
double t5 = r9*t2;
double t6 = r7+t4+t5;
double t7 = exp(t6);
double t8 = t7+1.0;
double t9 = 1.0/t8;
double t10 = 1.0/(t8*t8);
double t11 = t9*1.8E1;
double t42 = t10*9.0;
double t12 = t11-t42+1.0;
double t13 = r2*t1;
double t14 = r3*t2;
double t15 = r1+t13+t14;
double t16 = exp(t15);
double t17 = t16+1.0;
double t18 = 1.0/t17;
double t19 = 1.0/(t17*t17);
double t20 = t18*1.8E1;
double t22 = t19*9.0;
double t21 = t20-t22+1.0;
double t23 = 1.0/t21;
double t24 = t18*t23*2.18E2;
double t25 = t19*(1.0/1.0E1);
double t26 = t25+9.0/1.0E1;
double t27 = t20-1.8E1;
double t28 = 1.0/(t21*t21);
double t29 = t26*t27*t28*1.09E3;
double t30 = t24+t29;
double t31 = fabs(t30);
double t32 = r5*t1;
double t33 = r6*t2;
double t34 = r4+t32+t33;
double t35 = exp(t34);
double t36 = t35+1.0;
double t37 = 1.0/t36;
double t38 = 1.0/(t36*t36);
double t39 = t37*1.8E1;
double t59 = t38*9.0;
double t40 = t39-t59+1.0;
double t60 = 1.0/t40;
double t61 = t37*t60*1.962E3;
double t62 = t38*(9.0/1.0E1);
double t63 = t62+1.0/1.0E1;
double t64 = t39-1.8E1;
double t65 = 1.0/(t40*t40);
double t66 = t63*t64*t65*1.09E3;
double t67 = t61+t66;
double t41 = fabs(t67);
double t43 = 1.0/t12;
double t44 = t9*t43*1.962E3;
double t45 = t10*(9.0/1.0E1);
double t46 = t45+1.0/1.0E1;
double t47 = t11-1.8E1;
double t48 = 1.0/(t12*t12);
double t49 = t46*t47*t48*1.09E3;
double t50 = t44+t49;
double t51 = fabs(t50);
double t85 = t9*t43*2.18E2;
double t86 = t10*(1.0/1.0E1);
double t87 = t86+9.0/1.0E1;
double t88 = t47*t48*t87*1.09E3;
double t89 = t85+t88;
double t52 = fabs(t89);
double t53 = t18*t23*1.962E3;
double t54 = t19*(9.0/1.0E1);
double t55 = t54+1.0/1.0E1;
double t56 = t27*t28*t55*1.09E3;
double t57 = t53+t56;
double t58 = fabs(t57);
double t68 = t41*t41;
double t69 = t37*t60*2.18E2;
double t70 = t38*(1.0/1.0E1);
double t71 = t70+9.0/1.0E1;
double t72 = t64*t65*t71*1.09E3;
double t73 = t69+t72;
double t74 = fabs(t73);
double t75 = t58*t58;
double t76 = t51*t51;
double t77 = t31*t31;
double t78 = t68+t76+t77;
double t79 = 1.0/sqrt(t78);
double t80 = t30*t79;
double t81 = t74*t74;
double t82 = t75+t76+t81;
double t83 = 1.0/sqrt(t82);
double t84 = t67*t79;
double t90 = t52*t52;
double t91 = t68+t75+t90;
double t92 = 1.0/sqrt(t91);
double t102 = t57*t83;
double t93 = t80-t102;
double t100 = t57*t92;
double t94 = t80-t100;
double t95 = t50*t79;
double t103 = t67*t92;
double t96 = t84-t103;
double t108 = t50*t83;
double t97 = t95-t108;
double t101 = t73*t83;
double t98 = t84-t101;
double t107 = t89*t92;
double t99 = t95-t107;
double t104 = t93*t96;
double t105 = t104-t94*t98;
double t106 = fabs(t105);
double t109 = t94*t97;
double t110 = t109-t93*t99;
double t111 = fabs(t110);
double t112 = t96*t97;
double t113 = fabs(-t112+(t84-t101)*(t95-t107));
double t114 = r8*t7*t10*t50;
double t115 = r2*t16*t19*t57;
double t116 = r5*t35*t38*t67;
double t117 = r5*t35*t38*t73;
double t118 = t114+t115+t117;
double t119 = r2*t16*t19*t30;
double t120 = t114+t116+t119;
double t121 = r8*t7*t10*t89;
double t122 = t115+t116+t121;
double t123 = r9*t7*t10*t50;
double t124 = r3*t16*t19*t57;
double t125 = r6*t35*t38*t67;
double t126 = r6*t35*t38*t73;
double t127 = t123+t124+t126;
double t128 = r3*t16*t19*t30;
double t129 = t123+t125+t128;
double t130 = r9*t7*t10*t89;
double t131 = t124+t125+t130;
double t132 = t30*t120;
double t133 = t57*t118;
double t134 = t57*t122;
double t135 = t132+t133+t134;
double t136 = t73*t118;
double t137 = t67*t120;
double t138 = t67*t122;
double t139 = t136+t137+t138;
double t140 = t89*t122;
double t141 = t50*t120;
double t142 = t50*t118;
double t143 = t140+t141+t142;
double t144 = t30*t129;
double t145 = t57*t127;
double t146 = t57*t131;
double t147 = t144+t145+t146;
double t148 = t73*t127;
double t149 = t67*t129;
double t150 = t67*t131;
double t151 = t148+t149+t150;
double t152 = t89*t131;
double t153 = t50*t129;
double t154 = t50*t127;
double t155 = t152+t153+t154;
double t157 = t43*t46*1.09E3;
double t160 = t60*t63*1.09E3;
double t156 = fabs((t157+t160+t23*t26*1.09E3+1.9E1)/AUp1-1.0);
double t159 = t23*t55*1.09E3;
double t158 = fabs((t157+t159+t60*t71*1.09E3+1.9E1)/AUp2-1.0);
double t161 = fabs((t159+t160+t43*t87*1.09E3+1.9E1)/AUp3-1.0);
double t0 = -sqrt((r8*t7*t10*t143+r2*t16*t19*t135+r5*t35*t38*t139)*(r9*t7*t10*t155+r3*t16*t19*t147+r6*t35*t38*t151)-(r9*t7*t10*t143+r3*t16*t19*t135+r6*t35*t38*t139)*(r8*t7*t10*t155+r2*t16*t19*t147+r5*t35*t38*t151))*(beta_Var*fabs(-t30*t79*(t112-t98*t99)+t50*t79*t105+t67*t79*t110)*1.0/sqrt(t106*t106+t111*t111+t113*t113)-1.0)*(t156*t156+t158*t158+t161*t161);

return t0;
}

#endif