FILE="test"
vg="valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes"

gcc -o $FILE $FILE.c && ./$FILE
