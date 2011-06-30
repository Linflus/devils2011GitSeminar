#include "cmdTest.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int testCmd(int argc, char (*argv)[ARG_SIZE]){
	cout<<"change to your function"<<endl;
	cout<<"this is test make"<<endl;
	return 0;
}

int cleanC(int argc, char (*argv)[ARG_SIZE]){
	int r;

	srand((unsigned)time(NULL));
	cout<<"FORMAT C: IS NOW STARTING..."<<endl;

	for(int i=0; i < 20; i+=r){
		r = rand()%3+1;
		Sleep(r*1000);
		for(int j=0; j<r; j++){
			cout<<"=";
		}
	}
	return 0;
}