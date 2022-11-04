int main()
{
    int a=10,b=20;
    printf("before swapping number:%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;


    printf("\nafter swapping number:%d %d",a,b);

    return 0;
}

