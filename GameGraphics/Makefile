EMPTY:=
SRC_DIR:=src
SRC_CC:=${SRC_DIR}/%.cc
SRC_CPP:=${SRC_DIR}/%.cpp
SRC:=$(wildcard ${SRC_DIR}/*.cc) $(wildcard ${SRC_DIR}/*.cpp)

EXEC:=GameGraphics.so

BIN_DIR:=lib
BIN:=${BIN_DIR}/lib${EXEC}

OBJ_DIR:=lib/obj
OBJ:=$(subst ${SRC_DIR}/,${OBJ_DIR}/,$(subst .cpp,.o,$(subst .cc,.cpp,${SRC})))

INCLUDE_DIR:=include
INCLUDE:=$(INCLUDE_DIR)/%.h

CFLAGS:=-O -fPIC --std=c++0x -I $(INCLUDE_DIR)

all: ${OBJ_DIR} ${BIN}

# Directory tree building
$(OBJ_DIR):
	@mkdir -p $@

# Project building
$(BIN): $(OBJ)
	@echo Building $(EXEC).
	@g++ -O -shared -Wl,-soname,lib$(EXEC) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_CC) $(INCLUDE)
	@echo $< -\> $(subst $(OBJ_DIR)/,$(EMPTY),$@)
	@g++ $(CFLAGS) -c $<  -o $@

$(OBJ_DIR)/%.o: $(SRC_CPP) $(INCLUDE)
	@echo $< -\> $(subst $(OBJ_DIR)/,$(EMPTY),$@)
	@g++ $(CFLAGS) -c $<  -o $@

.PHONY: clean
clean:
	@rm -rf $(BIN_DIR)
