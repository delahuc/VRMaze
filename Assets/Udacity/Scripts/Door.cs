using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour 
{
	public GameObject doorObject;
	public AudioClip doorOpened;
	private float speed = 10f;

	// Create a boolean value called "locked" that can be checked in Update() 
	private bool locked = true;
	private bool open = false;
	private Vector3 doorStartPosition;
	private Vector3 doorEndPosition;
	private Quaternion doorStartRotation;
	private Quaternion doorEndRotation = Quaternion.identity;
	private float startTime;
	private float journeyLength;

    void Update() {
        // If the door is unlocked and it is not fully raised
            // Animate the door raising up
		if (open) {
			float distCovered = (Time.time - startTime) * speed;
			float fracJourney = (distCovered / journeyLength);
			transform.position = Vector3.Slerp (doorStartPosition, new Vector3 (doorStartPosition.x, doorStartPosition.y + 4.5f, doorStartPosition.z + 7.25f), fracJourney);
			transform.rotation = Quaternion.Slerp(doorStartRotation, doorEndRotation, fracJourney);
		}
    }

    public void Unlock()
    {
        // You'll need to set "locked" to true here
		locked = false;
    }

	public void ClickDoor(){
		AudioSource audio = GetComponent<AudioSource>();
		if(!locked && !open){
			open = true;
			//play opening sound
			//initialise animation
			audio.clip = doorOpened;

			doorStartPosition = doorObject.transform.position;
			doorStartRotation = doorObject.transform.rotation;
			doorEndRotation.eulerAngles = new Vector3(-90, 0, 0); 
			startTime = Time.time;
			journeyLength = Vector3.Distance(doorStartPosition, new Vector3(doorStartPosition.x, doorStartPosition.y + 4.5f, doorStartPosition.z + 7.25f));
		}
		audio.Play ();
	}
}
