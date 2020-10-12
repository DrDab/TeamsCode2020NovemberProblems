for f in $(ls io/*.in); do echo computing $f; ./a.out < $f > $(echo $f | sed 's/in$/out/'); done

