#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Music class
class Music {
private:
    string title;  //member 변수
    string artist;
    string album;
    int year;
public:
    //생성자(constructor)
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    // 소멸자(destructor)
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
    vector<Music> musicList; // 앞에서 만든 Music 클래스를 리스트의 객체로 넣음

public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year); //newMusic이라는 객체 생성
        musicList.push_back(newMusic); //push_back 리스트 뒤에 추가하는 함수
        cout << title << " by " << artist << " added to " << serviceName << endl;
    }

    // Searches for music by title
    Music* searchByTitle(string title) { ///* : 포인터 - 주소를 저장함
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) { //vector 리스트에 접근하는 [] (대괄호) Music 객체의 getTitle
                return &musicList[i]; //& : 주소값
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
