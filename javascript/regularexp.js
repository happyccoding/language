var pattern = /a/
//var pattern = new RegExp('a');

console.log(pattern.exec('abcdef'));
console.log(pattern.exec('bcdef'));

console.log(pattern.test('abcdef'));
console.log(pattern.test('bcdefg'));

//String.match()
console.log('abcdef'.match(pattern)); // ["a"]
console.log('bcdefg'.match(pattern)); // null
//String.replace()
console.log('abcdef'.replace(pattern, 'A'));  // Abcdef

//i를 붙이면 대소문자를 구분하지 않는다.
var xi = /a/;
console.log("Abcde".match(xi)); // null
var oi = /a/i;
console.log("Abcde".match(oi)); // ["A"];

//g를 붙이면 검색된 모든 결과를 리턴한다.
var xg = /a/;
console.log("abcdea".match(xg));
var og = /a/g;
console.log("abcdea".match(og));

//본문 중 url을 html 태그로 교체
var urlPattern = /\b(?:https?):\/\/[a-z0-9-+&@#\/%?=~_|!:,.;]*/gim;
var content = '생활코딩 : http://opentutorials.org/course/1 입니다. 네이버 : http://naver.com 입니다. ';
var result = content.replace(urlPattern, function(url){
    return '<a href="'+url+'">'+url+'</a>';
    //return url;
});
console.log(result);

//괄호안의 패턴은 마치 변수처럼 재사용할 수 있다. 이 때 기호 $를 사용하는데 
//아래 코드는 coding과 everybody의 순서를 역전시킨다
var pattern = /(\w+)\s(\w+)\s(\w+)/;
var str = "coding everybody good";
var result = str.replace(pattern, "$3, $2, $1");
console.log(result);

//http://zvon.org/comp/r/tut-Regexp.html

//http://www.regexper.com/
//http://www.regexr.com/