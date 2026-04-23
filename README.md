

flacboi-for-windows 🎵
A simple command-line tool that downloads high-quality FLAC audio and thumbnails from YouTube and YouTube Music. Windows port of flacboi.
Features

Paste a YouTube or YouTube Music URL → downloads audio as FLAC
Type a song name → searches YouTube and downloads the top result
Paste a playlist URL → downloads the entire playlist
Saves thumbnails to a Covers folder
Runs in a loop (no need to restart)

⚙️ Setup
1. Install yt-dlp
Download the latest yt-dlp.exe from yt-dlp releases and place it somewhere in your PATH (e.g. C:\Windows\System32\)
2. Install ffmpeg
Download from ffmpeg.org and place ffmpeg.exe in C:\Windows\System32\
3. Create output folders
mkdir "%USERPROFILE%\Desktop\YTAudio"
mkdir "%USERPROFILE%\Desktop\YTAudio\Covers"
4. Clone and build
git clone https://github.com/raid118/flacboi-for-windows.git
cd flacboi-for-windows
g++ -std=c++20 main.cpp -o flacboi
Usage
Run:
flacboi
Then enter:

A song name
A YouTube URL
Or a playlist URL

Type quit to exit.
Output

Audio files → %USERPROFILE%\Desktop\YTAudio\
Thumbnails → %USERPROFILE%\Desktop\YTAudio\Covers\

Tips
For 1:1 (square) thumbnails, use a YouTube Music link instead of a regular YouTube video.
If you want to move your Spotify playlists to YouTube or YouTube Music, you can use tools like:

TuneMyMusic

Notes

Requires C++20 (starts_with)
Requires yt-dlp.exe and ffmpeg.exe in C:\Windows\System32\
Output path is automatically detected from USERPROFILE

Credits

yt-dlp
ffmpeg

Audio note
FLAC files are lossless, but playback quality still depends on your output device.
For the most accurate playback, use wired headphones or a high-quality Bluetooth codec.
Made by raid118
