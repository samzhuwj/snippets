pragma solidity ^0.4.14;

contract ArrayTest {
    a[2] a;
    
    function teset() returns (uint, uint) {
        a[0] = 1;
        a[1] = 2;
        
        return (a[0], a[1]);
    }
}
