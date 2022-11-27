let h = [2, 9, 4, 5, 1, 6, 10];
let dp = h.map((x) => -1);
let N = h.length;
dp[0] = 0;
console.log(dp, h);

for (let i = 1; i < N; i++) {
	if (i == 1) {
		dp[i] = Math.abs(h[i] - h[i - 1]);
		console.log(Math.abs(h[i] - h[i - 1]));
	} else {
		dp[i] = Math.min(
			Math.abs(dp[i - 1] + h[i] - h[i - 1]),
			Math.abs(dp[i - 2] + h[i] - h[i - 2])
		);
	}
}
console.log(`dp[${N - 1}]: `, dp[N - 1]);
console.log(dp);
