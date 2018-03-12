pragma solidity ^0.4.14;

contract ArrayTest {
    a[] a;
    
    function teset() returns (uint, uint) {
        a.push(1);
        a.push(2);
        
        a[1] = 3;
        
        return (a[0], a[1]);
    }
}
