#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main(){

char c,d;
int i,j;
char a[8] = {'1','0',' ',' ','1','0','0','1'};
char far* p;
p = (char far*)0xb0008000;
clrscr();
randomize();
while(!kbhit()){
	delay(0);
	for(i=0;i<160;i+=6){
		for(int j=0;j<50;j++){
			*(p+160*j+i+1) = 2;
			*(p+160*j+i)=a[random(8)];
			delay(0);
		}
		delay(0);
	}

}

}
