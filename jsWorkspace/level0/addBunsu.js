/*
프로그래머스 0레벨 문제
문제 설명
첫 번째 분수의 분자와 분모를 뜻하는 denum1, num1, 두 번째 분수의 분자와 분모를 뜻하는 denum2, num2가 매개변수로 
주어집니다. 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

제한사항
0 <denum1, num1, denum2, num2 < 1,000

*/

function solution(denum1, num1, denum2, num2) {
	var answer = [];

	let lcm = 1;

	while (1) {
		if (lcm % num1 === 0 && lcm % num2 === 0) {
			break;
		}
		lcm++;
	}
	//최소 공배수를 구한 다음에 분자의 합을 구하면 답이 나온다고 생각했는데.. 왜 제출했는데 실패가 뜰까?
	const denum = denum1 * (lcm / num1) + denum2 * (lcm / num2);
	answer = [denum, lcm];

	console.log(answer);
	return answer;
}

solution(9, 2, 1, 3);

//실패!.. 내일 다시 풀어보자!
