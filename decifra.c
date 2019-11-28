/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decifra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:35:43 by esuguimo          #+#    #+#             */
/*   Updated: 2019/11/28 18:46:23 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	main()
{
	char word[30], aux[30];
	int key=1, i;
	scanf(" %s", word);

	while(key < 26)
	{
		i = 0;
		while(word[i] != '\0')
		{
			aux[i] = word[i] + key;
			if ((word[i] + key) > 122)
			{
				aux[i] -=26;
			}
			if((word[i] + key) < 97)
			{
				aux[i] += 26;
			}
			i++;
		}
		aux[i] = '\0';
		printf("key %d: %s ", key, aux);

		if(key%5 == 0)
		{
			printf("\n\n");
		}
		key++;
	}
	printf("\n");
	return 0;
}
