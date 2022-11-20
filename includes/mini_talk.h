/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_talk.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:57:44 by wchen             #+#    #+#             */
/*   Updated: 2022/11/20 20:04:15 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_TALK_H
# define MINI_TALK_H

# include "../libft/libft.h"
# include "ft_printf.h"
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

extern volatile sig_atomic_t	g_byte;

void	msg_exit(char *msg, int state);

#endif
