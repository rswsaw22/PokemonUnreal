using Godot;
using System;

public class MainCharacterAnim : KinematicBody2D
{

    enum DirectionEnum
    {
        UP,
        DOWN,
        LEFT,
        RIGHT
    }
    // Declare member variables here. Examples:
    // private int a = 2;
    // private string b = "text";
    private DirectionEnum playerDirection = DirectionEnum.UP;
    public int speed = 5;
    public Vector2 velocity = new Vector2();

    // Called when the node enters the scene tree for the first time.
    public override void _Ready()
    {

    }

    // Called every frame. 'delta' is the elapsed time since the previous frame.
    public override void _Process(float delta)
    {
        velocity = new Vector2();
        var playerCharacter = GetNode<AnimatedSprite>("PlayerCharacter");    

        if(Input.IsActionPressed("ui_up"))
        {
            playerCharacter.Play("Up");
            playerDirection = DirectionEnum.UP;
            velocity.y += -1;
        } else if (Input.IsActionPressed("ui_down"))
        {
            playerCharacter.Play("Down");
            playerDirection = DirectionEnum.DOWN;
            velocity.y += 1;
        } else if (Input.IsActionPressed("ui_right"))
        {
            playerCharacter.Play("Right");
            playerDirection = DirectionEnum.RIGHT;
            velocity.x += 1;
        } else if (Input.IsActionPressed("ui_left"))
        {
            playerCharacter.Play("Left");
            playerDirection = DirectionEnum.LEFT;
            velocity.x += -1;
        } else
        {
            switch(playerDirection)
            {
                case DirectionEnum.UP:
                    playerCharacter.Play("UpIdle");
                    break;
                case DirectionEnum.DOWN:
                    playerCharacter.Play("DownIdle");
                    break;
                case DirectionEnum.RIGHT:
                    playerCharacter.Play("RightIdle");
                    break;
                case DirectionEnum.LEFT:
                    playerCharacter.Play("LeftIdle");
                    break;
                default:
                    break;
            }
        }
        KinematicCollision2D collision = MoveAndCollide(velocity * speed);
        if (collision != null)
        {
            GD.Print("Collided!");
            GD.Print("With a butterfly!");
        }
    }
}
