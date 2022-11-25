//부분합 문제. 아래는 처음에 알지 못했을 때 이렇게 진행했다.
let arr = [1, 2, 5, 1, 0];
//여기서 합이 7인 경우를 찾기.
let found = [];

const funcSum = (i, target, array) => {
	if (i === 0) {
		if (target === 0) return true;
		else return false;
	}

	if (funcSum(i - 1, target, array)) return true;

	if (funcSum(i - 1, target - array[i - 1], array)) return true;

	return false;
};

console.log(funcSum(5, 7, arr));
