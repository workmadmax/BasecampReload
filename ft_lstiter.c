/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:30:43 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 11:31:47 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct ft_lstnew
{
    void            *content;
    struct s_list   *next;
    
}t_list;

void    ft_lstiter(t_list *list, void (*f)(void *))
{
    while (list)
    {
        f(list->content);
        list = list->next;
    }
}
