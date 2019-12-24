#include <stdio.h>
#define MAX 2100000
int adj[1010][1010], dist[1010], chk[1010];

int main(void) {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			scanf("%d", &adj[i][j]);
		}
	}

	for (int i = 0; i < num; i++) {
		dist[i] = MAX;
	}

	dist[0] = 0;

	for (int i = 0; i < num; i++) {
		int min = MAX, node;

		for (int j = 0; j < num; j++) {
			if (min > dist[j] && !chk[j]) {
				min = dist[j];
				node = j;
			}
		}

		chk[node] = 1;

		for (int j = 1; j < num; j++) {
			if (dist[j] > dist[node] + adj[node][j])
				dist[j] = dist[node] + adj[node][j];
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", dist[i]);
	}

	return 0;
}