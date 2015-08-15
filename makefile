Task: Task.o Sudoku.o Cell.o	
		gcc -o Task Task.o Sudoku.o Cell.o
Task.o: Task.c Sudoku.h Cell.h
		gcc -c Task.c
Sudoku.o: Sudoku.c Sudoku.h
		gcc -c Sudoku.c
Cell.o: Cell.c Cell.h
		gcc -c Cell.c
