//부분합 문제. 아래는 처음에 알지 못했을 때 이렇게 진행했다.
let arr = [1, 2, 5, 1, 0];
//여기서 합이 7인 경우를 찾기.

for (let i = 0; i < arr.length; i++) {
	for (let j = i + 1; j < arr.length; j++) {
		if (arr[i] + arr[j] === 7) {
			console.log("2중 포문에서");
			console.log(i, j, arr[i], arr[j]);
			count++;
		}
		for (let k = j + 1; k < arr.length; k++) {
			if (arr[i] + arr[j] + arr[k] === 7) {
				console.log("3중 포문에서");
				console.log(i, j, k, arr[i], arr[j], arr[k]);
				count++;
			}
			for (let h = k + 1; h < arr.length; h++) {
				if (arr[i] + arr[j] + arr[k] + arr[h] === 7) {
					console.log("4중 포문에서");
					console.log(i, j, k, h, arr[i], arr[j], arr[k], arr[h]);
					count++;
				}
			}
		}
	}
}

/*
let count = 0;
let sum = 0;
for (let i = 0; i < arr.length; i++) {
	sum = arr[i];
	for (let j = i + 1; j < arr.length; j++) {
		sum += arr[j];
		if (sum === 7) count++;
	}
}
*/

console.log(count);
