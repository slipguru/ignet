#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0
#define Match 5
#define MissMatch -3
#define GapPenalty 5 //10
#define GapExt 4 //8
#define GAP (char)'-'

void print_alignment_matrix(int * M, int n, int m, const char * a, const char * b);
int local_alignment(const char * a, const char * b, char * a_n, char * b_n);
int global_alignment(const char * a, const char * b, char * a_n, char * b_n);
double cdist_function(const char * a, const char * b);
