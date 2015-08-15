/*
 * Queue.c
 *
 *  Created on: Jul 31, 2015
 *      Author: hao
 */
#include"Queue.h"
#include<stdlib.h>


int front = 0, rear = 0;

int get_front(){
	return queue[front];
}

void insert ( int val ){
	queue[front] = val;
	front++;
}

void init_visit ( int *val ){
	visited = val;
	while(*val!=0){
		*visited = -1;
		val++;
	}
}

bool if_visited ( int val ){
	int i;
	for(i = 0; i < front; i++){
		if(val==queue[i])
			return true;
	}
	return false;
}

bool empty(){
	int size = 0;
	while( queue != NULL ){
		queue++;
		size++;
	}
	return (size != 0 ? false : true);
}

char del (){
	rear = rear + 1;
	return queue[rear-1];
}






