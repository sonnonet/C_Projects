#include <stdio.h>
#define SIZE 10

void print11(int a[], int len);
int min(int a[], int len);
int main()
{
  int grade[SIZE];
  int minValue;
  //입력
  for(int i=0; i < SIZE; i++)
  {
    puts("성적을 입력하시오..");
    scanf("%d", &grade[i]);
  }
  print11(grade,SIZE);
  minValue = min(grade,SIZE);
  printf("최소값은 : %d", minValue);

}
void print11(int a[], int len)
{
  for (int j=0; j<len; j++)
  {
    printf("grade[%d] = %d\n",j,a[j]);
  }
}
int min(int a[], int len)
{
  int min;
  min = a[0];

  for(int j=1; j<len; j++)
  {
    if(min>a[j])
    {
      min = a[j];
    }
  }
  return min;
}
