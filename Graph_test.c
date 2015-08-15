/*
* Graph_test.c
 *
 *  Created on: Aug 10, 2015
 *      Author: hao
 */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Digraph.h"
int main( int argc, char *argv[] ){
	cell *c;
	cell cell = creat();
	FILE *fp;
	fp = fopen( argv[1] , "r" );
	char *buffer = malloc( 9*9*9 );
	assert(buffer != NULL);
	while(fgets(buffer, sizeof(buffer), fp))
		c = c_read(buffer);
		void init();
		while(!c){built_digraph(cell);c++;}
		display_digraph();
		free_all();
	return 0;
}


