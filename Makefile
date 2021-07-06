exec = a.out
sources = ${wildcard src/*.c}
flags = -g -Wall -lm -ldl -fPIC -rdynamic

${exec}: ${objects}
	gcc ${objects} ${flags} $< -o $@

clean:
	-rm *.out
	-rm *.o
	-rm *.a
	-rm src/*.0

lint: 
	clang-tidy src/*.c src/include*.h
