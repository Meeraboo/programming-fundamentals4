void reverseArrayinGroups(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = i + k - 1;

        if (end >= n)
            end = n - 1;

        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }
}