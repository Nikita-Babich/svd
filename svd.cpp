#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define nl printf("\n")
#define ELEM(mat,i,j) (mat->elem)[i * (mat->cols) + j]

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

void mat_destroy(MAT* mat){
	free(mat);
	return;
}

//void mat_unit(MAT* mat){
//	
//}

void mat_random(MAT* mat){ //none of the versions works
	int length = mat->rows * mat->cols;
	printf("%d",length);
	for(int i=0; i < length; i++){	
		mat->elem[i] = 5;//(float)(rand()/(float)RAND_MAX);
	}
	//ELEM(mat,i,j) = (rand()/(float)RAND_MAX); //problem
	//(mat->elem)[i * (mat->cols) + j] = (rand()/(float)RAND_MAX); //problem
	return;
}

void mat_print(MAT* mat){
	printf("\n Matrix with sizes %d, %d", mat->rows, mat->cols);
	nl;
	for(int i=0; i < mat->rows; i++){
		for(int j=0; j < mat->cols; j++){
			printf("\t%1.1e", ELEM(mat,i,j));
		}
		nl;
	}
}

int main(){
	srand(time(NULL));
	
	MAT* a = mat_create_with_type(4, 4);
	//mat_random(a);
	mat_print(a);
	mat_destroy(a);
	
	MAT* b = mat_create_with_type(3, 10);
	//mat_random(b);
	mat_print(b);
	mat_destroy(b);
	
	
	
	
		
}

