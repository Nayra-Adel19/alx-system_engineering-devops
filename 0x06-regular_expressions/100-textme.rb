#!/usr/bin/env ruby
# RUBY
puts ARGV[0].scan(/(?<=from:|to:|flags:)[^\]]*/).join(",")
