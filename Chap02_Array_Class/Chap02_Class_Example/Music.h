#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Music class
class Music {
private:
    string title;  //member ����
    string artist;
    string album;
    int year;
public:
    //������(constructor)
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    // �Ҹ���(destructor)
     ~Muscic() {}

    // Getters
    string getTitle() { return title; }
    string getArtist() { return artist; }
    string getAlbum() { return album; }
    int getYear() { return year; }
};

// MusicStreamingService class
class MusicStreamingService {
private:
    string serviceName;
    vector<Music> musicList; // �տ��� ���� Music Ŭ������ ����Ʈ�� ��ü�� ����

public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year); //newMusic�̶�� ��ü ����
        musicList.push_back(newMusic); //push_back ����Ʈ �ڿ� �߰��ϴ� �Լ�
        cout << title << " by " << artist << " added to " << serviceName << endl;
    }

    // Searches for music by title
    Music* searchByTitle(string title) { ///* : ������ - �ּҸ� ������
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) { //vector ����Ʈ�� �����ϴ� [] (���ȣ) Music ��ü�� getTitle
                return &musicList[i]; //& : �ּҰ�
            }
        }
        return NULL;
    }

    // Searches for music by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]);
            }
        }
        return result;
    }

};
