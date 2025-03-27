#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"
#define WORD_MAX_LENGTH 30

unsigned int fstring_length(fixstring s){
    int char_count = 0;
    int i = 0;
    while(s[i] != '\0'){
        char_count++;
        i++;
    }
    return char_count;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    bool res = true;
    int i = 0;
    int l_s1 = fstring_length(s1);
    int l_s2 = fstring_length(s2);
    while((i<WORD_MAX_LENGTH)&&((l_s1!=l_s2)||(s1[i]!=s2[i]))){
        res = false;
        i++;
    }
    return res;
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    bool res = true;
    int i = 0; 
    while((s1[i]!='\0')&&(s2[i]!='\0') && res){
        if (s1[i]!=s2[i]){
            res = false;
        }
        i++;
    }
    if(s1[i]>s2[i]||(s2[i]=='\0'&&s1[i]!='\0')){
        res = true;
    }
    return res;
    }

// Se puede corregir que aparezca lo de va antes o después en los iguales?