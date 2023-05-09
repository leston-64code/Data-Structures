  #include<stdio.h>
  #include<string.h>
  void compare(char str1[50],char str2[50]);
  void main(){
    char str1[50],str2[50];
    printf("Enter two strings\n");
    scanf("%s%s",str1,str2);
    compare(str1,str2);
  }
 void compare(char str1[50],char str2[50]){
    int len1,len2,i,j,flag=1;
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2){
        printf("Strings are diffrent \n");
        
    }else{
        for(i=0;str1[i]!='\0';i++){
            if(str1[i]==str2[i]){
                flag=0;
            }else{
                flag=1;
            }
        }
        if(flag==0){
            printf("Strings are same");
        }else{
            printf("Strings are diffrent");
        }
    }
 }