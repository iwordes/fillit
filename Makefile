NAME     := fillit
VERSION  := 1.1.0

INCDIR   := ./include
LIBDIR   := ./lib
OBJDIR   := ./build
OUTDIR   := .
SRCDIR   := ./src

COMPILER := gcc
CFLAGS   := -Wall -Wextra -Werror -I $(INCDIR) -L $(LIBDIR) -l ft

CMP      := $(COMPILER) $(CFLAGS)

INPUTS   := align_tetra create_tetra done fail fillit init_tetras is_valid_buffer main overfill place
OUTPUTS  := fillit

SRC      := $(addsuffix .c,$(addprefix $(SRCDIR)/,$(INPUTS)))
OUT      := $(addprefix $(OUTDIR)/,$(OUTPUTS))

.PHONY: all
all: $(OUT)

.PHONY: clean
clean:
	@echo No object files were available to be cleaned.

.PHONY: fclean
fclean: clean
	rm -f $(OUT)
	rm -f $(LIBDIR)/libft.a

.PHONY: re
re: fclean all

$(NAME): $(SRC) $(LIBDIR)/libft.a
	$(CMP) $(SRC) -o $(NAME)

$(LIBDIR)/libft.a:
	make -C $(LIBDIR)/libft re
	cp $(LIBDIR)/libft/libft.a $(LIBDIR)/
