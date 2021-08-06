/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:51:04 by aguerrer          #+#    #+#             */
/*   Updated: 2021/08/06 15:42:20 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	mutex_destroy(t_philo *ph)
{
	pthread_mutex_destroy(&ph->data->m_death);
	pthread_mutex_destroy(&ph->data->m_food);
	pthread_mutex_destroy(&ph->data->m_print);
	pthread_mutex_destroy(&ph->data->m_status);
}

void	ft_usleep(uint64_t time)
{
	uint64_t	timer;

	timer = ft_gettime();
	while ((ft_gettime() - timer) < time)
		usleep(100);
}

uint64_t	ft_gettime(void)
{
	struct timeval	time;

	if (gettimeofday(&time, NULL))
		return (0);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

void	ft_print(t_philo *ph, char *str)
{
	uint64_t	now;

	pthread_mutex_lock(&ph->data->m_print);
	now = ((ft_gettime() - ph->data->start));
	if (ph->data->status == ALIVE)
		printf("%llu %d %s\n", now, ph->id, str);
	pthread_mutex_unlock(&ph->data->m_print);
}
