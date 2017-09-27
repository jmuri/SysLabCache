#include <stdio.h>
#include <assert.h>
//#include "CacheTest.c"


FILE* traceFP;

char* getNextAddress();
int whichSet();
int setIndexLength();
int offsetLength();
int tagBits();
int hitWay();
int updateOnHit();
int updateOnMiss();