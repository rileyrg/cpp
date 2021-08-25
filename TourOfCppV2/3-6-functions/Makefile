all: structured-binding

include ../../Makefile

structured-binding: structured-binding.cpp
	$(CC) $@.cpp -o $@

run:	structured-binding
	alacritty -e zsh -c './structured-binding;zsh'
