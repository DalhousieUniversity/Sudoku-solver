/*
* Queue.h
 *
 *  Created on: Jul 31, 2015
 *      Author: hao
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include<stdbool.h>

void insert(int val);
void init_visit(int *val);
bool if_visited(int val);
bool empty();
int *visited;
char del();
int *queue;
#endif /* QUEUE_H_ */
