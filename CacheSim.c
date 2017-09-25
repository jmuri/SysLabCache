#include <stdio.h>
#include <assert.h>
#include "Cache.h"
//#include "CacheTest.c"



struct cache{
int tagFieldLength;
int setNumFieldLength;
int blockOffsetFieldLength;
unsigned int **tagArray; 
int **lruArray;
};

FILE* traceFP;

char* getNextAddress()


int whichSet(){
	return 0;
}

int setIndexLength(){
	return 0;
}

int offsetLength(){
	return 0;
}

int tagBits(){
	return 0;
}

int hitWay(){
	return 0;
}

int updateOnHit(){
	return 0;
}

int updateOnMiss(){
	return 0;
}

int main(int argc, int argv[]){
	int hitRate;

	//argv[1] = set associativity
	//argv[2] = line size in bytes
	//argv[3] = total cache size in kbytes
	//run file >a.out K L C traceFile


	return 0;
}
