exec_bin:
	./build/app/exec

exec_test:
	./build/tests/unit_tests

prepare:
	mkdir build
	./make_helper.sh

clean:
	rm -rf build
