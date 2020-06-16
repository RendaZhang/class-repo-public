#define RED 0
#define BLUE 1

class Entity {
public:
  Entity(int x=0, int y=0) : pos_x_(x), pos_y_(y), color_(RED) {}
private:
  int pos_x_;
  int pos_y_;
  int color_;
};
class Robot : public Entity {
public:
  Robot(int x=0, int y=0) : Entity(x,y), unique_to_robot_(0) {}
private:
  int unique_to_robot_;
};

class Player : public Entity {
public:
  Player(int x=0, int y=0) : Entity(x,y), unique_to_player_(0) {}
private:
  int unique_to_player_;
};

class EntityFactory {
public:
   	//Entity* Create(    ...
};

class RobotFactory : public EntityFactory {
  // ...
};

class PlayerFactory : public EntityFactory {
  // ...
};

class Arena {
	//void AddEntities( EntityFactory factory, ...
};

int main() {
  Arena arena;
  RobotFactory robot_factory;
  PlayerFactory player_factory;
  // AddEntities( ...
}
