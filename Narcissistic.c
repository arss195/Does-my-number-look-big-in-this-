
int dec(int s)
{
    int n = 0;
    while (s > 0)
    {
        s = s/10;
        n++;
    }
  return(n);
}
bool narcissistic( int value ){
  int check,result,n,i,step,raz;
  check = value;
  result = 0;
  
  raz = dec(value);
  while (check > 0)
  {
    n = check % 10;
    step = 1;
    for (i = 0; i < raz; i++)
        step=step*n;
    result += step;
    check = check / 10;
  }
    return(result == value);
  
}
