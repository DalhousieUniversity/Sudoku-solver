/*
* Cell.h
 *
 *  Created on: Jul 19, 2015
 *      Author: hao
 */

#ifndef CELL_H_
#define CELL_H_
/* This is an emulation of a sudoku solver.(c++ version) The cell class is particularly to restrain the visbility
 * between 81 cells in total that holds global constrains by setting up the preprocessors of flags
 * and operations
 * */
#define f_on 1/* it is for the flag to be indicated as open status for assigning a value
of index onto a cell*/
#define f_off -1/* no value from the index of flag is valid for curent cell */
#define _f_size 9
#define _c_size 81
#define _g_size 27
//struct cell;
//typedef struct cell cell;
#define max(a,b) (((a)>(b))?(a):(b))

typedef struct cell_struct *cell;
void free_cell();
int flag_status( cell c, int index );
void f_on_assign( cell c, int index );
void f_off_assign( cell c, int index );
int count_f_on( cell c );/* return the number of flags those are on */
int fir_( cell c );/* show the index value of the first one being found in the flag */
int _index( cell c, int k );
int *val( cell c );
/* string function of width of variable length */
char str( cell c );
/* tentative function */
int count_least();/* when systematically stepped into backtracking, do with maximized
possiblity */




#endif /* CELL_H_ */
