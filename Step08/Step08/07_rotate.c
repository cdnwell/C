#include <stdio.h>
void PrintArray(int arr[][4])
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

//���ٴ� ��� �ִ��� �˾ƾ� �ּҰ��� �Ѱ��� �� �ִ�. int arr[][4]�� �ǹ�
void RotateArray(int arr[][4])
{
    int temp[4][4];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            temp[i][j] = arr[3-j][i];
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            arr[i][j] = temp[i][j];
        }
    }

    PrintArray(arr);

}
int main(void)
{
    int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    PrintArray(arr);
    RotateArray(arr);
    RotateArray(arr);
    RotateArray(arr);
    RotateArray(arr);

    return 0;
}