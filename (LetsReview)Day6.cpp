#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;
void index_printer(char words[]){
    for(int x=0;x<strlen(words);x++){
        if(x%2==0){
            printf("%c",words[x]);
        }
    }
    printf(" ");
    
    for(int z = 0;z<strlen(words);z++){
        if(z%2 != 0){
            printf("%c",words[z]);
        }
    }
    printf("\n");
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no_of_words;
    char words[10000];
    scanf("%d",&no_of_words);
    
    for(int i = 0;i<no_of_words;i++){
        scanf("%s",words);
        index_printer(words);
    }
}
