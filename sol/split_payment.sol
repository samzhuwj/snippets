pragma solidity ^0.4.18;

import "./safe_math.sol";


contract SplitPayment {
    using SafeMath for uint256;

    uint256 public totalShares = 0;
    uint256 public totalReleased = 0;

    mapping(address => uint256) public shares;
    mapping(address => uint256) public released;
    address[] public payees;

    function SplitPayment(address[] _payees, uint256[] _shares) public payable {
        require(_payees.length == _shares.length);

        for (uint256 i = 0; i < _payees.length; i++) {
            addPayee(_payees[i], _shares[i]);
    }
  }

    function () public payable {}

    function claim() public {
        address payee = msg.sender;

        require(shares[payee] > 0);

        uint256 totalReceived = this.balance.add(totalReleased);
        uint256 payment = totalReceived.mul(shares[payee]).div(totalShares).sub(released[payee]);

        require(payment != 0);
        require(this.balance >= payment);

        released[payee] = released[payee].add(payment);
        totalReleased = totalReleased.add(payment);

        payee.transfer(payment);
    }

    function addPayee(address _payee, uint256 _shares) internal {
        require(_payee != address(0));
        require(_shares > 0);
        require(shares[_payee] == 0);

        payees.push(_payee);
        shares[_payee] = _shares;
        totalShares = totalShares.add(_shares);
    }
}
