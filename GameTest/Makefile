EMPTY:=
SRC_DIR:=src
SRC_CC:=${SRC_DIR}/%.cc
SRC_CPP:=${SRC_DIR}/%.cpp
SRC:=$(wildcard ${SRC_DIR}/*.cc) $(wildcard ${SRC_DIR}/*.cpp)

EXEC:=GameTest

BIN_DIR:=bin
BIN:=$(BIN_DIR)/$(EXEC)

OBJ_DIR:=bin/obj
OBJ:=$(subst ${SRC_DIR}/,${OBJ_DIR}/,$(subst .cpp,.o,$(subst .cc,.cpp,${SRC})))

INCLUDE_DIR:=include
INCLUDE:=$(INCLUDE_DIR)/%.h

CFLAGS:=-O --std=c++0x -I../GameGraphics/include -I$(INCLUDE_DIR)

all: $(OBJ_DIR) $(BIN)

# Directory tree building
$(OBJ_DIR):
	@mkdir -p $@

# Project building
$(BIN): $(OBJ)
	@echo Building $(EXEC).
	@g++ -lSDL2_ttf -lSDL2_image -lGL -lphysfs -lSDL2  -L../GameGraphics/lib -lGameGraphics -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_CC)
	@echo $< -\> $(subst $(OBJ_DIR)/,$(EMPTY),$@)
	@g++ $(CFLAGS) -c $<  -o $@
	
$(OBJ_DIR)/%.o: $(SRC_CPP) 
	@echo $< -\> $(subst $(OBJ_DIR)/,$(EMPTY),$@)
	@g++ $(CFLAGS) -c $<  -o $@

$(OBJ_DIR)/%.o: $(SRC_CC) $(INCLUDE)
	@echo $< -\> $(subst $(OBJ_DIR)/,$(EMPTY),$@)
	@g++ $(CFLAGS) -c $<  -o $@

$(OBJ_DIR)/%.o: $(SRC_CPP) $(INCLUDE)
	@echo $< -\> $(subst $(OBJ_DIR)/,$(EMPTY),$@)
	@g++ $(CFLAGS) -c $<  -o $@

.PHONY: clean rebuild
clean:
	@rm -rf $(BIN_DIR)

rebuild_message: ; @echo "Rebuild ${EXEC}"

rebuild: rebuild_message clean all


