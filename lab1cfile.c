#include <stdio.h>
#include <string.h>

struct KalmanFilter {
   float q=0.1;
   float r=0.1;
   float x=0;
   float p=0.1;
   float k=0;
} KalmanFilter; 

int main(){
	struct KalmanFilter Filter;
	float* OutputArray;
	
	
}

int KalmanFilter_C(float* InputArray, float* OutputArray, kalman_state* kstate, int Length)
{
	int i;
	for(i=0,i<Length,i++){
		kstate.p=kstate.q+kstate.p;
		kstate.k=kstate.p/(kstate.p+kstate.r);
		kstate.x=kstate.x+kstate.k*(InputArray[i]-kstate.x);\
		kstate.p=(1-kstate.k)*kstate.p;
		OutputArray[i]=kstate.x;
		if (isnan(OutputArray[i])){
		return -1;
		}
	}
	return 0;
} 