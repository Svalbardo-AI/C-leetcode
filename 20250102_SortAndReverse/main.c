#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int BubbleSort(int *nums, int numsSize) {//seq——1为正序/-1为倒序
    int *cache=nums;
    for(int i = 0; i < numsSize-1; i++) {
        for(int j = 0; j < numsSize-i-1; j++) {
            if (cache[j]>cache[j+1]) {
                int temp = cache[j];
                cache[j]=cache[j+1];
                cache[j+1]=temp;
            }
        }
    }
    for(int i = 0; i < numsSize-1; i++) {
        for(int j = 0; j < numsSize-i-1; j++) {
            if (cache[j]<cache[j+1]) {
                int temp = cache[j];
                cache[j]=cache[j+1];
                cache[j+1]=temp;
            }
        }
    }
    for(int i = 0; i < numsSize; i++) {
        printf("%d ",cache[i]);
    }
    return *cache;
}

void Qsort(int *arr, int left, int right){
    if (right <= left) return;
    int i = left,j = right,key = arr[left];;
    while (1)
    {
        /*从左向右找比key大的值*/
        while (arr[i] <= key)
        {
            i++;
            if (i == right){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[j] >= key)
        {
            j--;
            if (j == left){
                break;
            }
        }
        if (i >= j) break;
        /*交换i,j对应的值*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*中枢值与j对应值交换*/
    arr[left] = arr[j];
    arr[j] = key;
    Qsort(arr, left, j - 1);
    Qsort(arr, j + 1, right);
}

void reverse(int *arr, int left, int right) {
    while (1) {
        if (left > right) break;
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void print(int *arr,int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    const int size = 10;
    int input[10] = {5,125,3,-2,44,58,190,5523,1,19};
    int *list = malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) {
        list[i] = input[i];
    }
    // list = BubbleSort(list, size);
    // Qsort(list, 0,size-1);
    // reverse(list, 0, size - 1);
    print(list,size);
    free(list);
    return 0;
}