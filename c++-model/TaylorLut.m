

clear

# number of segments
N = 128;

# segment indices
n = 0:N-1;

# left boundary of each segment
x = 2*(n/N);

# function
# f(x) = sin(2x - pi/4)

# Taylor coefficients
a = sin((2*x)-(pi/4));       # f(x)
b = 2*cos((2*x)-(pi/4));     # f'(x)
c = -2*sin((2*x)-(pi/4));    # f''(x)/2

# open output file
fid = fopen("CoeffTaylor.hpp","w");

fprintf(fid,"const double CoeffTable [128][4] =\n{\n");
fprintf(fid,"//      k                                  a                                  b                                  c\n");

for k = 0:N-1

    if k < N-1
        fprintf(fid,"    { %3d, % .28f, % .28f, % .28f },\n", k, a(k+1), b(k+1), c(k+1));
    else
        fprintf(fid,"    { %3d, % .28f, % .28f, % .28f }\n", k, a(k+1), b(k+1), c(k+1));
    end

end

fprintf(fid,"};\n");

fclose(fid);
