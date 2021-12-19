#include<stdio.h>

//char* uprstr(str);
int main (){
    char* uprstr(str);

    char stri[20];
    printf("Now entr the string: \n");
    scanf("%s",&stri);
    printf("uper case string:%s \n",uprstr(stri));
   }

char* uprstr(char stri[]){
    int i=0;
    while(stri[i]!='\0'){
        if(stri[i]>='a'&&stri[i]<='z'){
            stri[i]=stri[i]-32;
            i++;
        }else{i++;}
    }
    return stri;
}
