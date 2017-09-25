#include <stdio.h>
#include <assert.h>
#include "CacheTest.c"


struct cache{
int tagFieldLength;
int setNumFieldLength;
int blockOffsetFieldLength;
unsigned int **tagArray; 
int **lruArray;

FILE* traceFP;

char* getNextAddress();
int whichSet();
int setIndexLength();
int offsetLength();
int tagBits();
int hitWay();
int updateOnHit();
int updateOnMiss();
