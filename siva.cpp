#include <stdio.h>
void insertionSort(long int *p,long int n) {
int i, j;
long int key;
for (i = 1; i < n; i++) {
key = p[i];
j = i - 1;
while (j >= 0 && p[j] > key) {
p[j + 1] = p[j];
j--;
}
p[j + 1] = key;
}
}

void organizingContainers(int n, int container[100][100]) {
int i, j;
long int sum[100] = {0};
long int row[100] = {0};
for(i=0;i<n;i++) {
    for (j = 0; j < n; j++) {
        sum[j] += container[i][j];
        row[i] += container[i][j];
    }
}

insertionSort(row, n);
insertionSort(sum, n);

for (i = 0; i < n; i++) {
    if (sum[i] != row[i]) {
        printf("Impossible\n");
        return;
    }
}

printf("Possible\n");
}

int main() {
int q;
scanf("%d", &q);
while(q--) {
    int n;
    int container[100][100];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &container[i][j]);
        }
    }

    organizingContainers(n, container);
}

return 0;
}
