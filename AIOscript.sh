#!/bin/bash
for file in "$@"
do
	betty $file \
	&& echo -e \
	&& gcc -Wall -Werror -pedantic -Wextra -std=gnu89 $file \
	&& echo -e \
	&& ./a.out \
	&& echo -e \
	&& git add $file \
	&& echo -e \
	&& git commit -m "$file" \
	&& echo -e \
	&& git push
done
