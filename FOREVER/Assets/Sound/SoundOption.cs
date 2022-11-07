using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SoundOption : MonoBehaviour
{
    [SerializeField] AudioMixer _audioMixer;
    [SerializeField] Slider slider;
    private float volume = 0f;

    private void Start() // ‚±‚Ì‘€ì‚ğ‚µ‚È‚¢‚ÆScene‘JˆÚ‚µ‚½‚ÉHandle‚ÌˆÊ’u‚ª”½‰f‚³‚ê‚È‚¢B
    {
        _audioMixer.GetFloat("Master", out volume);
        slider.value = volume;
    }
    public void SetBGM(float volume) // slider‘€ì‚Å‰¹—Ê‚ª’²ß‚Å‚«‚éBprivate float‚Ì‘¶İ‚É‰e‹¿‚µ‚È‚¢B
    {
        _audioMixer.SetFloat("Master", volume);
    }
}