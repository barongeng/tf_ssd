#ifndef __MATH_FUNCTIONS_H__
#define __MATH_FUNCTIONS_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cblas.h"

/*
	���ܣ� C=alpha*A*B+beta*C 
	A,B,C ���������һά�����ʽ�� 
	CblasRowMajor :������������ģ���ά����Ҳ����һά���鴢��ģ� 
	TransA, TransB���Ƿ�Ҫ��A��B��ת�ò�����CblasTrans CblasNoTrans�� 
	M�� A��C ������ 
	N�� B��C ������ 
	K�� A �������� B ������ 
	lda �� A������������ת�ã���������ת�ã� 
	ldb�� B������������ת�ã���������ת�ã�
*/
void Murphy_gemm_f( enum CBLAS_TRANSPOSE TransA,
     enum CBLAS_TRANSPOSE TransB, const int M, const int N, const int K,
    const float alpha, const float* A, const float* B, const float beta,
    float* C);
	
void Murphy_gemm_d(enum CBLAS_TRANSPOSE TransA,
     enum CBLAS_TRANSPOSE TransB, const int M, const int N, const int K,
    const double alpha, const double* A, const double* B, const double beta,
    double* C);

/*
	���ܣ� y=alpha*A*x+beta*y 
	����X��Y��������A �Ǿ��� 
	M��A ������ 
	N��A ������ 
	cblas_sgemv �е� ����1 ��ʾ��X��Y��ÿ��Ԫ�ض����в���
*/

void Murphy_gemv_f(enum CBLAS_TRANSPOSE TransA, const int M,
    const int N, const float alpha, const float* A, const float* x,
    const float beta, float* y);

void Murphy_gemv_d(enum CBLAS_TRANSPOSE TransA, const int M,
    const int N, const double alpha, const double* A, const double* x,
    const double beta, double* y);
	

/*
	���ܣ� Y=alpha*X+Y 
	N��ΪX��Y��element�ĸ���
*/
void Murphy_axpy_f(const int N, const float alpha, const float* X,float* Y);
void Murphy_axpy_d(const int N, const double alpha, const double* X,double* Y);

void Murphy_set_f(const int N, const float alpha, float* Y);
void Murphy_set_d(const int N, const double alpha, double* Y);


#endif




