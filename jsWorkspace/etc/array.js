//부분합 문제.
let arr = [3, 2, 6, 5];
//여기서 합이 7인 경우를 찾기.
// let found = [];
let count = 0;

const funcSum = (i, target, array) => {
	console.log(`${i}개, w=${target}.`);
	if (i === 0) {
		if (target === 0) {
			count++;
			console.log("count:", count);
			return true;
		} else return false;
	}

	if (funcSum(i - 1, target, array)) {
		console.log(`if문이다. array[${i - 1}]을 사용하지 않음.`);
		return true;
	}

	if (funcSum(i - 1, target - array[i - 1], array)) {
		console.log(`if문이다. array[${i - 1}]을 사용함.`);
		return true;
	}

	return false;
};
console.log(funcSum(4, 14, arr));
console.log("next");
funcSum(5, 7, [1, 2, 5, 1, 0]);
console.log("outside count:", count);
