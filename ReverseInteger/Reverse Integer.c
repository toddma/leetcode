int reverse(int x) {
    int temp,res = 0;
    while(x){  
        temp = res*10 + x%10;
        if(temp/10 != res) return 0;//处理溢出
        res = temp;
        x = x/10;
    }
    return res;
}
