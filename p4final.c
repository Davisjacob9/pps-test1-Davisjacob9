 #include<stdio.h>
int input()
{
  int a;
  printf("ënter the values of a");
  scanf("%d",&a);
  return a;
}
int com(int a,int b,int c)
{
  int big;
  if(a>b&&a>c)
  {
    big = a;
  }
  else if(b>c)
  {
    big=b;
  }
  else
  {
    big = c;
  }
  return big;

}
void output(int big)
{
  printf("the biggest number = %d",big);
}
int main()
{
  int a,b,v,big;
  a=input();
  b=input();
  v=input();
  big=com(a,b,v);
  output(big);
  return 0;

}