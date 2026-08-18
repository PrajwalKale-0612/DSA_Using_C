#include<stdio.h>
void Square(double num)
{
    printf("\nSize of num var %d\n",sizeof(num));
    printf("\nSize of data type %d\n",sizeof(double));
    printf("\nSize of %lf\n",num*num);

}
int main()
{
	
    double num=5.2;
    Square(num);
	return 0;
}
