#ifndef SQUARE_MAX_98_AT_16384_2048INT8_H_
#define SQUARE_MAX_98_AT_16384_2048INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_98_AT_16384_2048_NUM_CELLS 2048
#define SQUARE_MAX_98_AT_16384_2048_SAMPLERATE 2048

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_98_AT_16384_2048_DATA [] = 
{
0, 17, 34, 51, 66, 80, 93, 103, 112, 119, 123, 126, 127, 127, 125, 122, 119, 115, 111, 108, 104, 101, 99, 98, 97, 97, 98, 99, 101, 103, 106, 108, 110, 
112, 113, 114, 115, 115, 114, 114, 112, 111, 109, 108, 106, 105, 104, 103, 102, 102, 103, 103, 104, 105, 106, 108, 109, 110, 111, 111, 112, 112, 112, 111, 111, 
110, 109, 108, 107, 106, 105, 105, 104, 104, 104, 104, 105, 106, 106, 107, 108, 109, 110, 110, 111, 111, 111, 111, 110, 110, 109, 108, 107, 107, 106, 105, 105, 
105, 105, 105, 105, 106, 106, 107, 108, 108, 109, 110, 110, 110, 110, 110, 110, 109, 109, 108, 108, 107, 106, 106, 106, 105, 105, 106, 106, 106, 107, 107, 108, 
108, 109, 109, 109, 110, 110, 110, 109, 109, 109, 108, 108, 107, 107, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 109, 109, 109, 109, 109, 109, 
109, 109, 108, 108, 108, 107, 107, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 
106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 107, 107, 107, 
107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 
109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 
107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 
107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 
109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 108, 108, 108, 108, 108, 
107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 109, 109, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 
107, 107, 107, 108, 108, 108, 108, 108, 108, 108, 109, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 
108, 108, 108, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 
107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 
108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 108, 108, 108, 108, 
108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 109, 108, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 
107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 108, 109, 109, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 
108, 108, 108, 108, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 
108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 
107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 
108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 
109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 
107, 107, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 107, 
107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 106, 107, 107, 108, 108, 108, 109, 109, 109, 
109, 109, 109, 109, 109, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 107, 107, 108, 108, 109, 109, 109, 110, 110, 110, 109, 109, 109, 108, 108, 
107, 107, 106, 106, 106, 105, 105, 106, 106, 106, 107, 108, 108, 109, 109, 110, 110, 110, 110, 110, 110, 109, 108, 108, 107, 106, 106, 105, 105, 105, 105, 105, 
105, 106, 107, 107, 108, 109, 110, 110, 111, 111, 111, 111, 110, 110, 109, 108, 107, 106, 106, 105, 104, 104, 104, 104, 105, 105, 106, 107, 108, 109, 110, 111, 
111, 112, 112, 112, 111, 111, 110, 109, 108, 106, 105, 104, 103, 103, 102, 102, 103, 104, 105, 106, 108, 109, 111, 112, 114, 114, 115, 115, 114, 113, 112, 110, 
108, 106, 103, 101, 99, 98, 97, 97, 98, 99, 101, 104, 108, 111, 115, 119, 122, 125, 127, 127, 126, 123, 119, 112, 103, 93, 80, 66, 51, 34, 17, 0, 
-17, -34, -51, -66, -80, -93, -103, -112, -119, -123, -126, -127, -127, -125, -122, -119, -115, -111, -108, -104, -101, -99, -98, -97, -97, -98, -99, -101, -103, -106, -108, -110, 
-112, -113, -114, -115, -115, -114, -114, -112, -111, -109, -108, -106, -105, -104, -103, -102, -102, -103, -103, -104, -105, -106, -108, -109, -110, -111, -111, -112, -112, -112, -111, -111, 
-110, -109, -108, -107, -106, -105, -105, -104, -104, -104, -104, -105, -106, -106, -107, -108, -109, -110, -110, -111, -111, -111, -111, -110, -110, -109, -108, -107, -107, -106, -105, -105, 
-105, -105, -105, -105, -106, -106, -107, -108, -108, -109, -110, -110, -110, -110, -110, -110, -109, -109, -108, -108, -107, -106, -106, -106, -105, -105, -106, -106, -106, -107, -107, -108, 
-108, -109, -109, -109, -110, -110, -110, -109, -109, -109, -108, -108, -107, -107, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -109, -109, -109, -109, -109, -109, 
-109, -109, -108, -108, -108, -107, -107, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, 
-106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -107, -107, -107, 
-107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, 
-109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, 
-107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, 
-107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, 
-109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -108, -108, -108, -108, -108, 
-107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -109, -109, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, 
-107, -107, -107, -108, -108, -108, -108, -108, -108, -108, -109, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, 
-108, -108, -108, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, 
-108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, 
-107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, 
-108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -108, -108, -108, -108, 
-108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -109, -108, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, 
-107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -108, -109, -109, -108, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, 
-108, -108, -108, -108, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, 
-108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, 
-107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, 
-108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, 
-109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, 
-107, -107, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -107, 
-107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -106, -107, -107, -108, -108, -108, -109, -109, -109, 
-109, -109, -109, -109, -109, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -107, -107, -108, -108, -109, -109, -109, -110, -110, -110, -109, -109, -109, -108, -108, 
-107, -107, -106, -106, -106, -105, -105, -106, -106, -106, -107, -108, -108, -109, -109, -110, -110, -110, -110, -110, -110, -109, -108, -108, -107, -106, -106, -105, -105, -105, -105, -105, 
-105, -106, -107, -107, -108, -109, -110, -110, -111, -111, -111, -111, -110, -110, -109, -108, -107, -106, -106, -105, -104, -104, -104, -104, -105, -105, -106, -107, -108, -109, -110, -111, 
-111, -112, -112, -112, -111, -111, -110, -109, -108, -106, -105, -104, -103, -103, -102, -102, -103, -104, -105, -106, -108, -109, -111, -112, -114, -114, -115, -115, -114, -113, -112, -110, 
-108, -106, -103, -101, -99, -98, -97, -97, -98, -99, -101, -104, -108, -111, -115, -119, -122, -125, -127, -127, -126, -123, -119, -112, -103, -93, -80, -66, -51, -34, -17, 
 };

#endif