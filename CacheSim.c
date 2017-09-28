#include <stdio.h>
#include <assert.h>
#include "Cache.h"
//#include "CacheTest.c"



//takes trace file and returns hit rate
int readTrace(char *file){
	printf("Reading trace, from %s \n", file);
	FILE *fp;
	unsigned int *address;

	fp = fopen(file, "a");
	printf("File Open\n");

	
	fscanf(fp, "%X", address);
	printf("%X \n", *address);
	/*
	while( fscanf(fp, "%X", address) != EOF){
		printf("%X \n", *address);
		accessCache(*address);
	}
	*/
	


	fclose(fp);
}

//Outputs the cache set in which the address falls
int whichSet(int address){
	return 0;
}

//returns 0 or 1 based on wether it is a hit or miss
int accessCache(int address){
	return 0;
}

	//argv[1] = set associativity
	//argv[2] = line size in bytes
	//argv[3] = total cache size in kbytes
int buildCache(int k, int l, int c){
	return 0;
}

//Outputs the number of bits in the set index  field of theaddress
int setIndexLength(int k, int l, int c){
	int blockOffset = logBaseTwo(k);
	int setIndexSize = logBaseTwo(c/(l*k));
	assert((32 - blockOffset - setIndexSize) > 0); //set and offset cannot be too large
	return setIndexSize;
}

//Outputs  the  number  of  bits  in  the  line  o set field  of  the address
int offsetLength(int k, int l, int c){
	int blockOffset = logBaseTwo(k);
	int setIndexSize = logBaseTwo(c/(l*k));
	assert((32 - blockOffset - setIndexSize) > 0); //set and offset cannot be too large
	return blockOffset;
}

//Outputs the tag bits associated with the address
int tagBits(){
	return 0;
}

// If there is a hit, this outputs the cache way in which the accessed line can be found; 
//it returns -1if there is a cache miss
int hitWay(){
	return 0;
}

//Updates the tagArray and lruArray upon a hit.  This function is only called on a cache hi
int updateOnHit(){
	return 0;
}

// Updates the tagArray and lruArray upon a miss.  This function is only called on a cache miss
int updateOnMiss(){
	return 0;
}


	//argv[1] = set associativity
	//argv[2] = line size in bytes
	//argv[3] = total cache size in kbytes
	//run file >a.out K L C traceFile
int main(int argc, char *argv[]){
	int hitRate;


	printf("Start, %d arguements: K:%d, L:%d, C:%d File:%s \n", argc, *argv[1], *argv[2], *argv[3], argv[4]);
	buildCache((int)argv[1], (int)argv[2], (int)argv[3]);
	hitRate = readTrace(argv[4]);//gives segfault


	printf("Done\n");
	return 0;
}
