// add two numbers without using addition operator
// half adder logic
int add(int a, int b)
{
  if (!b) return a;

  int sum = a ^ b;
  int carry = (a & b) << 1;
  return add(sum, carry);
}
