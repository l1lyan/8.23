#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (left = 0; left < sz; left++)
//	{
//		cout << arr[left] << " ";
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (int j = i + 1; j < sz - 1; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int arr[][3] = { {100,100,100},{90,50,100},{60,70,80} };
	int i = 0;
	int j = 0;
	
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	string arr1[] = { "张三","李四","王五" };
	for (i = 0; i < row; i++)
	{
		int sum = 0;
		for (j = 0; j < col; j++)
		{
			sum = sum + arr[i][j];
		}
		//cout << "第" << i + 1 << "个人的总分：" << sum << endl;
		cout << arr1[i] << "的总分为：" << sum << endl;
	}

	system("pause");
	return 0;
}