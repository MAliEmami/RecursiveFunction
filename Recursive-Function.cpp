#include <iostream>

float OddAverage(int arr[], int size)
{
    int sum = 0;
    float counter = 0;
    for (int i = size; i > 0; i--)
    {
        if (arr[i - 1] % 2 == 1)
        {
            sum += arr[i - 1];
            counter += 1;
        }
    }
    return (sum / counter);
}

bool isSort(int arr[], int size)
{
    bool flag = true;
    for (int i = size; i > 0; i--)
    {
        if (arr[i] >= arr[i - 1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int binarySearch(int arr[], int l, int size, int x)
{
    while (l <= size)
    {
        int m = l + (size - l) / 2;
        if (arr[m] == x)
        {
            return m;
        }

        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            size = m - 1;
        }
    }
    return -1;
}

int main()
{
    int num;
    std::cin >> num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        std::cin >> array[i];
    }

    std::cout << "Aerage of odd numbers: " << OddAverage(array, num) << '\n';
    std::cout << "Is thise a sort array? " << isSort(array, num - 1) << '\n';
    if (isSort(array, num - 1) == 1)
    {
        int num2;
        std::cin >> num2;
        std::cout << "The number is in " << binarySearch(array, 0, num - 1, num2) << " andis.";
    }
    return 0;
}