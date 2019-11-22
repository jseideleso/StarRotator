#include <stdio.h>
#include <math.h>

double hminopbf(double wave)
{
  static double wbf[85] = 
    {  18.00,  19.60,  21.40,  23.60,  26.40,  29.80,  34.30,  40.40,  49.10,  
       62.60, 111.30, 112.10, 112.67, 112.95, 113.05, 113.10, 113.20, 113.23, 
      113.50, 114.40, 121.00, 139.00, 164.00, 175.00, 200.00, 225.00, 250.00, 
      275.00, 300.00, 325.00, 350.00, 375.00, 400.00, 425.00, 450.00, 475.00, 
      500.00, 525.00, 550.00, 575.00, 600.00, 625.00, 650.00, 675.00, 700.00, 
      725.00, 750.00, 775.00, 800.00, 825.00, 850.00, 875.00, 900.00, 925.00, 
      950.00, 975.00,1000.00,1025.00,1050.00,1075.00,1100.00,1125.00,1150.00,
     1175.00,1200.00,1225.00,1250.00,1275.00,1300.00,1325.00,1350.00,1375.00,
     1400.00,1425.00,1450.00,1475.00,1500.00,1525.00,1550.00,1575.00,1600.00,
     1610.00,1620.00,1630.00,1643.91};

  static double bf[85] =
    {   0.067,  0.088,  0.117,  0.155,  0.206,  0.283,  0.414,  0.703,  1.24,
        2.33,  11.60,  13.90,  24.30,  66.70,  95.00,  56.60,  20.00,  14.60,
        8.50,   7.10,   5.43,   5.91,   7.29,   7.918,  9.453, 11.08,  12.75,
       14.46,  16.19,  17.92,  19.65,  21.35,  23.02,  24.65,  26.24,  27.77,
       29.23,  30.62,  31.94,  33.17,  34.32,  35.37,  36.32,  37.17,  37.91,
       38.54,  39.07,  39.48,  39.77,  39.95,  40.01,  39.95,  39.77,  39.48,
       39.06,  38.53,  37.89,  37.13,  36.25,  35.28,  34.19,  33.01,  31.72,
       30.34,  28.87,  27.33,  25.71,  24.02,  22.26,  20.46,  18.62,  16.74,
       14.85,  12.95,  11.07,  9.211,  7.407,  5.677,  4.052,   2.575,  1.302,
        0.8697, 0.4974, 0.1989,0.};
  int i;

  for(i=0;i<85;i++) printf("%f %f\n",10.0*wbf[i],bf[i]);
}