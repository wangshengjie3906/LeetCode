bool divisorGame(int n){
    //数学分析，偶数时爱丽丝必胜，奇数则相反
    if((n & 1) == 0)//注意优先级
    {
        return true;
    }
    else
    {
        return false;
    }
}