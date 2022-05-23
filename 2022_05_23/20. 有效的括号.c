char pairs(char ch)
{
    if(')' == ch)return '(';
    if(']' == ch)return '[';
    if('}' == ch)return '{';
    return 0;
}
bool isValid(char * s){
    int len = strlen(s);
    if(len % 2 == 1)
    {
        return false;
    }
    char stk[len + 1];
    int top = 0;
    for(int i = 0; i < len; ++i)
    {
        char pair = pairs(s[i]);
        if(pair)
        {
            if(top == 0 || stk[top - 1] != pair)
            {
                return false;
            }
            --top;
        }
        else
        {
            stk[top++] = s[i];
        }
    }
    return 0 == top;
}