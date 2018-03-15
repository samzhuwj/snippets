pragma solidity ^0.4.19;
pragma experimental ABIEncoderV2;

contract Test {
    struct S { uint a; uint[] b; t[] c; }
    struct T { uint x; uint y;}
    function f(S s, T t, uint a) public {}
    function g() public returns (S s, T t, uint a) {}
}
