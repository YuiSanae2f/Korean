#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <stdlib.h>

char a[999999] = "\0"; //search
char search[999999]; //search2
char choose[3];
int i;

char google[999999] = "https://www.google.co.kr/search?q=";
char naver[999999] = "https://search.naver.com/search.naver?where=nexearch&sm=top_hty&fbm=1&ie=utf8&query=";
char daum[999999] = "https://search.daum.net/search?w=tot&DA=YZR&t__nil_searchbox=btn&sug=&sugo=&sq=&o=&q=";
char youtube[999999] = "https://www.youtube.com/results?search_query=";
char nikoniko[999999] = "https://www.nicovideo.jp/search/";
char yahoo[999999] = "https://search.yahoo.com/search?p=";
char safari[999999] = "https://www.apple.com/kr/search/";

int main(){
	repeat:
	system("cls");	
	
//	char search[999999] = { 0, };
	char a[999999] = { 0, };

	system("title 서치 엔진...? by юи сан аэ2ф");
	printf("Input: ");
	scanf("%s",&a[0]);
	system("cls");
	
	printf("Output: %s\n\nA.naver\nB.google\nC.daum\nD.youtube\nE.nikoniko\nF.yahoo\nG.safari\nH.END\n\nChoose: ",&a[0]);
	scanf("%s",&choose[0]);
	
	for(int i=0;i<7;i++){
		char search[999999] = { 0, };
		
		switch(choose[i]){
			case 65:
				strcat(search,naver);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );				
				continue;
			case 66:
				strcat(search,google);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );				
				continue;
			case 67:
				strcat(search,daum);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );				
				continue;
			case 68:
				strcat(search,youtube);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );				
				continue;
			case 69:
				strcat(search,nikoniko);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );
				continue;
			case 70:
				strcat(search,yahoo);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );
				continue;
			case 71:
				strcat(search,safari);
				strcat(search,a);
				ShellExecute(NULL, "open", search , NULL, NULL, SW_SHOW );
				continue;
			case 72:
				goto doom;
		}
	}
	goto repeat;
	doom:
		system("title END");
		system("cls");
		printf("END");
		system("exit");
}



