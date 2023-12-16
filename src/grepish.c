/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ????/??/?? ??:??:?? by jonsanch          #+#    #+#             */
/*   Updated: ????/??/?? ??:??:?? by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grepish.h"

int	main(int argc, char **argv)
{
	int		errorcount;

	errorcount = 0;
	if (argc == 3)
		errorcount += three_args(argc, argv);
	else if (argc == 2)
		errorcount += two_args(argc, argv);
	else
		printf("Error: Wrong number of arguments\n");
	return (0);
}