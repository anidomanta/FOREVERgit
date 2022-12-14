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

    private void Start() // この操作をしないとScene遷移した時にHandleの位置が反映されない。
    {
        _audioMixer.GetFloat("Master", out volume);
        slider.value = volume;
    }
    public void SetBGM(float volume) // slider操作で音量が調節できる。private floatの存在に影響しない。
    {
        _audioMixer.SetFloat("Master", volume);
    }
}