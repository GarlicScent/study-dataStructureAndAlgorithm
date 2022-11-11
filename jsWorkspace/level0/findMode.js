function solution(array) {
	var answer = 0;
	let mode,
		flag = false,
		freq = 0,
		count = 0;

	for (let i = 0; i < array.length; i++) {
		for (let j = i + 1; j < array.length; j++) {
			if (array[i] === array[j]) freq += 1;
		}
		if (freq > count) {
			mode = array[i];
			count = freq;
		} else if (freq === count) {
			flag = true;
		}
	}
	console.log(mode);
	console.log('"""');
	if (flag) {
		answer = -1;
	}
	answer = mode;

	return answer;
}
let arr = [1, 2, 2, 3, 3, 4];
solution(arr);
// arr = [1, 1, 2, 2];
// solution(arr);
