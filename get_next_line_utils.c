/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <adzinabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:23:22 by adzinabi          #+#    #+#             */
/*   Updated: 2023/07/04 14:23:22 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;

    if(str)
    {
        while(str[i])
            i++;
        return(i);
    }
    return(0);
}