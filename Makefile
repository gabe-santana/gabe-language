exec = a.out
sources = ${wildcard src/*.c}
flags = -g -Wall -lm -ldl -fPIC -rdynamic

${exec}: ${objects}
	gcc ${objects} ${flags} $< -o $@

install:
	make
	make liba.a
	mkdir -p /usr/local/include/a
	cp -r ./src/include/* /usr/local/include/a/.
	cp ./liba.a /usr/local/lib/.
	cp ./a.out /usr/local/bin/a

clean:
	-rm *.out
	-rm *.o
	-rm *.a
	-rm src/*.0

lint: 
	clang-tidy src/*.c src/include*.h
