int myAtoi(char* str) {
    int i = 0;
    long long result = 0;
    int flag = 1;
    while(str[i] == ' '){//空格判断
        i++;
    }
    if(str[i] == '+'){//正负判断
        flag = 1;
        i++;
    }
    else if(str[i] == '-'){
        flag = -1;
        i++;
    }
    while(str[i] != '\0'){
        if(str[i] > '9' || str[i] < '0'){
           break;
        }
        else{
            result = result*10 + (str[i]-'0');
            if(result > 2147483647){
                if (flag > 0)
                    result = 2147483647;
                else 
                    result = 2147483648;
                break;
            }    
        }
        i++;
    }
    return (int)(flag*result);
}
