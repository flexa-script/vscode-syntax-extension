/**
 * Sample test file
 */

namespace namespace_set_test;

using using_test;

as namespace as_namespace_test;

struct StructTest {
  var struct_var: string;
  var second_var: int;
};

fun function_test(a: bool, b: int, c: float = 1f, x: char = '\0', ...y: string): any {
  if (b == int(c) or 1 != 10 and true) {
    return true;
  } else if (a == false) {
    return "is false";
  } else {
    return x + y;
  }
}

function_test(ref true, unref 5);

for (var i = 0; i < 10; i++) {
  println("current index: ", i);
}

try {
  len("len");
} catch (...) { // catch erros can be ignored
  print("it will never catch");
}

try {
  throw "error!";
} catch (var [error]) {
  println("if you throw it will catch: " + error);
}

var arr[10]: int = {0,1,2,3,4,5,6,7,8,9};

foreach (var v in arr) {
  println("we can loop arrays: ", v);
}

var str: StructTest = StructTest{struct_var="string", second_var=9};

foreach (var [key, value] in str) { // we can loop struct key-values
  println(key, ':', value);
}

foreach (var c in "Hello CP!") { // and even strings
  print(c);
}

var n = {
  1234567890,
  0b0,
  0b1,
  0b101,
  0o0,
  0o7,
  0d0,
  0d999,
  0x0,
  0xaDF99,
  .1234567890,
  0.1234567890,
  1234567890f,
  1234567890F,
  .1234567890f,
  .1234567890F,
  .1234567890e0,
  .1234567890e1,
  .1234567890e+1,
  .1234567890e-1,
  0.1234567890e0,
  0.1234567890e1,
  0.1234567890e+1,
  0.1234567890e-1,
};

switch (0) {
  case 0:
    break;
  case 1:
  case 2:
    break;
  default:
}

var ms = `
  This is a multiline string that accepts expressions.
    - expression: ${10+5};
    - variable: ${n};
    - etc.
`;
