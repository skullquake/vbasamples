#include<stdio.h>
#include<string.h>
#include"lib.h"
#include<stdlib.h>
#include<time.h>
__stdcall int dub(int x){
        return 2*x;
}
__stdcall int rnd(){
	srand(time(0));
        return rand();
}
