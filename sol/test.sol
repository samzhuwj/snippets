pragma dolidity ^0.4.0;

contract Test {
    function Test() public { b = 0x12345678901234567890123456789012;}
    
    event Event(uint, indexed a, bytes32 b);
    event Event2(uint, indexed a, bytes32 b);
    
    function foo(uint a) public { Event(a, b);}
    
    bytes32 b;
}
