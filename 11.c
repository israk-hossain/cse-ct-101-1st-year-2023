#include<stdio.h>
int main(){

char ch[20];
int i;
printf("Enter The Value :");
gets(ch);
for(i=0;ch[i]='\0';i++){
    if(ch[i]!=' '){
        printf("%c",ch[i]);
    }
}
}