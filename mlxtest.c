/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlxtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:33:37 by hgabriel          #+#    #+#             */
/*   Updated: 2022/09/14 04:10:04 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_no_event(void *data)
{
	return (0);
}

int	handle_input(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
		mlx_destroy_window(data->mlxptr, data->winptr);
	
	printf("Keypress: %d\n", keysym);
	return (0);
}

int	handle_release(int keysym, t_data *data)
{
	printf("Keyrelease: %d,\n", keysym);
	return(0);
}

int	main(void)
{
	t_data data;

	data.mlxptr = mlx_init();
	if (data.mlxptr == NULL)
		return(0);
	data.winptr = mlx_new_window(data.mlxptr, 800, 600, "so_long");
	if (data.winptr == NULL)
	{
		free(data.winptr);
		return (0);
	}

//Hooks
	mlx_loop_hook(data.mlxptr, &handle_no_event, &data);
	mlx_hook(data.winptr, KeyPress, KeyPressMask, &handle_input, &data);
	mlx_hook(data.winptr, KeyRelease, KeyReleaseMask, &handle_release, &data);

	mlx_loop(data.mlxptr);
	
	//exit if there are no present windows
	mlx_destroy_display(data.mlxptr);
	free(data.mlxptr);
	
}