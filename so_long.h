/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgabriel <hgabriel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 04:17:24 by hgabriel          #+#    #+#             */
/*   Updated: 2022/09/13 06:02:20 by hgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>
#include <unistd.h>
#include <X11/keysym.h>

typedef struct s_data
{

    void    *mlxptr;
    void    *winptr;

} t_data;