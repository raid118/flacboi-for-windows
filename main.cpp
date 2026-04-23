#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    const char* home = getenv("USERPROFILE");
    if (!home) {
        cout << "Could not find USERPROFILE.\n";
        return 1;
    }
    const string H = string(home);

    while (true) {
        string url;
        cout << "Enter song name, YouTube URL or playlist URL (type quit to quit)" << endl;
        getline(cin, url);

        if (url == "quit") {
            cout << "bye <3" << endl;
            break;
        }
        if (url.empty()) {
            continue;
        }

        if (url.starts_with("http")) {
            string audioCmd =
                "yt-dlp "
                "--ffmpeg-location \"C:\\Windows\\System32\\ffmpeg.exe\" "
                "-x --audio-format flac "
                "-o \"" + H + "\\Desktop\\YTAudio\\%(title)s.%(ext)s\" \""
                + url + "\"";
            system(audioCmd.c_str());

            string thumbCmd =
                "yt-dlp "
                "--ffmpeg-location \"C:\\Windows\\System32\\ffmpeg.exe\" "
                "--write-thumbnail --skip-download --convert-thumbnails jpg "
                "-o \"" + H + "\\Desktop\\YTAudio\\Covers\\%(title)s.%(ext)s\" \""
                + url + "\"";
            system(thumbCmd.c_str());
        } else {
            string search = "ytsearch:" + url;

            string audioCmd =
                "yt-dlp "
                "--ffmpeg-location \"C:\\Windows\\System32\\ffmpeg.exe\" "
                "-x --audio-format flac "
                "-o \"" + H + "\\Desktop\\YTAudio\\%(title)s.%(ext)s\" \""
                + search + "\"";
            system(audioCmd.c_str());

            string thumbCmd =
                "yt-dlp "
                "--ffmpeg-location \"C:\\Windows\\System32\\ffmpeg.exe\" "
                "--write-thumbnail --skip-download --convert-thumbnails jpg "
                "-o \"" + H + "\\Desktop\\YTAudio\\Covers\\%(title)s.%(ext)s\" \""
                + search + "\"";
            system(thumbCmd.c_str());
        }
    }
    return 0;
}

