/*
 *
 Digraph.c
 *
 *  Created on: Jul 28, 2015
 *      Author: hao
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Digraph.h"
#include "Cell.h"
#include "Queue.h"
#include "Sudoku.h"

struct cell_struct{
	int _flag[_f_size];
};

/*cell* arr_struct(){
	cell(*c)[_c_size] = malloc(sizeof(cell)*_c_size);
	assert(c !=NULL);
	return *c;}*/

void create_matrix(){
	m = malloc(sizeof(cell)*_c_size);
}

void add_edge( int i, int j){
	assert(m != NULL);
	**(m[i] + j) = 1;
}

/* build the directed graph ( BFS search ) */
void  built_digraph( cell s ){
	int j = 0;
	char *temp;
	temp = (char*)malloc(sizeof(9*9*9));//the number here might be changed in the future
	//this function is to allocate the memory for all vertices
	for(;s<s + _c_size;s++){
		*temp = str(s);
		 temp++;
	}
	queue = malloc(4*sizeof(temp));//to store the integer value
	visited = malloc(4*sizeof(temp));//to store the integer value
	//this function is to assign each vertices but s false visited in the first place
	for( ;s < s + _c_size; s++ ){
		while(*val(s) != -1)
			init_visit(val(s));
	}
	visited[*val(s)] = true;
	insert(*val(s));
	//int i = fir_(s);
	int i =0;
	while( !empty() ){
		del();
		cell v; //this is the following point
		v = next_n(s);
		for( ;i < _f_size;i++){
			for(;j < _f_size;j++,v++){
			if( if_visited(val(v)[i] ) == false ){
				visited[val(v)[i]] = true;
				if(val(s)[j]!=val(v)[i]){add_edge(val(s)[j], val(v)[i]);insert(val(v)[i]);}
				}
			}
			//val(v)+=i;
		}
		s = v;
	}
	free(temp);
	free(queue);
	free(visited);
}

void display_digraph(){
	create_matrix();
	int i = 0;
	int j = 0;
	int k = 0;
	int g = 0;
	cell *c = arr_struct();
	for(;i < _c_size;i++){
		for(;j < _c_size;j++){
			for(;k < _g_size;k++){
				for(;g < _g_size;g++){
					if(**(m[val(c[i])[k]] + val(c[j])[g]) == 1)
						printf("%d --> %d\n", val(c[i])[k],val(c[j])[g]);
				}
			}
		}
	}
	free(c);
}

void free_all(){
	free_group();
	free_struct();
	free(m);
}




