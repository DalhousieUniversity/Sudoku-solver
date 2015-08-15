/*
* Sudoku.h
 *
 *  Created on: Jul 20, 2015
 *      Author: hao
 */

#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <stdbool.h>
#include "Cell.h"
cell* arr_struct();
cell* c_read(char *buffer);
void c_write( cell *this );
bool is_solved( cell this );
cell next_n(cell s);
int get_width();
char str( cell this );
void free_group();
void free_struct();
int *val( cell this );
void create_array_of_cell();

#define _group
int (*g)_group[_g_size];
#define _of_group
int (*o)_of_group[_c_size];
#define _neighbours
int (*n)_neighbours[_c_size];


#endif /* SUDOKU_H_ */
