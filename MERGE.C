#include<stdio.h>
#include<conio.h>
void sort(int [], int, int [], int, int []);
int main()
{
  int a1[100], b1[100], n1, n2, t, c1[200];
  clrscr();
  printf("no of elements for first array");
  scanf("%d", &n1);
  printf("enter elements\n", n1);
  for (t = 0; t < n1; t++)
	{
		scanf("%d", &a1[t]);
	}
  printf("no of elements for second array\n");
  scanf("%d", &n2);
  printf("enter elements\n", n2);
  for (t = 0; t < n2; t++)
	{
		scanf("%d", &b1[t]);
	}
  sort(a1, n1, b1, n2, c1);
  printf("Array After Sorting\n");

  for (t = 0; t < n1 + n2; t++)
	{
		printf("%d\n", c1[t]);
	}
  if((n1+n2)%2==0)
		printf("%f",(float)(c1[(n1+n2)/2] + c1[(n1+n2)/2+1])/2);
	else
		printf("%d",(c1[(n1+n2)/2]));
		return 0;
}

void sort(int a1[], int n1, int b1[], int n2, int c1[])
{
int x, y, z;
y = z = 0;
for (x = 0; x < n1 + n2;)
	{
		if (y < n1 && z < n2)
			{
				if (a1[y] < b1[z])
				{
					c1[x] = a1[y];
					y++;
				}
				else
				{
					c1[x] = b1[z];
					z++;
				}
					x++;
				}
		else if (y == n1)
				{
					for (; x < n1 + n2;)
				{
					c1[x] = b1[z];
					z++;
					x++;
				}
				}
		else
				{
					for (; x < n1 + n2;)
				{
					c1[x] = a1[y];
					y++;
					x++;
      }
    }
  }
}