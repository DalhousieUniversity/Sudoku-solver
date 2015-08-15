/*
* Cell.c
 *
 *  Created on: Jul 19, 2015
 *      Author: hao
 */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Cell.h"

/*static cell *mycell;

void select_cell(cell *c) {
	mycell = c;
}*/

struct cell_struct{
	int _flag[_f_size];
};

/* here is to create an array of struct */
cell creat()
{
	cell c = malloc(sizeof(struct cell_struct));
	assert(c != NULL);//first unit testing
	int i = 0;
	for(;i<_f_size;i++){
		c->_flag[i] = f_on;
	}
	return c;
}

void free_cell(){
	cell c;
	c = creat();
	free(c);
}

/* declared functions from cell.h */
int flag_status(cell this,  int index ){
	int *flag = this->_flag;
	return *(flag + index);
}

void f_on_assign(cell this, int index ){
	int *flag = this->_flag;
	*(flag += index) = 1;
}

void f_off_assign(cell this, int index ){
	int *flag = this->_flag;
	*(flag += index) = -1;
}

int count_f_on(cell this){
	int i = 0;
	int count = 0;
	while(i < _f_size) {
		if(flag_status(this, i)==f_on)
			count++;
	}
	return count;
}

int fir_(cell this){
	int i = 0;
		while(i < _f_size) {
			if(flag_status(this, i)==f_on){
				break;
			}
			i++;
		}
		return i;
}
/* garbage function */
int _index( cell this, int k ){
	for(;this < this + k;this ++){};
	return k;
}

/* tentative function */
int count_least(){
	return 0;
}






