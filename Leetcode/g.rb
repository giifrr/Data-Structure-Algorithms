def two_out_of_three(nums1, nums2, nums3)
  temp = Array.new(101, 0)

  for value in nums1.uniq do
    temp[value] += 1
  end

  for value in nums2.uniq do
    temp[value] += 1
  end

  for value in nums3.uniq do
    temp[value] += 1
  end

  res = []

  for i in (0...101) do
    if temp[i] > 1
      res << i
    end
  end

  res
end

nums1 = [1,1,3,2]; nums2 = [2,3]; nums3 = [3]
puts two_out_of_three(nums1, nums2, nums3)
