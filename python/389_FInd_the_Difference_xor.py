char findTheDifference(char* s, char* t) {  
    int lent = strlen(t);  
    int i;  
    char ch = 0;  
    for(i = 0; i < lent; ++i) {  
        ch ^= s[i];  
        ch ^= t[i];  
    }  
    return ch;  
} 
