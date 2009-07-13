# Makefile.						#
# 							#
#			Springbok			#
#			---------			#
#		fast and flexible web server		#
#							#
#							#
#	By Schilis Vivien & Flandre Guillaume		#
#							#
 ######################################################



# springbok constants
SPBOK_VERSION=0.1
SPBOK_NAME=Springbok
SPBOK_BIN_NAME=spbok
SPBOK_FILE_CONF=./doc/spbok.conf

# GCC directives
CC=gcc

SRC=./source
INC=./include

# external libs
LIBS=

# preprocessor directives
DEFINES= \
		-D_SPBOK_DEBUG 					\
		-D_SPBOK_VERSION=\"$(SPBOK_VERSION)\" 		\
		-D_SPBOK_NAME=\"$(SPBOK_NAME)\" 		\
		-D_SPBOK_LINUX_COMPLIANT


FLAGS= $(DEFINES) -O2 -I$(INC) 



# objects
SPBOK_OBJ= \
		spbok_opt.o			\
		spbok_log.o			\
		spbok_config.o			\
		spbok_server.o			\
	

# main target
all: spbok
	@echo "Complation is successful"


# generic rules
%.o : $(SRC)/%.c
	@echo "[CC] $<"
	@$(CC) $(FLAGS) -c $<


# spbok target
spbok: $(SPBOK_OBJ)
	@echo "[LK] $(SPBOK_BIN_NAME)"
	@$(CC) -o $(SPBOK_BIN_NAME) $^ $(LIBS)

# install request
install:
	mkdir /var/www/spbok
	cp $(SPBOK_BIN_NAME) /usr/bin/
	cp $(SPBOK_FILE_CONF) /etc/


# clean request
clean:
	rm -rf *~ *.o  $(SRC)/*~ $(INC)/*~ $(SPBOK_BIN_NAME)
	@echo done.
