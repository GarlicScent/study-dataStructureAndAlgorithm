//부분합 문제.
let arr = [3, 2, 6, 5];
//여기서 합이 7인 경우를 찾기.
// let found = [];
let count = 0;

const funcSum = (i, w, array) => {
	console.log(`${i}개, w=${w}.`);
	if (i === 0) {
		if (w === 0) {
			count++;
			console.log("count:", count);
			return true;
		} else return false;
	}
	//array[i-1]을 선택하지 않았을 때.
	if (funcSum(i - 1, w, array)) {
		console.log(`if문이다. array[${i - 1}]을 사용하지 않음.`);
		return true;
	}
	//arrya[i-1]을 선택했을 때
	if (funcSum(i - 1, w - array[i - 1], array)) {
		console.log(`if문이다. array[${i - 1}]을 사용함.`);
		return true;
	}

	return false;
};
// console.log(funcSum(4, 14, arr));
console.log("next");
funcSum(5, 7, [1, 2, 5, 1, 0]);
console.log("outside count:", count);
//음... 다 제대로 찾은게 맞나?? 이것을 한번 더 확인하고난 다음에 메모이제이션을 추가하도록 하자.
