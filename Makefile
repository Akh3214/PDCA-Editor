PROGRAM =	pdca-editor
OBJS	=	pdca-editor.o
SRCS	=	$(OBJS.%.o=%.c)
CC	=	gcc
CFLAGS	=	-Wextra -Wall -g
LDFLAGS	=	-I./ -L./
LDLIBS	=	-lakh

$(PROGRAM):$(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROGRAM) $(OBJS) $(LDLIBS)
