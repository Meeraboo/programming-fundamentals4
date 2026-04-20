
    }
    for (int i = 0; i < size2; i++)
    {
        arr1[position + i] = arr2[i];
    }
    size1 = size1 + size2;
    cout << "The merged array is: ";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }