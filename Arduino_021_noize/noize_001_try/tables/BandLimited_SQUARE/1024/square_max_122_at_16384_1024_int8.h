#ifndef SQUARE_MAX_122_AT_16384_1024INT8_H_
#define SQUARE_MAX_122_AT_16384_1024INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_122_AT_16384_1024_NUM_CELLS 1024
#define SQUARE_MAX_122_AT_16384_1024_SAMPLERATE 1024

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_122_AT_16384_1024_DATA [] = 
{
0, 28, 55, 79, 98, 113, 122, 127, 127, 124, 119, 112, 106, 102, 99, 97, 98, 101, 104, 108, 111, 114, 115, 115, 114, 112, 109, 107, 105, 103, 103, 103, 104, 
106, 108, 110, 111, 112, 112, 112, 110, 109, 107, 106, 105, 104, 105, 105, 106, 108, 109, 110, 111, 111, 111, 110, 109, 107, 106, 106, 105, 105, 106, 107, 108, 
109, 110, 110, 110, 110, 109, 109, 108, 107, 106, 106, 106, 106, 107, 108, 109, 109, 110, 110, 110, 109, 109, 108, 107, 106, 106, 106, 106, 107, 108, 109, 109, 
110, 110, 110, 109, 108, 108, 107, 107, 106, 106, 107, 107, 108, 109, 109, 109, 110, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 
109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 
108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 
108, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 107, 
107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 
107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 
108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 108, 108, 
108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 
109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 109, 
109, 109, 108, 108, 107, 107, 107, 107, 107, 107, 108, 108, 109, 109, 110, 109, 109, 109, 108, 107, 107, 106, 106, 107, 107, 108, 108, 109, 110, 110, 110, 109, 
109, 108, 107, 106, 106, 106, 106, 107, 108, 109, 109, 110, 110, 110, 109, 109, 108, 107, 106, 106, 106, 106, 107, 108, 109, 109, 110, 110, 110, 110, 109, 108, 
107, 106, 105, 105, 106, 106, 107, 109, 110, 111, 111, 111, 110, 109, 108, 106, 105, 105, 104, 105, 106, 107, 109, 110, 112, 112, 112, 111, 110, 108, 106, 104, 
103, 103, 103, 105, 107, 109, 112, 114, 115, 115, 114, 111, 108, 104, 101, 98, 97, 99, 102, 106, 112, 119, 124, 127, 127, 122, 113, 98, 79, 55, 28, 0, 
-28, -55, -79, -98, -113, -122, -127, -127, -124, -119, -112, -106, -102, -99, -97, -98, -101, -104, -108, -111, -114, -115, -115, -114, -112, -109, -107, -105, -103, -103, -103, -104, 
-106, -108, -110, -111, -112, -112, -112, -110, -109, -107, -106, -105, -104, -105, -105, -106, -108, -109, -110, -111, -111, -111, -110, -109, -107, -106, -106, -105, -105, -106, -107, -108, 
-109, -110, -110, -110, -110, -109, -109, -108, -107, -106, -106, -106, -106, -107, -108, -109, -109, -110, -110, -110, -109, -109, -108, -107, -106, -106, -106, -106, -107, -108, -109, -109, 
-110, -110, -110, -109, -108, -108, -107, -107, -106, -106, -107, -107, -108, -109, -109, -109, -110, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, 
-109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, 
-108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, 
-108, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -107, 
-107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, 
-107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, 
-108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -108, -108, 
-108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, 
-109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -109, 
-109, -109, -108, -108, -107, -107, -107, -107, -107, -107, -108, -108, -109, -109, -110, -109, -109, -109, -108, -107, -107, -106, -106, -107, -107, -108, -108, -109, -110, -110, -110, -109, 
-109, -108, -107, -106, -106, -106, -106, -107, -108, -109, -109, -110, -110, -110, -109, -109, -108, -107, -106, -106, -106, -106, -107, -108, -109, -109, -110, -110, -110, -110, -109, -108, 
-107, -106, -105, -105, -106, -106, -107, -109, -110, -111, -111, -111, -110, -109, -108, -106, -105, -105, -104, -105, -106, -107, -109, -110, -112, -112, -112, -111, -110, -108, -106, -104, 
-103, -103, -103, -105, -107, -109, -112, -114, -115, -115, -114, -111, -108, -104, -101, -98, -97, -99, -102, -106, -112, -119, -124, -127, -127, -122, -113, -98, -79, -55, -28, 
 };

#endif