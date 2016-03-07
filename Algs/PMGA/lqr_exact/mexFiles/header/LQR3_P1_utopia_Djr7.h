#ifndef LQR3_P1_utopia_Djr7_H
#define LQR3_P1_utopia_Djr7_H

double LQR3_P1_utopia_Djr7(double* tv, int tdim, double* param, int pdim) {

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

double t4 = r4-3.338299811;
double t5 = t1*t4;
double t6 = r5*t2;
double t7 = t1*t1;
double t8 = t2*t2;
double t11 = r4*t7;
double t12 = r5*t8;
double t13 = r6*t1*t2;
double t9 = t5+t6-t11-t12-t13+1.151035476;
double t10 = exp(t9);
double t14 = t10+1.0;
double t15 = 1.0/t14;
double t16 = 1.0/(t14*t14);
double t17 = t15*1.8E1;
double t19 = t16*9.0;
double t18 = t17-t19+1.0;
double t20 = 1.0/t18;
double t21 = t15*t20*2.18E2;
double t22 = t16*(1.0/1.0E1);
double t23 = t22+9.0/1.0E1;
double t24 = t17-1.8E1;
double t25 = 1.0/(t18*t18);
double t26 = t23*t24*t25*1.09E3;
double t27 = t21+t26;
double t28 = r7+3.338299811;
double t29 = t1*t28;
double t30 = r8+3.338299811;
double t31 = t2*t30;
double t34 = r7*t7;
double t35 = r8*t8;
double t36 = r9*t1*t2;
double t32 = t29+t31-t34-t35-t36-2.187264336;
double t33 = exp(t32);
double t37 = t33+1.0;
double t38 = 1.0/t37;
double t39 = 1.0/(t37*t37);
double t40 = t38*1.8E1;
double t63 = t39*9.0;
double t41 = t40-t63+1.0;
double t42 = r2-3.338299811;
double t43 = t2*t42;
double t44 = r1*t1;
double t47 = r1*t7;
double t48 = r2*t8;
double t49 = r3*t1*t2;
double t45 = t43+t44-t47-t48-t49+1.151035476;
double t46 = exp(t45);
double t50 = t46+1.0;
double t51 = 1.0/t50;
double t52 = 1.0/(t50*t50);
double t53 = t51*1.8E1;
double t68 = t52*9.0;
double t54 = t53-t68+1.0;
double t55 = t15*t20*1.962E3;
double t56 = t16*(9.0/1.0E1);
double t57 = t56+1.0/1.0E1;
double t58 = t24*t25*t57*1.09E3;
double t59 = t55+t58;
double t60 = r4*t1*2.0;
double t61 = r6*t2;
double t62 = -r4+t60+t61+3.338299811;
double t64 = 1.0/t41;
double t65 = t40-1.8E1;
double t66 = 1.0/(t41*t41);
double t87 = r7*t1*2.0;
double t88 = r9*t2;
double t67 = r7-t87-t88+3.338299811;
double t69 = 1.0/t54;
double t70 = t51*t69*1.962E3;
double t71 = t52*(9.0/1.0E1);
double t72 = t71+1.0/1.0E1;
double t73 = t53-1.8E1;
double t74 = 1.0/(t54*t54);
double t75 = t72*t73*t74*1.09E3;
double t76 = t70+t75;
double t77 = r1*t1*2.0;
double t78 = r3*t2;
double t79 = -r1+t77+t78;
double t80 = t46*t52*t76*t79;
double t81 = t10*t16*t59*t62;
double t82 = t38*t64*1.962E3;
double t83 = t39*(9.0/1.0E1);
double t84 = t83+1.0/1.0E1;
double t85 = t65*t66*t84*1.09E3;
double t86 = t82+t85;
double t89 = t38*t64*2.18E2;
double t90 = t39*(1.0/1.0E1);
double t91 = t90+9.0/1.0E1;
double t92 = t65*t66*t91*1.09E3;
double t93 = t89+t92;
double t105 = t33*t39*t67*t93;
double t94 = t80+t81-t105;
double t95 = t10*t16*t27*t62;
double t97 = t33*t39*t67*t86;
double t96 = t80+t95-t97;
double t98 = t51*t69*2.18E2;
double t99 = t52*(1.0/1.0E1);
double t100 = t99+9.0/1.0E1;
double t101 = t73*t74*t100*1.09E3;
double t102 = t98+t101;
double t103 = t46*t52*t79*t102;
double t104 = t81-t97+t103;
double t106 = r2*t2*2.0;
double t107 = r3*t1;
double t108 = -r2+t106+t107+3.338299811;
double t115 = r8*t2*2.0;
double t116 = r9*t1;
double t109 = r8-t115-t116+3.338299811;
double t110 = r5*t2*2.0;
double t111 = r6*t1;
double t112 = -r5+t110+t111;
double t113 = t10*t16*t59*t112;
double t114 = t46*t52*t76*t108;
double t123 = t33*t39*t93*t109;
double t117 = t113+t114-t123;
double t118 = t46*t52*t102*t108;
double t120 = t33*t39*t86*t109;
double t119 = t113+t118-t120;
double t121 = t10*t16*t27*t112;
double t122 = t114-t120+t121;
double t124 = t102*t104;
double t125 = t76*t96;
double t126 = t76*t94;
double t127 = t124+t125+t126;
double t128 = t93*t94;
double t129 = t86*t96;
double t130 = t86*t104;
double t131 = t128+t129+t130;
double t132 = t27*t96;
double t133 = t59*t94;
double t134 = t27*t122;
double t135 = t59*t119;
double t136 = t59*t117;
double t137 = t134+t135+t136;
double t138 = t93*t117;
double t139 = t86*t119;
double t140 = t86*t122;
double t141 = t138+t139+t140;
double t142 = t102*t119;
double t143 = t76*t117;
double t144 = 1.0/Up3;
double t145 = t69*t72*1.09E3;
double t146 = t20*t57*1.09E3;
double t147 = t64*t91*1.09E3;
double t148 = t145+t146+t147+1.9E1;
double t149 = t144*t148;
double t150 = t149-1.0;
double t151 = t1*1.0;
double t152 = 1.0/(t37*t37*t37);
double t153 = t7-t151;
double t154 = 1.0/Up1;
double t155 = t69*t100*1.09E3;
double t156 = t64*t84*1.09E3;
double t157 = t146+t155+t156+1.9E1;
double t158 = t154*t157;
double t159 = t158-1.0;
double t160 = t33*t39*t153*1.8E1;
double t167 = t33*t152*t153*1.8E1;
double t161 = t160-t167;
double t162 = 1.0/Up2;
double t163 = t20*t23*1.09E3;
double t164 = t145+t156+t163+1.9E1;
double t165 = t162*t164;
double t166 = t165-1.0;
double t168 = t66*t84*t161*1.09E3;
double t169 = t168-t33*t64*t152*t153*1.962E3;
double t170 = t59*t104;
double t171 = t132+t133+t170;
double t172 = t46*t52*t79*t127;
double t173 = t76*t122;
double t174 = t142+t143+t173;
double t175 = t10*t16*t112*t137;
double t176 = t46*t52*t108*t127;
double t177 = t10*t16*t112*t171;
double t185 = t33*t39*t109*t131;
double t178 = t176+t177-t185;
double t179 = t10*t16*t62*t137;
double t180 = t46*t52*t79*t174;
double t242 = t33*t39*t67*t141;
double t181 = t179+t180-t242;
double t182 = fabs(t159);
double t183 = fabs(t166);
double t184 = fabs(t150);
double t186 = 1.0/(t41*t41*t41);
double t187 = t1*t28*2.0;
double t188 = t2*t30*2.0;
double t196 = r7*t7*2.0;
double t197 = r8*t8*2.0;
double t198 = r9*t1*t2*2.0;
double t189 = t187+t188-t196-t197-t198-4.374528672;
double t190 = exp(t189);
double t191 = t33*t39*t64*t153*1.962E3;
double t192 = t33*t39*t66*t84*t153*1.962E4;
double t193 = t33*t65*t66*t152*t153*1.962E3;
double t208 = t38*t66*t161*1.962E3;
double t209 = t65*t84*t161*t186*2.18E3;
double t194 = t191+t192+t193-t208-t209;
double t195 = t33*t39*t109*t194;
double t199 = t86*t109*t152*t153*t190*2.0;
double t210 = t33*t39*t86*t109*t153;
double t200 = t195+t199-t210;
double t201 = t33*t39*t64*t153*2.18E2;
double t202 = t33*t39*t66*t91*t153*1.962E4;
double t203 = t33*t65*t66*t152*t153*2.18E2;
double t211 = t38*t66*t161*2.18E2;
double t212 = t65*t91*t161*t186*2.18E3;
double t204 = t201+t202+t203-t211-t212;
double t205 = t33*t39*t109*t204;
double t206 = t93*t109*t152*t153*t190*2.0;
double t213 = t33*t39*t93*t109*t153;
double t207 = t205+t206-t213;
double t214 = t10*t16*t62*t171;
double t215 = t172+t214-t33*t39*t67*t131;
double t216 = t59*t207;
double t217 = t27*t200;
double t218 = t59*t200;
double t219 = t216+t217+t218;
double t220 = t76*t207;
double t221 = t102*t200;
double t222 = t76*t200;
double t223 = t220+t221+t222;
double t224 = t117*t204;
double t225 = t119*t194;
double t226 = t122*t194;
double t227 = t224+t225+t226-t86*t200*2.0-t93*t207;
double t228 = t46*t52*t108*t174;
double t229 = t175+t228-t33*t39*t109*t141;
double t230 = t1*2.0;
double t231 = t230-1.0;
double t232 = t33*t39*t67*t194;
double t233 = t67*t86*t152*t153*t190*2.0;
double t238 = t33*t39*t86*t231;
double t239 = t33*t39*t67*t86*t153;
double t234 = t232+t233-t238-t239;
double t235 = t33*t39*t67*t204;
double t236 = t67*t93*t152*t153*t190*2.0;
double t240 = t33*t39*t93*t231;
double t241 = t33*t39*t67*t93*t153;
double t237 = t235+t236-t240-t241;
double t243 = t76*t237;
double t244 = t102*t234;
double t245 = t76*t234;
double t246 = t243+t244+t245;
double t247 = t59*t237;
double t248 = t27*t234;
double t249 = t59*t234;
double t250 = t247+t248+t249;
double t251 = t94*t204;
double t252 = t96*t194;
double t253 = t104*t194;
double t254 = t251+t252+t253-t86*t234*2.0-t93*t237;
double t0 = sqrt(-t178*t181+(t172-t33*t39*t67*t131+t10*t16*t62*(t132+t133+t59*(t81+t103-t33*t39*t67*t86)))*(t175-t33*t39*t109*t141+t46*t52*t108*(t142+t143+t76*(t114+t121-t33*t39*t86*t109))))*(t144*t184*((t150/fabs(t150)))*(t66*t91*t161*1.09E3-t33*t64*t152*t153*2.18E2)*2.0+t154*t169*t182*((t159/fabs(t159)))*2.0+t162*t169*t183*((t166/fabs(t166)))*2.0)+1.0/sqrt(-t178*t181+t215*t229)*(t182*t182+t183*t183+t184*t184)*(t215*(t10*t16*t112*t219+t33*t39*t109*t227+t46*t52*t108*t223-t33*t39*t109*t141*t153+t109*t141*t152*t153*t190*2.0)-t181*(t10*t16*t112*t250+t33*t39*t109*t254+t46*t52*t108*t246-t33*t39*t109*t131*t153+t109*t131*t152*t153*t190*2.0)-t178*(t10*t16*t62*t219+t33*t39*t67*t227+t46*t52*t79*t223-t33*t39*t141*t231-t33*t39*t67*t141*t153+t67*t141*t152*t153*t190*2.0)+t229*(t10*t16*t62*t250+t33*t39*t67*t254+t46*t52*t79*t246-t33*t39*t131*t231-t33*t39*t67*t131*t153+t67*t131*t152*t153*t190*2.0))*(1.0/2.0);

return t0;
}

#endif