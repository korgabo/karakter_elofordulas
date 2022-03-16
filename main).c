#include <stdio.h>
#include "prog1.h"
#include <string.h>

int char_count(string s, char c){
    int hossz = strlen(s);
    int karakter_elofordulas;
    for(int i = 0; i < hossz; ++i){
        if(s[i] == c){
            ++karakter_elofordulas;
        }
    }
    return karakter_elofordulas;
}

int main()
{
    printf("A c karakter %dx fordul elő a sztringben.", char_count("asdascassdmgaásdgméasgm", 'c'));


    return 0;
}
