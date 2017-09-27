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


int readTrace(FILE *fp){
	unsigned int *address;

	while( fscanf(fp, "%X", address) != EOF){
		printf("%X/n", *address);
	}
}


int whichSet(){
	return 0;
}

int accessCache(int address){
	return 0;
}

	//argv[1] = set associativity
	//argv[2] = line size in bytes
	//argv[3] = total cache size in kbytes
int buildCache(int k, int l, int c){
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


	//argv[1] = set associativity
	//argv[2] = line size in bytes
	//argv[3] = total cache size in kbytes
	//run file >a.out K L C traceFile
int main(int argc, char *argv[]){
	int hitRate;

	FILE *fp;
	fp = fopen(argv[4], "r");
	printf("Start, %d arguements: K:%d, L:%d, C:%d File:%s/n", argc, *argv[1], *argv[2], *argv[3], argv[4]);


	hitRate = readTrace(fp);//gives segfault


	fclose(fp);printf("Done\n");
	return 0;
}
