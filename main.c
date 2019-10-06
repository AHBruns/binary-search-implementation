#include <stdio.h>

int binarySearch (int * searchSpace, int size, int target) {
    int startIndexer = 0;
    int endIndexer = size - 1;
    int middleIndexer = size / 2;
    int start, middle, end;
    while (1) {

        start = searchSpace[startIndexer];
        middle = searchSpace[middleIndexer];
        end = searchSpace[endIndexer];

        printf("%d %d %d\n", start, middle, end);
        if (start == target) return startIndexer;
        else if (middle == target) return middleIndexer;
        else if (end == target) return endIndexer;
        else if ((endIndexer - startIndexer) < 2) return -1;

        if (middle > target) {
            endIndexer = middleIndexer - 1;
        } else {
            startIndexer = middleIndexer + 1;
        }

        middleIndexer = ((endIndexer - startIndexer) / 2) + startIndexer;

    }


}

int main() {
    int possibilities [12] = { 0, 1, 5, 8, 12, 34, 56, 89, 123, 456, 879, 1234567 };
    int index = binarySearch(possibilities, 12, 12);
    printf("%d\n", index);
    return 0;
}