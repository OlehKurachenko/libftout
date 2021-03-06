/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffered_fd_reader_read_char.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 12:51:05 by okurache          #+#    #+#             */
/*   Updated: 2018/06/12 12:51:05 by okurache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/buffered_fd_reader.h"

char	buffered_fd_reader_read_char(t_buffered_fd_reader *const self)
{
	self->exception = false;
	if (!self->vt->is_readable(self))
	{
		self->exception = true;
		return (0);
	}
	return (self->buffer[self->buffer_i++]);
}
