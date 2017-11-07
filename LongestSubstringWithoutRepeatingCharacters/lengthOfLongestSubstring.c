int lengthOfLongestSubstring(char* s) {  
    int len = strlen(s);
    int i,j,k,temp,n=0;
    if(len == 0) return 0;
    if(len == 1) return 1;
    for(i = 0; i < len-1; i++){
        temp = 1;
        for(j = i+1; j < len; j++){
            k = i;
            while(k<j){
                if(s[j] != s[k]) k++;
                else break;
            }
            if(k == j) temp++;
            if(k != j) break;
        }
         if(temp >n) n = temp;
    }          
    return n;
} 
