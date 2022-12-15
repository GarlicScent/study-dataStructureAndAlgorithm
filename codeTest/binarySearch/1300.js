/*
백준 1300 이진 탐색 k번째 수
문제: 세준이는 크기가 N×N인 배열 A를 만들었다. 배열에 들어있는 수 A[i][j] = i×j 이다. 이 수를 일차원 배열 B에 넣으면 B의 크기는 N×N이 된다. 
B를 오름차순 정렬했을 때, B[k]를 구해보자. 배열 A와 B의 인덱스는 1부터 시작한다.

입력: 첫째 줄에 배열의 크기 N이 주어진다. N은 10^5보다 작거나 같은 자연수이다. 둘째 줄에 k가 주어진다. k는 min(10^9, N^2)보다 작거나 같은 자연수이다.

출력: B[k]를 출력한다.

https://www.acmicpc.net/problem/1300
*/

let N = 3;
let k = 3;

const A = Array.from(Array(3), () => Array(3).fill(null));
for (let i = 0; i < N; i++) {
	for (let j = 0; j < N; j++) {
		A[i][j] = i * j;
	}
}

console.log(A);
let B = [];

for (let i = 1; i < N; i++) {
	for (let j = 1; j < N; j++) {
		B.push(A[i][j]);
	}
}
console.log(B[k]);
