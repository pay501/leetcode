def longest_common_prefix(strs)
    return '' if strs.empty?
    prefix = strs[0]
    strs.each do |str|
        until str.start_with?(prefix)
            prefix = prefix[0...-1]
        end
    end
    prefix
end

puts longest_common_prefix(%w[flower flow flight])
puts longest_common_prefix(%w[dog racecar car])
