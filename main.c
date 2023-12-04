#define	_CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int FindNum(int arr[3][3],int input,int* px,int* py)
{
	int x = 0;
	int y = *py-1;
	while (x<*px && y>=0)
	{
		if (input > arr[x][y])
		{
			x++;
		}
		else if (input < arr[x][y])
		{
			y--;
		}
		else if (input = arr[x][y])
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr [3][3] = {{1,2,3} ,{4,5,6} ,{7,8,9}};
	int input = 0;
	scanf("%d",&input);
	int row = 3;
	int col = 3;
	int ret = FindNum(arr,input,&row,&col);
	if (ret == 1)
	{
		printf("SUCCESSFULLY FIND:%d %d\n",row,col);
	}
	else
	{
		printf("NOT FIND\n");
	}
	return 0;
}
