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

    private void Start() // ���̑�������Ȃ���Scene�J�ڂ�������Handle�̈ʒu�����f����Ȃ��B
    {
        _audioMixer.GetFloat("Master", out volume);
        slider.value = volume;
    }
    public void SetBGM(float volume) // slider����ŉ��ʂ����߂ł���Bprivate float�̑��݂ɉe�����Ȃ��B
    {
        _audioMixer.SetFloat("Master", volume);
    }
}