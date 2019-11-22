#include <math.h>
#include <errno.h>
double cutoff();
double pcutoff();
double lcutoff();
int Nmax();
double dmax();


int Nmax(E)
double E;
{
  static double energy[251] = {0.0,0.0,82259.272,
      97492.229,102823.836,105291.608,106632.126,107440.416,107965.027,
     108324.699,108581.970,108772.322,108917.100,109029.771,109119.173,
     109191.297,109250.325,109299.247,109340.243,109374.939,109404.561,
     109430.053,109452.149,109471.426,109488.343,109503.272,109516.511,
     109528.307,109538.862,109548.343,109556.893,109564.628,109571.650,
     109578.043,109583.880,109589.224,109594.129,109598.642,109602.803,
     109606.648,109610.209,109613.512,109616.582,109619.440,109622.106,
     109624.596,109626.925,109629.107,109631.154,109633.078,109634.886,
     109636.590,109638.196,109639.713,109641.145,109642.501,109643.784,
     109645.000,109646.154,109647.250,109648.292,109649.282,109650.226,
     109651.124,109651.981,109652.799,109653.579,109654.325,109655.039,
     109655.721,109656.375,109657.001,109657.601,109658.177,109658.729,
     109659.260,109659.769,109660.259,109660.731,109661.184,109661.621,
     109662.041,109662.446,109662.837,109663.214,109663.578,109663.929,
     109664.267,109664.595,109664.911,109665.217,109665.513,109665.800,
     109666.077,109666.345,109666.605,109666.857,109667.101,109667.338,
     109667.567,109667.790,109668.006,109668.216,109668.420,109668.618,
     109668.810,109668.997,109669.178,109669.355,109669.527,109669.694,
     109669.856,109670.014,109670.169,109670.319,109670.465,109670.607,
     109670.746,109670.881,109671.013,109671.141,109671.267,109671.389,
     109671.508,109671.625,109671.739,109671.850,109671.958,109672.064,
     109672.167,109672.268,109672.367,109672.463,109672.558,109672.650,
     109672.740,109672.828,109672.914,109672.999,109673.081,109673.162,
     109673.241,109673.319,109673.394,109673.469,109673.541,109673.613,
     109673.682,109673.751,109673.818,109673.883,109673.948,109674.011,
     109674.073,109674.133,109674.193,109674.251,109674.308,109674.365,
     109674.420,109674.474,109674.527,109674.579,109674.630,109674.680,
     109674.729,109674.778,109674.825,109674.872,109674.918,109674.963,
     109675.007,109675.051,109675.093,109675.135,109675.177,109675.217,
     109675.257,109675.296,109675.335,109675.373,109675.410,109675.447,
     109675.483,109675.518,109675.553,109675.588,109675.622,109675.655,
     109675.688,109675.720,109675.752,109675.783,109675.814,109675.844,
     109675.874,109675.903,109675.932,109675.960,109675.988,109676.016,
     109676.043,109676.070,109676.096,109676.123,109676.148,109676.173,
     109676.198,109676.223,109676.247,109676.271,109676.294,109676.318,
     109676.341,109676.363,109676.385,109676.407,109676.429,109676.450,
     109676.471,109676.492,109676.512,109676.533,109676.552,109676.572,
     109676.592,109676.611,109676.630,109676.648,109676.667,109676.685,
     109676.703,109676.720,109676.738,109676.755,109676.772,109676.789,
     109676.805,109676.822,109676.838,109676.854,109676.870,109676.885,
     109676.901,109676.916,109676.931,109676.946,109676.960,109676.975,
     109676.989,109677.003};
  int k;

  for(k=1;k<251;k++) {
    if(E <= energy[k]) return(k-1);
  }
  return(250);
}


double cutoff(T,Ne,nm)
double Ne,T;
int *nm;
{
  double Eion = 109678.758;
  double E250 = 109677.003;
  double dE;
  double Cutoff;
  double fac = 1.0;

  /* Calculate lowering of ionization potential using Unsold Approx */
/* fac = sqrt(10000.0/T); */

  dE = 5.61e-03*fac*pow(Ne,1.0/3.0);
  *nm = Nmax(Eion - dE);
  dE = dmax(dE,Eion - E250);

  Cutoff = 1.0e+08/(27419.486 - dE) - 1.066;
  return(Cutoff);
}


double pcutoff(T,Ne,nm)
double Ne,T;
int *nm;
{
  double Eion = 109678.758;
  double E250 = 109677.003;
  double dE;
  double Cutoff;
  double fac = 1.0;

  /* Calculate lowering of ionization potential using Unsold Approx */
/* fac = sqrt(10000.0/T); */

  dE = 5.61e-03*fac*pow(Ne,1.0/3.0);
  *nm = Nmax(Eion - dE);
  dE = dmax(dE,Eion - E250);

  Cutoff = 1.0e+08/(12186.529 - dE) - 2.181;
  return(Cutoff);
}

double lcutoff(T,Ne,nm)
double Ne,T;
int *nm;
{
  double Eion = 109678.758;
  double E130 = 109672.167;
  double dE;
  double Cutoff;
  double fac = 1.0;

  /* Calculate lowering of ionization potential using Unsold Approx */
/* fac = sqrt(10000.0/T); */

  dE = 5.61e-03*fac*pow(Ne,1.0/3.0);
  *nm = Nmax(Eion - dE);
  dE = dmax(dE,Eion - E130);

  Cutoff = 1.0e+08/(109678.758 - dE);
  return(Cutoff);
}
