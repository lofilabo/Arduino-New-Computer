#ifndef SQUARE_MAX_84_AT_16384_1024INT8_H_
#define SQUARE_MAX_84_AT_16384_1024INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_84_AT_16384_1024_NUM_CELLS 1024
#define SQUARE_MAX_84_AT_16384_1024_SAMPLERATE 1024

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_84_AT_16384_1024_DATA [] = 
{
0, 40, 76, 103, 120, 127, 125, 118, 109, 102, 98, 98, 101, 106, 111, 114, 115, 113, 109, 106, 103, 102, 104, 106, 109, 111, 112, 112, 110, 107, 105, 104, 104, 
106, 108, 110, 111, 111, 110, 108, 107, 105, 105, 106, 107, 109, 110, 110, 110, 109, 107, 106, 106, 106, 107, 108, 109, 110, 110, 109, 108, 107, 106, 106, 106, 
107, 108, 109, 110, 109, 108, 107, 107, 106, 106, 107, 108, 109, 109, 109, 109, 108, 107, 106, 106, 107, 108, 108, 109, 109, 109, 108, 107, 107, 107, 107, 107, 
108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 107, 107, 107, 107, 107, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 108, 
108, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 
109, 109, 108, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 108, 108, 108, 
109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 107, 108, 108, 108, 
109, 108, 108, 108, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 108, 108, 108, 109, 
108, 108, 108, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 108, 108, 108, 109, 108, 
108, 108, 107, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 108, 
108, 108, 107, 107, 107, 108, 108, 108, 109, 108, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 108, 109, 109, 108, 
108, 107, 107, 107, 107, 108, 108, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 108, 108, 
107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 107, 107, 107, 107, 107, 108, 109, 109, 109, 108, 108, 107, 107, 107, 107, 108, 108, 109, 109, 109, 108, 107, 
107, 107, 107, 107, 108, 109, 109, 109, 108, 108, 107, 106, 106, 107, 108, 109, 109, 109, 109, 108, 107, 106, 106, 107, 107, 108, 109, 110, 109, 108, 107, 106, 
106, 106, 107, 108, 109, 110, 110, 109, 108, 107, 106, 106, 106, 107, 109, 110, 110, 110, 109, 107, 106, 105, 105, 107, 108, 110, 111, 111, 110, 108, 106, 104, 
104, 105, 107, 110, 112, 112, 111, 109, 106, 104, 102, 103, 106, 109, 113, 115, 114, 111, 106, 101, 98, 98, 102, 109, 118, 125, 127, 120, 103, 76, 40, 0, 
-40, -76, -103, -120, -127, -125, -118, -109, -102, -98, -98, -101, -106, -111, -114, -115, -113, -109, -106, -103, -102, -104, -106, -109, -111, -112, -112, -110, -107, -105, -104, -104, 
-106, -108, -110, -111, -111, -110, -108, -107, -105, -105, -106, -107, -109, -110, -110, -110, -109, -107, -106, -106, -106, -107, -108, -109, -110, -110, -109, -108, -107, -106, -106, -106, 
-107, -108, -109, -110, -109, -108, -107, -107, -106, -106, -107, -108, -109, -109, -109, -109, -108, -107, -106, -106, -107, -108, -108, -109, -109, -109, -108, -107, -107, -107, -107, -107, 
-108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -107, -107, -107, -107, -107, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -108, 
-108, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, 
-109, -109, -108, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -108, -108, -108, 
-109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -107, -108, -108, -108, 
-109, -108, -108, -108, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -108, -108, -108, -109, 
-108, -108, -108, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -108, -108, -108, -109, -108, 
-108, -108, -107, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -108, 
-108, -108, -107, -107, -107, -108, -108, -108, -109, -108, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -108, -109, -109, -108, 
-108, -107, -107, -107, -107, -108, -108, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -108, -108, 
-107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -107, -107, -107, -107, -107, -108, -109, -109, -109, -108, -108, -107, -107, -107, -107, -108, -108, -109, -109, -109, -108, -107, 
-107, -107, -107, -107, -108, -109, -109, -109, -108, -108, -107, -106, -106, -107, -108, -109, -109, -109, -109, -108, -107, -106, -106, -107, -107, -108, -109, -110, -109, -108, -107, -106, 
-106, -106, -107, -108, -109, -110, -110, -109, -108, -107, -106, -106, -106, -107, -109, -110, -110, -110, -109, -107, -106, -105, -105, -107, -108, -110, -111, -111, -110, -108, -106, -104, 
-104, -105, -107, -110, -112, -112, -111, -109, -106, -104, -102, -103, -106, -109, -113, -115, -114, -111, -106, -101, -98, -98, -102, -109, -118, -125, -127, -120, -103, -76, -40, 
 };

#endif