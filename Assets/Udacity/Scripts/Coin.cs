using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour 
{
	public GameObject poofPrefab;
	public GameObject coinObject;

    public void OnCoinClicked() {
        // Instantiate the CoinPoof Prefab where this coin is located
        // Make sure the poof animates vertically
        // Destroy this coin. Check the Unity documentation on how to use Destroy
		GameObject coinPoof = Instantiate(poofPrefab, transform.position, transform.rotation);
		Object.Destroy (coinObject);

    }

}
