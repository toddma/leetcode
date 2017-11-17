bool isValid(char* s) {  
    char stack[6000];  
    int top = 0;  
    while(*s){
        if(*s == ')'){
            if((top > 0) && stack[top-1] == '(') top--;
            else  return false;
        }else if(*s == '}'){
            if((top > 0) && stack[top-1] == '{') top--;
            else return false;
        }else if(*s == ']'){
            if((top > 0) && stack[top-1] == '[') top--;
            else  return false;
        }else{
            stack[top] = *s;  
            top++;
        } 
        s++;
    }  
    return top == 0;  
} 
