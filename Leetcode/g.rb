def busy_student(start_time, end_time, query_time)
  n = start_time.size
  res = 0

  for i in (0...n)
    range_time = (start_time[i] - end_time[i]).abs
    if range_time >= query_time || start_time[i] == query_time || end_time[i] == query_time
      res += 1
    end
  end

  res
end


start_time = [1,2,3]
end_time =  [3,2,7]
query_time = 4

p busy_student(start_time, end_time, query_time)
