CFLAGS  := -Wall -Wextra -Wno-unused-result -Werror -std=c11
LDFLAGS :=

ifdef DEBUG_ASAN
    DEBUG   := 1
    CFLAGS  += -fsanitize=address -fsanitize-address-use-after-scope
    LDFLAGS += -fsanitize=address
endif

ifdef DEBUG
    CFLAGS  += -O0 -g -fno-omit-frame-pointer -fno-optimize-sibling-calls
else
    CFLAGS  += -O2
endif

SUBMAKEFILES := ./_.mk
