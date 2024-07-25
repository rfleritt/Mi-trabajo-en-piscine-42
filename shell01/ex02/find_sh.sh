find . -name '*.sh' -type f -exec sh -c 'basename --suffix=.sh {}' \;
