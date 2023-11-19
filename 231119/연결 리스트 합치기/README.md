# [연결 리스트 합치기 ](https://www.codetree.ai/missions/6/problems/linked-list-merge)

|유형|문제 경험치|난이도|
|---|---|---|
|[Novice High / 배열, 연결 리스트 / 단일 연결 리스트](https://www.codetree.ai/missions?missionId=6)|10xp|![어려움][hard]|

----
## 문제 이해:
정렬된 두 연결리스트를 합쳐서 다시 정렬된 연결리스트를 만든다.
- 잘못 생각했던 부분: 모든 원소들의 정렬을 고려하지 않고, 두 연결리스트의 tail과 head만 비교해서 연결하면 될 것이라고 생각했다.
- 모든 원소들이 정렬되어야 하므로 노드를 head에서부터 한 개씩 꺼내서 비교해야한다.
    - head에서부터 비교하는 이유는, SLL1, SLL2의 가장 작은 원소는 각각의 head에 위치하고 있기 때문이다.
    - 그 다음으로 작은 원소는 head.next에 있는 원소이므로 node1 = node1.next (또는 node2 = node2.next)
 
## 정답 코드 따라쳐보기:
<pre>
  <code>
    function solution(SLL1, SLL2)
      set result = empty SLL
      node1 = SLL1.head
      node2 = SLL2.head
      while node1 != null or node2 != null
        if node2 == null or (node1 != null and node1.data < node2.data)
          result.insert_end(node1.data)
          node1 = node1.next
        else 
          result.insert_end(node2.data)
          node2 = node2.next
      return result
  </code>
</pre>



[b5]: https://img.shields.io/badge/Bronze_5-%235D3E31.svg
[b4]: https://img.shields.io/badge/Bronze_4-%235D3E31.svg
[b3]: https://img.shields.io/badge/Bronze_3-%235D3E31.svg
[b2]: https://img.shields.io/badge/Bronze_2-%235D3E31.svg
[b1]: https://img.shields.io/badge/Bronze_1-%235D3E31.svg
[s5]: https://img.shields.io/badge/Silver_5-%23394960.svg
[s4]: https://img.shields.io/badge/Silver_4-%23394960.svg
[s3]: https://img.shields.io/badge/Silver_3-%23394960.svg
[s2]: https://img.shields.io/badge/Silver_2-%23394960.svg
[s1]: https://img.shields.io/badge/Silver_1-%23394960.svg
[g5]: https://img.shields.io/badge/Gold_5-%23FFC433.svg
[g4]: https://img.shields.io/badge/Gold_4-%23FFC433.svg
[g3]: https://img.shields.io/badge/Gold_3-%23FFC433.svg
[g2]: https://img.shields.io/badge/Gold_2-%23FFC433.svg
[g1]: https://img.shields.io/badge/Gold_1-%23FFC433.svg
[p5]: https://img.shields.io/badge/Platinum_5-%2376DDD8.svg
[p4]: https://img.shields.io/badge/Platinum_4-%2376DDD8.svg
[p3]: https://img.shields.io/badge/Platinum_3-%2376DDD8.svg
[p2]: https://img.shields.io/badge/Platinum_2-%2376DDD8.svg
[p1]: https://img.shields.io/badge/Platinum_1-%2376DDD8.svg
[passed]: https://img.shields.io/badge/Passed-%23009D27.svg
[failed]: https://img.shields.io/badge/Failed-%23D24D57.svg
[easy]: https://img.shields.io/badge/쉬움-%235cb85c.svg?for-the-badge
[medium]: https://img.shields.io/badge/보통-%23FFC433.svg?for-the-badge
[hard]: https://img.shields.io/badge/어려움-%23D24D57.svg?for-the-badge
