#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int x;
    int y;
} point;
point ref;
int compare(const void *a, const void *b)
{
    point aa = *(point *)a;
    point bb = *(point *)b;

    int val = (aa.x - ref.x) * (bb.y - ref.y) - (bb.x - ref.x) * (aa.y - ref.y);
    printf("%d ", val);
    if (val > 0)
    {
        return -1;
    }
    else if (val < 0)
    {
        return 1;
    }
    if (val == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    // int arr[6] = {12, 3, 4, 5, 6, 7};
    point arr[6];
    ref.x = 0;
    ref.y = 0;
    for (int i = 0; i < 6; i++)
    {
        arr[i].x = 7;
        arr[i].y = i;
    }
    qsort(arr, 6, sizeof(point), compare);
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}
// x1-x0  x2-y0
// y1-y0  y2-y0
