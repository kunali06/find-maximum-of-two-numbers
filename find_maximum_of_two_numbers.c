void main(){
int  a,b;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);

if(a>b)
{
    printf("%d is greater\n",a);
}
else if(b>a)
{
    printf("%d is greater\n",b);
}
else
{
    printf("%d and %d both are equal\n");
}
getch();
}
