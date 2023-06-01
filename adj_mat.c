#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 50

typedef struct GraphType {
    int n;                       // 정점의 개수
    int adj_mat[MAX_VERTICES][MAX_VERTICES]; // 인접 행렬
} GraphType;

// 그래프 초기화
void init(GraphType* g)
{
    int r, c;
    g->n = 0;

    for (r = 0; r < MAX_VERTICES; r++)
        for (c = 0; c < MAX_VERTICES; c++)
            g->adj_mat[r][c] = 0;
}

// 정점 삽입 연산
void insert_Vertex(GraphType* g, int v)
{
    if (((g->n) +1) > MAX_VERTICES) {
        fprintf(stderr, "그래프: 정점의 개수 초과");
        return;
    }
    g->n++; // 정점 개수 증가
}

// 간선 삽입 연산
void insert_Edge(GraphType* g, int start, int end)
{
    if (start >= g->n || end >= g->n) {
        fprintf(stderr,"그래프: 정점 번호 오류");
        return;
    }
    g->adj_mat[start][end] = 1; // 간선 삽입 (무방향 그래프의 경우 반대 방향도 삽입)
    g->adj_mat[end][start] = 1;
}

// 인접 행렬 출력 함수
void print_adj_mat(GraphType* g)
{
    for (int i = 0; i < g->n; i++) {
        for (int j = 0; j < g->n; j++) {
            printf("%d ", g->adj_mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    GraphType *g;
    g = (GraphType *)malloc(sizeof(GraphType));
    init(g);
    for(int i = 0;i<4; i++)

    insert_Vertex(g, i);
    insert_Edge(g, 0, 1);
    insert_Edge(g, 0, 2);
    insert_Edge(g, 0, 3);
    insert_Edge(g, 1, 2);
    insert_Edge(g, 2, 3);
    print_adj_mat(g);

    free(g);
}
