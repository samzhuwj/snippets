pragma solidity ^0.4.20;

contract SimpleStorage {
    unit storedData;
  
    function set(unit x) public {
        storedData = x;
  }
  
    function get() public constant returns (unit) {
        return storedData;
  }
}
