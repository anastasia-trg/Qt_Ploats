def f(x)
  x * x * Math.sin(x)
end

File.open('input_file.txt', 'w') do |f|
  3.step(13, 0.1) do |x|
    f << "%.1f\t%.3f\t%.3f\n" % [x, f(x), f((x - 0.89) ** 1.21 - 2 * rand)]
  end
end
