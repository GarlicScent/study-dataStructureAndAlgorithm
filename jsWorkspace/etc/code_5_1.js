//개구리 문제를 js로 풀기.
let h = [2, 9, 4, 5, 1, 6, 10];
const INF = Infinity;
let dp = h.map((x) => INF);

dp[0] = 0;
console.log(dp, h);

// for (let i = 1; i < h.length; i++) {
// 	if (i == 1) {
// 		dp[i] = Math.abs(h[i] - h[i - 1]);
// 	} else {
// 		dp[i] = Math.min(
// 			dp[i - 1] + Math.abs(h[i] - h[i - 1]),
// 			dp[i - 2] + Math.abs(h[i] - h[i - 2])
// 		);
// 	}
// }

dp.forEach((val, i, arr) => {
	if (i === 0) {
	} else if (i === 1) {
		arr[i] = Math.abs(h[i] - h[i - 1]);
	} else {
		arr[i] = Math.min(
			arr[i - 1] + Math.abs(h[i] - h[i - 1]),
			arr[i - 2] + Math.abs(h[i] - h[i - 2])
		);
	}
});

console.log(`dp[${h.length - 1}]: `, dp[h.length - 1]);
console.log(dp);
