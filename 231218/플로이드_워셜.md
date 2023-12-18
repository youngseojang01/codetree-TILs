다익스트라 vs 플로이드 워셜
------
(V: 정점 개수, E: 간선 개수)
- 다익스트라: 한 지점에서 다른 지점으로 가는 최단거리
  - O(|E| log|V|) : 일반적으로 더 효율적(e, v 개수가 같을 때 더 나음)
- 플로이드 워셜: 모든 지점에 대해 최단거리(간선 개수가 매우 클 때)
  - O(|V|^3) : 예를 들어 간선의 개수가 정점의 개수보다 10억배 클 때 유리
 
플로이드 워셜 알고리즘
-----
![image](https://github.com/youngseojang01/codetree-TILs/assets/83485151/02031ad6-6f21-45ee-b59f-ba17b31df4ee)

![image](https://github.com/youngseojang01/codetree-TILs/assets/83485151/922ef74b-08c0-4c6f-b7a6-8ce09a783a3f)
