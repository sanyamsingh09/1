// check num is strong or not
int strong(int num){
    int o = num;
    int  remainder,sum=0;
    while(num!=0){
        remainder=num%10;
        int factorial=1;
        // calculation of factorial
        for(int i=1;i<=remainder;i++){
            factorial*=i;
        }
        sum+=factorial;
        num=num/10;
    }
    return(sum==o);
}

// Function to check if a number is palindrome
int palid(int num) {
    int o = num;
    int reversed = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (o == reversed);
}

// check  a number is factorial
int fac(int num){
    int sum=1;
    for (int i=1;i<=num;i++){
        sum*=i;
    }
    return sum;
} 