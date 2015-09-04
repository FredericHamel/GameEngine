EMPTY:=
SRC_DIR:=src
SRC_CC:=${SRC_DIR}/%.cc
SRC_CPP:=${SRC_DIR}/%.cpp
SRC:=$(wildcard ${SRC_DIR}/*.cc) $(wildcard ${SRC_DIR}/*.cpp) $(wildcard ${SRC_DIR}/exceptions/*.cpp) $(wildcard ${SRC_DIR}/subsystem/*.cpp)

EXEC:=GameGraphics.so

BIN_DIR:=lib
BIN:=${BIN_DIR}/lib${EXEC}

OBJ_DIR:=obj
OBJ:=$(subst ${SRC_DIR}/,${OBJ_DIR}/,$(subst .cpp,.o,$(subst .cc,.cpp,${SRC})))

INCLUDE_DIR:=include
INCLUDE:=$(INCLUDE_DIR)/%.h

CFLAGS:=-O -fPIC --std=c++0x -I $(INCLUDE_DIR)

all: $(BIN_DIR) ${OBJ_DIR} ${BIN}

# Directory tree building: Object files
$(OBJ_DIR):
	@mkdir -p $@/{exceptions,subsystem}

# Directory tree building: Library
$(BIN_DIR):
	@mkdir $@

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

.PHONY: clean rebuild
clean:
	@rm -rf $(BIN_DIR) $(OBJ_DIR)

rebuild_message: ; @echo "Rebuild ${EXEC}"

rebuild: rebuild_message clean all

