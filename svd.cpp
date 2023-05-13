#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define nl printf("\n")
#define ELEM(mat,i,j) mat[i * (mat->cols) + j]

typedef struct{
	unsigned int rows;
	unsigned int cols;
	float* elem;
}MAT;

MAT* mat_create_with_type(unsigned int rows, unsigned int cols){
	//Can ptr still be NULL after typecasting?
	MAT* ptr = (MAT*)malloc( sizeof(unsigned int)*2 + sizeof(float)*rows*cols );
	if(ptr == NULL){
		free(ptr);
		return NULL;
	}
	ptr->rows = rows;
	ptr->cols = cols;
	return ptr;
}

//MAT* mat_create_by_file(char* filename){
//	
//}

//char mat_save(MAT* mat, char* filename){
//	
//}

//void mat_destroy(MAT* mat){
//	
//}

//void mat_unit(MAT* mat){
//	
//}

//void mat_random(MAT* mat){
//	
//}

//void mat_print(MAT* mat){
//	
//}

int main(){
	
}

