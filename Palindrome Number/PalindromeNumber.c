bool isPalindrome(int x) {
    long reverse=0;
    if(x<0) return false;
    int y = x;
    while(y){
        reverse = reverse*10 + y%10;
        y = y/10;
    }
    return (reverse == x)?true:false;   
}
