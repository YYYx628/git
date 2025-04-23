//#include <iostream>
//#include <vector>
//#include <climits>
//#include"global.h"
//using namespace std;
//int main() {
//    int n, m, p1, p2, val;
//    cin >> n >> m;
//
//    vector<vector<int>> grid(n + 1, vector<int>(n + 1, INT_MAX));
//    for (int i = 0; i < m; i++) {
//        cin >> p1 >> p2 >> val;
//        grid[p1][p2] = val; 
//    }
//
//    int start = 1;
//    int end = n;
//
//    // �洢��Դ�㵽ÿ���ڵ����̾���
//    std::vector<int> minDist(n + 1, INT_MAX);
//
//    // ��¼�����Ƿ񱻷��ʹ�
//    std::vector<bool> visited(n + 1, false);
//
//    minDist[start] = 0;  // ��ʼ�㵽����ľ���Ϊ0
//
//    for (int i = 1; i <= n; i++) { // �������нڵ�
//
//        int minVal = INT_MAX;
//        int cur = 1;
//
//        // 1��ѡ����Դ�������δ���ʹ��Ľڵ�
//        for (int v = 1; v <= n; ++v) {
//            if (!visited[v] && minDist[v] < minVal) {
//                minVal = minDist[v];
//                cur = v;
//            }
//        }
//
//        visited[cur] = true;  // 2����Ǹýڵ��ѱ�����
//
//        // 3�������������·Ƿ��ʽڵ㵽Դ��ľ��루������minDist���飩
//        for (int v = 1; v <= n; v++) {
//            if (!visited[v] && grid[cur][v] != INT_MAX && minDist[cur] + grid[cur][v] < minDist[v]) {
//                minDist[v] = minDist[cur] + grid[cur][v];
//            }
//        }
//
//    }
//
//    if (minDist[end] == INT_MAX) cout << -1 << endl; // ���ܵ����յ�
//    else cout << minDist[end] << endl; // �����յ����·��
//
//}