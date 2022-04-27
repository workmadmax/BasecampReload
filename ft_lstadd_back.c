/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:48 by mdouglas          #+#    #+#             */
/*   Updated: 2022/04/25 11:25:16 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct ft_lstnew
{
    void            *content;
    struct s_list   *next;
    
}t_list;


void    ft_lstadd_back(t_list **list, t_list *new)
{
    t_list *tail;
    
    if (!list || !new)
        return ;
    if (!(list))
    {
        *list = new;
        return ;
    }
    tail = ft_lstlast(*list);
    tail->next = new;
}
