#include<stdio.h>
#include<math.h>


int P(int n)
{
    int chuoi = 0;
    int i = 0;
    if (n>0)
    {
        while(n>0)
        {
            chuoi += (n%2)*pow(10,i);
            i++;
            n /= 2;
        }
    printf("Bin = %d", chuoi); 
    }
    else printf("-1");
    return chuoi;

}

int main()
{
    int n;
    printf("\nNhap so nguyen duong n : ");
    scanf("%d", &n);
    P(n);
    printf("\n--------------------------------------------------");
    return 0;
}