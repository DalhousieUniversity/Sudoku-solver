/*
* Sudoku.c
 *
 *  Created on: Jul 20, 2015
 *      Author: hao
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include"Sudoku.h"
#include"Cell.h"
#ifndef BOOL_
#define BOOL_
#include <stdbool.h>
#endif

struct cell_struct{
	int _flag[_f_size];
};

cell* arr_struct(){
	cell(*c)[_c_size] = malloc(sizeof(cell)*_c_size);
	assert(c !=NULL);
	return *c;
}

int get_width(){
	cell *c;
	c = arr_struct();
	int width = 1;
			int k;
			for(k = 0; k < _c_size; k++){
				width = max(1 , width + count_f_on(c[k]));
			}
			return width;
}

// return the pointer of valid values or -1
int *val( cell this ){
	int *val = {0};
	int trace_cell = 0;
	val = malloc(sizeof(9));
		for(;trace_cell < _f_size;trace_cell++){
			if(flag_status( this, trace_cell )==f_on){
			val = this->_flag;}
			val++;}
	return (int*)(val[0] != 0 ? val[0] : -1);
}

/* width function to write sudoku */
char str( cell this ){
	int width;
	width = get_width(this);
	char *s = ' ';
	int i;
	s = malloc(sizeof(width));
	for( i = 0; i < 9; i++ ){
		if(flag_status(this, i) == 1) * (s++) = '0' + i;
	}
	return s;
}

bool is_solved(cell this){
	int i;
	for( i = 0; i < _c_size; i++){
		if(count_f_on(this) != 1)
			return false;
			this++;

	}
	return true;
}
//reading the input
cell* c_read(char *buffer){
	assert(buffer != NULL);
	cell *c;
	c = arr_struct();
	int i = 0;
	int index = 0;
	for(;;buffer++){
		if(*buffer == '.'){
			for(;i<9;i++)
				c[index]->_flag[i] = f_on;
		}
		else{
			for(;i<9;i++){
				if(buffer[index] == i+1)
					c[index]->_flag[i] = f_off;
			}
		}
		index++;
		c++;
		if(buffer == buffer + _c_size && index == _c_size)
			break;
	}
	return c;
}
//write the output
void c_write (cell this[]){
	char *i_stream;
	i_stream = malloc(sizeof(_c_size));
	int i,j,width;
	width = get_width();
	//const char sep= '-';
	char *sep;
	sep = malloc(sizeof(3*width));
	while(*sep != '\0'){
		*(sep++) = '-';
	}
	for (i = 0; i < 9; i++) {
	         if (i == 3 || i == 6) {
	        	 sep[i] = '+';
	        	 printf( "%s+-%s+%s\n" , sep , sep , sep );
	         }
	         for (j = 0; j < 9; j++) {
	             if (j == 3 || j == 6)
	             printf("|");
	             (i_stream + i)[j] = str(this[i*9+i]);
	             printf("%c" , (i_stream + i)[j]);
	         }
	         printf("\n");
	      }
		  free(this);
		  free(sep);
		  free(i_stream);
}

/* init function */
void init (){
	/*struct group *grouped;
	grouped = malloc(sizeof(g));
	memcpy(&g, grouped, sizeof(g));*/
	g = malloc(_g_size);
	o = malloc(_c_size);
	n = malloc(_c_size);
	assert(g != NULL);
	assert(o != NULL);
	assert(n != NULL);
	int i,j,k,d,x;
	for ( i = 0; i < 9; i++ ) {
	         for ( j = 0; j < 9; j++ ) {
	            const int k = i*9 + j;
	            const int x[3] = {i, 9 + j, 18 + (i/3)*3 + j/3};
	            for ( d = 0; d < 3; d++ ) {
	            	(*g)[x[d]] = k;
	            	(*o)[k] = x[d];
	            }
	         }
	      }
	for ( k = 0; k < _c_size; k++ ) {
	         for ( x = 0; x < _c_size; x++ ) {
	            for ( j = 0; j < 9; j++ ) {
	            	int k2 = o[g[k][x]][j];
	            	if( k2 != k ) (*n)[k] = k2;
	            }
	         }
	      }
}

/* update neighbour */
cell next_n(cell s){
	int k = 0;
	int i = 0;
	int count_for_s = 0;
	int count_for_v = 0;

	cell v;
	cell *c;
	c = arr_struct();
	for( ;k < _c_size;k++ ){
			s = s+count_for_s;
			for( ;i < _c_size;i++ ){
				v = v+count_for_v;
				if(&n[count_for_s] == count_for_v)//comparason between pointer and integer
					v = c[count_for_v];
					break;}
	}
	return v;
}

void free_group(){
	free(g);
	free(o);
	free(n);
}

void free_struct(){
	cell *c;
	c = arr_struct();
	free(c);
}






