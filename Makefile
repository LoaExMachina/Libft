# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/29 13:27:26 by spitte            #+#    #+#              #
#    Updated: 2026/11/02 13:56:41 by spitte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  ft_memchr.c ft_memcmp.c  ft_memcpy.c  ft_memmove.c  ft_memset.c  ft_strchr.c  ft_strlcat.c  ft_strlcpy.c  ft_strlen.c ft_strncmp.c  ft_strnstr.c  ft_strrchr.c ft_tolower.c ft_toupper.c  ft_calloc.c  ft_strdup.c ft_substr.c ft_strtrim.c 

OFILES = $(CFILES:.c=.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)



