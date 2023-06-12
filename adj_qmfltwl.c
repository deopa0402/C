#include <stdio.h>

int n;
int rear, front;
int map[30][30];
int queue[30];
int visit[30];

void BFS(int v) {
    int i;
    visit[v] = 1;
    printf("%d에서 시작\n", v);
    queue[rear++] = v;

    while (front < rear) {
        v = queue[front++];

        for (i = 1; i <= n; i++) {
            if (map[v][i] == 1 && !visit[i]) {
                visit[i] = 1;
                printf("%d에서 %d로 이동\n", v, i);
                queue[rear++] = i;
            }
        }
    }
}

int countEdges() {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (map[i][j] == 1) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int start;
    int v1, v2;

    printf("정점의 총 개수와 시작 정점을 입력하세요.: ");
    scanf("%d%d", &n, &start);

    while (1) {
        printf("연결할 두 정점을 입력하세요.(예 3 4): ");
        scanf("%d%d", &v1, &v2);

        if (v1 == -1 && v2 == -1)
            break;

        map[v1][v2] = map[v2][v1] = 1;
    }

    BFS(start);

    int numEdges = countEdges();
    printf("간선의 개수: %d\n", numEdges);

    return 0;
}
