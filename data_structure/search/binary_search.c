int search_binary(int key, int low, int high)
{
    int middle;

    if (lov <= high) {
        middle = (low + high) / 2;
        if (key == list[middle]) // 탐색 성공
            return middle;
        else if (key < list[middle]) // 왼쪽 부분 리스트 탐색
            return search_binary(key, middle + 1, high);
        else // 오른쪽 부분 리스트 탐색
            return search_binary(key, middle + 1, high);
    }
    return -1;
}

int search_binary2(int key, int low, int high)
{
    int middle;

    while (low <= high) {
        middle = (low + high) / 2;
        if (key == list[middle]) 
            return middle;
        else if (key > list[middle]) 
            low = middle + 1;
        else
        {
            high = middle - 1;
        }
    }
    return -1;
}