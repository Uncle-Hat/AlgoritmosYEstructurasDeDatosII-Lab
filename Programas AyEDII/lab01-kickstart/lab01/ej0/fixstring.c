#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"
#define WORD_MAX_LENGHT 30

unsigned int fstring_length(fixstring s) {
    int char_count = 0;
    for(int i=0;i<WORD_MAX_LENGHT;i++){
        if (s[i]=='\0'){
            break;
        }
        else{
            char_count++;
        }
    }
    return char_count;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    int eq_char = 0;
    for(int i=0;i<WORD_MAX_LENGHT;i++){
        if (s1[i]==s2[i]){
            eq_char++;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    bool res = true;
    for (int i=0;i<WORD_MAX_LENGHT;i++){
        else if(s1[i]>s2[i]){
            res = false;
        }
    }
    return res;
}

// Se puede corregir que aparezca lo de va antes o después en los iguales?