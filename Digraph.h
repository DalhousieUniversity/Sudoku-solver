/*
 * Digraph.h
 *
 *  Created on: Jul 28, 2015
 *      Author: hao
 */

#ifndef DIGRAPH_H_
#define DIGRAPH_H_
#include<stdbool.h>
#include"Sudoku.h"
#define matrix
int (**m) matrix[_c_size];
//bool *visited;
void create_matrix();
void free_all();
void built_digraph( cell c );
void display_digraph();
void add_edge(int i, int j);




#endif /* DIGRAPH_H_ */
