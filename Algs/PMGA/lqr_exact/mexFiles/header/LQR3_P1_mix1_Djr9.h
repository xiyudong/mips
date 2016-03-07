#ifndef LQR3_P1_mix_Djr9_H
#define LQR3_P1_mix_Djr9_H

double LQR3_P1_mix_Djr9(double* tv, int tdim, double* param, int pdim) {

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

double t4 = r2-3.338299811;
double t5 = t2*t4;
double t6 = r1*t1;
double t7 = t1*t1;
double t8 = t2*t2;
double t13 = r1*t7;
double t14 = r2*t8;
double t15 = r3*t1*t2;
double t9 = t5+t6-t13-t14-t15+1.151035476;
double t10 = exp(t9);
double t11 = t10+1.0;
double t12 = 1.0/t11;
double t16 = 1.0/(t11*t11);
double t17 = t12*1.8E1;
double t19 = t16*9.0;
double t18 = t17-t19+1.0;
double t20 = 1.0/t18;
double t21 = t12*t20*2.18E2;
double t22 = t16*(1.0/1.0E1);
double t23 = t22+9.0/1.0E1;
double t24 = t17-1.8E1;
double t25 = 1.0/(t18*t18);
double t26 = t23*t24*t25*1.09E3;
double t27 = t21+t26;
double t28 = fabs(t27);
double t29 = r4-3.338299811;
double t30 = t1*t29;
double t31 = r5*t2;
double t36 = r4*t7;
double t37 = r5*t8;
double t38 = r6*t1*t2;
double t32 = t30+t31-t36-t37-t38+1.151035476;
double t33 = exp(t32);
double t34 = t33+1.0;
double t35 = 1.0/t34;
double t39 = 1.0/(t34*t34);
double t40 = t35*1.8E1;
double t64 = t39*9.0;
double t41 = t40-t64+1.0;
double t65 = 1.0/t41;
double t66 = t35*t65*1.962E3;
double t67 = t39*(9.0/1.0E1);
double t68 = t67+1.0/1.0E1;
double t69 = t40-1.8E1;
double t70 = 1.0/(t41*t41);
double t71 = t68*t69*t70*1.09E3;
double t72 = t66+t71;
double t42 = fabs(t72);
double t43 = r7+3.338299811;
double t44 = t1*t43;
double t45 = r8+3.338299811;
double t46 = t2*t45;
double t51 = r7*t7;
double t52 = r8*t8;
double t53 = r9*t1*t2;
double t47 = t44+t46-t51-t52-t53-2.187264336;
double t48 = exp(t47);
double t49 = t48+1.0;
double t50 = 1.0/t49;
double t54 = 1.0/(t49*t49);
double t55 = t50*1.8E1;
double t74 = t54*9.0;
double t56 = t55-t74+1.0;
double t75 = 1.0/t56;
double t76 = t55-1.8E1;
double t77 = 1.0/(t56*t56);
double t86 = t50*t75*1.962E3;
double t87 = t54*(9.0/1.0E1);
double t88 = t87+1.0/1.0E1;
double t89 = t76*t77*t88*1.09E3;
double t90 = t86+t89;
double t57 = fabs(t90);
double t58 = t12*t20*1.962E3;
double t59 = t16*(9.0/1.0E1);
double t60 = t59+1.0/1.0E1;
double t61 = t24*t25*t60*1.09E3;
double t62 = t58+t61;
double t63 = fabs(t62);
double t73 = t42*t42;
double t100 = t50*t75*2.18E2;
double t101 = t54*(1.0/1.0E1);
double t102 = t101+9.0/1.0E1;
double t103 = t76*t77*t102*1.09E3;
double t104 = t100+t103;
double t78 = fabs(t104);
double t79 = t35*t65*2.18E2;
double t80 = t39*(1.0/1.0E1);
double t81 = t80+9.0/1.0E1;
double t82 = t69*t70*t81*1.09E3;
double t83 = t79+t82;
double t84 = fabs(t83);
double t85 = t63*t63;
double t91 = t57*t57;
double t92 = t28*t28;
double t93 = t73+t91+t92;
double t94 = 1.0/sqrt(t93);
double t95 = t27*t94;
double t96 = t84*t84;
double t97 = t85+t91+t96;
double t98 = 1.0/sqrt(t97);
double t99 = t72*t94;
double t105 = t78*t78;
double t106 = t73+t85+t105;
double t107 = 1.0/sqrt(t106);
double t116 = t62*t98;
double t108 = t95-t116;
double t109 = t90*t94;
double t118 = t62*t107;
double t110 = t95-t118;
double t117 = t90*t98;
double t111 = t109-t117;
double t123 = t72*t107;
double t112 = t99-t123;
double t122 = t83*t98;
double t113 = t99-t122;
double t115 = t104*t107;
double t114 = t109-t115;
double t119 = t110*t111;
double t211 = t108*t114;
double t120 = t119-t211;
double t121 = fabs(t120);
double t124 = t111*t112;
double t213 = (t99-t122)*(t109-t115);
double t214 = -t124+t213;
double t125 = fabs(t214);
double t126 = t108*t112;
double t209 = t110*t113;
double t127 = t126-t209;
double t128 = fabs(t127);
double t129 = r4*t1*2.0;
double t130 = r6*t2;
double t131 = -r4+t129+t130+3.338299811;
double t138 = r7*t1*2.0;
double t139 = r9*t2;
double t132 = r7-t138-t139+3.338299811;
double t133 = r1*t1*2.0;
double t134 = r3*t2;
double t135 = -r1+t133+t134;
double t136 = t10*t16*t62*t135;
double t137 = t33*t39*t72*t131;
double t146 = t48*t54*t104*t132;
double t140 = t136+t137-t146;
double t141 = t33*t39*t83*t131;
double t143 = t48*t54*t90*t132;
double t142 = t136+t141-t143;
double t144 = t10*t16*t27*t135;
double t145 = t137-t143+t144;
double t147 = r2*t2*2.0;
double t148 = r3*t1;
double t149 = -r2+t147+t148+3.338299811;
double t156 = r8*t2*2.0;
double t157 = r9*t1;
double t150 = r8-t156-t157+3.338299811;
double t151 = r5*t2*2.0;
double t152 = r6*t1;
double t153 = -r5+t151+t152;
double t154 = t33*t39*t72*t153;
double t155 = t10*t16*t62*t149;
double t164 = t48*t54*t104*t150;
double t158 = t154+t155-t164;
double t159 = t10*t16*t27*t149;
double t161 = t48*t54*t90*t150;
double t160 = t154+t159-t161;
double t162 = t33*t39*t83*t153;
double t163 = t155-t161+t162;
double t165 = t27*t145;
double t166 = t62*t142;
double t167 = t62*t140;
double t168 = t165+t166+t167;
double t169 = t104*t140;
double t170 = t90*t142;
double t171 = t90*t145;
double t172 = t169+t170+t171;
double t173 = t83*t142;
double t174 = t72*t140;
double t175 = t83*t163;
double t176 = t72*t160;
double t177 = t72*t158;
double t178 = t175+t176+t177;
double t179 = t104*t158;
double t180 = t90*t160;
double t181 = t90*t163;
double t182 = t179+t180+t181;
double t183 = t27*t160;
double t184 = t62*t158;
double t185 = 1.0/AUp3;
double t186 = t20*t60*1.09E3;
double t187 = t65*t68*1.09E3;
double t188 = t75*t102*1.09E3;
double t189 = t186+t187+t188+1.9E1;
double t190 = t185*t189;
double t191 = t190-1.0;
double t192 = 1.0/(t49*t49*t49);
double t193 = 1.0/AUp1;
double t194 = t20*t23*1.09E3;
double t195 = t75*t88*1.09E3;
double t196 = t187+t194+t195+1.9E1;
double t197 = t193*t196;
double t198 = t197-1.0;
double t199 = t1*t2*t48*t54*1.8E1;
double t206 = t1*t2*t48*t192*1.8E1;
double t200 = t199-t206;
double t201 = 1.0/AUp2;
double t202 = t65*t81*1.09E3;
double t203 = t186+t195+t202+1.9E1;
double t204 = t201*t203;
double t205 = t204-1.0;
double t207 = t77*t88*t200*1.09E3;
double t208 = t207-t1*t2*t48*t75*t192*1.962E3;
double t210 = t90*t94*t127;
double t212 = t72*t94*t120;
double t215 = t121*t121;
double t216 = t125*t125;
double t217 = t128*t128;
double t218 = t215+t216+t217;
double t219 = 1.0/sqrt(t218);
double t220 = 1.0/(t56*t56*t56);
double t221 = (t104/fabs(t104));
double t222 = 1.0/pow(t106,3.0/2.0);
double t223 = t1*t2*t48*t54*t75*2.18E2;
double t224 = t1*t2*t48*t54*t77*t102*1.962E4;
double t225 = t1*t2*t48*t76*t77*t192*2.18E2;
double t238 = t50*t77*t200*2.18E2;
double t239 = t76*t102*t200*t220*2.18E3;
double t226 = t223+t224+t225-t238-t239;
double t227 = (t90/fabs(t90));
double t228 = 1.0/pow(t93,3.0/2.0);
double t229 = t1*t2*t48*t54*t75*1.962E3;
double t230 = t1*t2*t48*t54*t77*t88*1.962E4;
double t231 = t1*t2*t48*t76*t77*t192*1.962E3;
double t233 = t50*t77*t200*1.962E3;
double t234 = t76*t88*t200*t220*2.18E3;
double t232 = t229+t230+t231-t233-t234;
double t235 = t57*t72*t227*t228*t232;
double t236 = t27*t57*t227*t228*t232;
double t237 = 1.0/pow(t97,3.0/2.0);
double t250 = t62*t78*t221*t222*t226;
double t240 = t236-t250;
double t251 = t57*t62*t227*t232*t237;
double t241 = t236-t251;
double t242 = t94*t232;
double t255 = t72*t78*t221*t222*t226;
double t243 = t235-t255;
double t244 = t78*t104*t221*t222*t226;
double t246 = t57*t90*t227*t228*t232;
double t252 = t107*t226;
double t245 = t242+t244-t246-t252;
double t247 = t57*t90*t227*t232*t237;
double t248 = t27*t94*t214;
double t249 = t210+t212+t248;
double t258 = t98*t232;
double t253 = t242-t246+t247-t258;
double t254 = t114*t241;
double t256 = t111*t243;
double t257 = t113*t245;
double t259 = t108*t243;
double t260 = t112*t241;
double t261 = t235-t57*t83*t227*t232*t237;
double t262 = t259+t260-t113*t240-t110*t261;
double t263 = t72*t145;
double t264 = t173+t174+t263;
double t265 = t10*t16*t135*t168;
double t266 = t62*t163;
double t267 = t183+t184+t266;
double t268 = t33*t39*t153*t178;
double t269 = t10*t16*t149*t168;
double t270 = t33*t39*t153*t264;
double t284 = t48*t54*t150*t172;
double t271 = t269+t270-t284;
double t272 = t33*t39*t131*t178;
double t273 = t10*t16*t135*t267;
double t285 = t48*t54*t132*t182;
double t274 = t272+t273-t285;
double t275 = fabs(t198);
double t276 = fabs(t205);
double t277 = fabs(t191);
double t278 = fabs(t249);
double t279 = t33*t39*t131*t264;
double t333 = t48*t54*t132*t172;
double t280 = t265+t279-t333;
double t281 = t10*t16*t149*t267;
double t291 = t48*t54*t150*t182;
double t282 = t268+t281-t291;
double t283 = t280*t282;
double t286 = t283-t271*t274;
double t287 = t275*t275;
double t288 = t276*t276;
double t289 = t277*t277;
double t290 = t287+t288+t289;
double t292 = t1*t43*2.0;
double t293 = t2*t45*2.0;
double t298 = r7*t7*2.0;
double t299 = r8*t8*2.0;
double t300 = r9*t1*t2*2.0;
double t294 = t292+t293-t298-t299-t300-4.374528672;
double t295 = exp(t294);
double t296 = t2*t48*t54*t104;
double t297 = t1*t2*t48*t54*t104*t132;
double t307 = t48*t54*t132*t226;
double t308 = t1*t2*t104*t132*t192*t295*2.0;
double t301 = t296+t297-t307-t308;
double t302 = t2*t48*t54*t90;
double t303 = t1*t2*t48*t54*t90*t132;
double t305 = t48*t54*t132*t232;
double t306 = t1*t2*t90*t132*t192*t295*2.0;
double t304 = t302+t303-t305-t306;
double t309 = t140*t226;
double t310 = t142*t232;
double t311 = t145*t232;
double t312 = t104*t301;
double t313 = t90*t304*2.0;
double t314 = t309+t310+t311+t312+t313;
double t315 = t72*t301;
double t316 = t83*t304;
double t317 = t72*t304;
double t318 = t315+t316+t317;
double t319 = t62*t301;
double t320 = t27*t304;
double t321 = t62*t304;
double t322 = t319+t320+t321;
double t323 = t1*t48*t54*t104;
double t324 = t1*t2*t48*t54*t104*t150;
double t331 = t48*t54*t150*t226;
double t332 = t1*t2*t104*t150*t192*t295*2.0;
double t325 = t323+t324-t331-t332;
double t326 = t1*t48*t54*t90;
double t327 = t1*t2*t48*t54*t90*t150;
double t329 = t48*t54*t150*t232;
double t330 = t1*t2*t90*t150*t192*t295*2.0;
double t328 = t326+t327-t329-t330;
double t334 = t158*t226;
double t335 = t160*t232;
double t336 = t163*t232;
double t337 = t104*t325;
double t338 = t90*t328*2.0;
double t339 = t334+t335+t336+t337+t338;
double t340 = t72*t325;
double t341 = t83*t328;
double t342 = t72*t328;
double t343 = t340+t341+t342;
double t344 = t62*t325;
double t345 = t27*t328;
double t346 = t62*t328;
double t347 = t344+t345+t346;
double t0 = sqrt(t286)*t290*(beta_Var*t219*((t249/fabs(t249)))*(-t27*t94*(t256+t257-t112*t253-t261*(t109-t115))-t72*t94*(t254+t110*(t242+t247-t98*t232-t57*t90*t227*t228*t232)-t111*t240-t108*t245)+t90*t94*t262-t94*t127*t232+t57*t72*t120*t227*t228*t232+t57*t90*t127*t227*t228*t232+t27*t57*t214*t227*t228*t232)+beta_Var*1.0/pow(t218,3.0/2.0)*t278*(t128*t262*((t127/fabs(t127)))*-2.0+t121*((t120/fabs(t120)))*(t254-t111*t240-t108*t245+t110*t253)*2.0+t125*((t214/fabs(t214)))*(t256+t257-t112*t253-t261*(t109-t115))*2.0)*(1.0/2.0))+(beta_Var*t219*fabs(t210+t212-t27*t94*(t124-t113*t114))-1.0)*sqrt(-t271*t274+(t265-t48*t54*t132*t172+t33*t39*t131*(t173+t174+t72*(t137+t144-t48*t54*t90*t132)))*(t268-t48*t54*t150*t182+t10*t16*t149*(t183+t184+t62*(t155+t162-t48*t54*t90*t150))))*(t193*t208*t275*((t198/fabs(t198)))*2.0+t201*t208*t276*((t205/fabs(t205)))*2.0+t185*t277*((t191/fabs(t191)))*(t77*t102*t200*1.09E3-t1*t2*t48*t75*t192*2.18E2)*2.0)-1.0/sqrt(t286)*t290*(beta_Var*t219*t278-1.0)*(t282*(t2*t48*t54*t172+t10*t16*t135*t322+t33*t39*t131*t318-t48*t54*t132*t314+t1*t2*t48*t54*t132*t172-t1*t2*t132*t172*t192*t295*2.0)-t274*(t1*t48*t54*t172+t10*t16*t149*t322+t33*t39*t153*t318-t48*t54*t150*t314+t1*t2*t48*t54*t150*t172-t1*t2*t150*t172*t192*t295*2.0)-t271*(t2*t48*t54*t182+t10*t16*t135*t347+t33*t39*t131*t343-t48*t54*t132*t339+t1*t2*t48*t54*t132*t182-t1*t2*t132*t182*t192*t295*2.0)+t280*(t1*t48*t54*t182+t10*t16*t149*t347+t33*t39*t153*t343-t48*t54*t150*t339+t1*t2*t48*t54*t150*t182-t1*t2*t150*t182*t192*t295*2.0))*(1.0/2.0);

return t0;
}

#endif