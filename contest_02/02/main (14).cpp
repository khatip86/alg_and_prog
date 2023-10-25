enum Cell { wall, visited, exit_tile, unknown };

bool is_can_exit_from_maze(std::vector<std::string> maze, int sy, int sx) {
    
    std::vector<std::vector<Cell>> m(maze.size(), std::vector<Cell>(maze[0].size(), unknown));
    int change = 1;
    for (int i = 0; i < maze.size(); i++) {
        for (int j = 0; j < maze[i].size(); j++) {
            switch (maze[i].at(j)) {
                case '#':
                    m[i][j] = wall;
                    break;
                case 'E':
                    m[i][j] = exit_tile;
                    break;
                default:
                    if ((i == sy) && (j == sx)) {
                        m[i][j] = visited;
                    }
            }
        }
    }

    
    while (change!=0) {
        change = 0;
        for (int y = 0; y < m.size(); y++) {
            for (int x = 0; x < m[y].size(); x++) {
                if (m[y][x] == visited) {
                    if (m[y-1][x] == unknown) { m[y-1][x] = visited; change+=1; }
                    if (m[y-1][x] == exit_tile) { return true; }
                    if (m[y+1][x] == unknown) { m[y+1][x] = visited; change+=1; }
                    if (m[y+1][x] == exit_tile) { return true; }
                    if (m[y][x-1] == unknown) { m[y][x-1] = visited; change+=1; }
                    if (m[y][x-1] == exit_tile) { return true; }
                    if (m[y][x+1] == unknown) { m[y][x+1] = visited; change+=1; }
                    if (m[y][x+1] == exit_tile) { return true; }
                }
            }
        }
        
    }
    return false;
}