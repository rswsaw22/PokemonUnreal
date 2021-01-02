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
    private DirectionEnum playerDirection;

    // Called when the node enters the scene tree for the first time.
    public override void _Ready()
    {
        playerDirection = DirectionEnum.UP; 
    }

    // Called every frame. 'delta' is the elapsed time since the previous frame.
    public override void _Process(float delta)
    {
        var playerCharacter = GetNode<AnimatedSprite>("MainCharacter");    

        if(Input.IsActionPressed("move_up"))
        {
            playerCharacter.Play("Up");
            playerDirection = DirectionEnum.UP;
        } else if (Input.IsActionPressed("move_down"))
        {
            playerCharacter.Play("Down");
            playerDirection = DirectionEnum.DOWN;
        } else if (Input.IsActionPressed("move_right"))
        {
            playerCharacter.Play("Right");
            playerDirection = DirectionEnum.RIGHT;
        } else if (Input.IsActionPressed("move_left"))
        {
            playerCharacter.Play("Left");
            playerDirection = DirectionEnum.LEFT;
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
    }
}
