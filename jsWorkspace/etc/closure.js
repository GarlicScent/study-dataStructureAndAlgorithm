//모던 자바스크립트 클로저 예제
function makeCounter(predicate) {
	let counter = 0;

	return function () {
		counter = predicate(counter);
		return counter;
	};
}

function increase(n) {
	return ++n;
}
function decrease(n) {
	return --n;
}

//함수로 함수를 생성
//makeCounter 함수는 보조 함수를 인수로 전달받아 함수를 반환한다.
const increaser = makeCounter(increase);
console.log(increaser());
console.log(increaser());

//increaser 함수와는 별개의 독립된 렉시컬 환경을 갖기 때문에 카운터 상태가 연동하지 않는다.
const decreaser = makeCounter(decrease);
console.log(decreaser());
console.log(decreaser());
