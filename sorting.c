#include <stdio.h>

void display(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}


/* ================= MERGE SORT ================= */

int mergeComparisons = 0;
int pass = 1;

/* Merge two parts */
void merge(int a[], int low, int mid, int high)
{
    int temp[20];
    int i, j, k;

    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        mergeComparisons++;

        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++)
    {
        a[i] = temp[i];
    }
}


void mergeSort(int a[], int n)
{
    int size;
    int low, mid, high;

    size = 1;

    while (size < n)
    {
        low = 0;

        while (low < n - size)
        {
            mid = low + size - 1;
            high = low + 2 * size - 1;

            if (high >= n)
            {
                high = n - 1;
            }

            merge(a, low, mid, high);

            low = low + 2 * size;
        }

        printf("Pass %d: ", pass);
        display(a, n);

        pass++;
        size = size * 2;
    }
}


/* ================= QUICK SORT ================= */

int quickComparisons = 0;
int partitionNumber = 1;

/* Partition */
int partition(int a[], int low, int high)
{
    int pivot;
    int i, j;
    int temp;

    pivot = a[low];

    i = low + 1;
    j = high;

    while (i <= j)
    {
        while (i <= high)
        {
            quickComparisons++;

            if (a[i] > pivot)
                break;

            i++;
        }

        while (j >= low)
        {
            quickComparisons++;

            if (a[j] <= pivot)
                break;

            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    printf("\nPartition %d\n", partitionNumber);
    printf("Pivot = %d\n", pivot);
    printf("Array after partition: ");
    display(a, 8);

    partitionNumber++;

    return j;
}


void quickSort(int a[], int low, int high)
{
    int p;

    if (low < high)
    {
        p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}


/* ================= MAIN ================= */

int main()
{
    int a[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int b[] = {324, 125, 456, 218, 102, 389, 275, 147};

    int n = 8;

    /* Original Array */

    printf("====================================\n");
    printf("       SORTING ALGORITHM ANALYSIS\n");
    printf("====================================\n");

    printf("\nOriginal Array:\n");
    display(a, n);




    printf("\n========== MERGE SORT ==========\n");

    mergeSort(a, n);

    printf("\nFinal Sorted Array:\n");
    display(a, n);

    printf("Number of comparisons = %d\n", mergeComparisons);

    printf("\n========== QUICK SORT ==========\n");

    printf("First element is selected as pivot.\n");

    quickSort(b, 0, n - 1);

    printf("\nFinal Sorted Array:\n");
    display(b, n);

    printf("Number of comparisons = %d\n", quickComparisons);


    printf("\n====================================\n");
    printf("             PROGRAM END\n");
    printf("====================================\n");

    return 0;
}