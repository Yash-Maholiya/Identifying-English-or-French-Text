#include<stdio.h>
#include<string.h>
int main(){
    int n,count_t=0,count_s=0;
    scanf("%d",&n);
    getchar();
    char arr[n][101];
    for(int i=0;i<n;i++){
        fgets(arr[i], 101, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<strlen(arr[i]);j++){
            if(arr[i][j]=='t'||arr[i][j]=='T') count_t++;
            if(arr[i][j]=='s'||arr[i][j]=='S') count_s++;
        }
    }
    if(count_t>count_s) printf("English");
    else printf("French");
    printf("\nt=%d\n",count_t);
    printf("s=%d",count_s);
  return 0;
}
