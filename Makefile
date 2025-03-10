CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = obj
TEST_DIR = test

SRC_FILES = $(SRC_DIR)/main.cpp 
            $(SRC_DIR)/Employee.cpp 
            $(SRC_DIR)/FullTimeEmployee.cpp 
            $(SRC_DIR)/PartTimeEmployee.cpp 
            $(SRC_DIR)/EmployeeStatus.cpp 
            $(SRC_DIR)/Utility.cpp

OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
TEST_FILES = $(TEST_DIR)/TestEmployee.cpp 
             $(TEST_DIR)/TestFullTimeEmployee.cpp 
             $(TEST_DIR)/TestPartTimeEmployee.cpp 
             $(TEST_DIR)/TestEmployeeStatus.cpp 
             $(TEST_DIR)/TestUtility.cpp

EXEC = employee_management_system
TEST_EXEC = test_runner

# Targets
all: $(EXEC)

# Compile the main project
$(EXEC): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ_FILES)

# Compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Compile and run tests
test: $(TEST_EXEC)
	./$(TEST_EXEC)

# Compile test runner
$(TEST_EXEC): $(OBJ_FILES) $(TEST_FILES)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -o $(TEST_EXEC) $(OBJ_FILES) $(TEST_FILES)

# Clean object files and executables
clean:
	rm -rf $(OBJ_DIR)/*.o $(EXEC) $(TEST_EXEC)

# Create object file directory if it does not exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

