# Last updated: 3/26/2026, 1:25:27 PM
class Solution:
  def replaceNonCoprimes(self, nums: list[int]) -> list[int]:
    ans = []

    for num in nums:
      while ans and math.gcd(ans[-1], num) > 1:
        num = math.lcm(ans.pop(), num)
      ans.append(num)

    return ans