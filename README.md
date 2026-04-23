flacboi

A simple command-line tool that downloads high-quality FLAC audio and thumbnails from YouTube and YouTube Music.

⸻

Features

* Paste a YouTube or YouTube Music URL → downloads audio as FLAC
* Type a song name → searches YouTube and downloads the top result
* Paste a playlist URL → downloads the entire playlist
* Saves thumbnails to a Covers folder
* Runs in a loop (no need to restart)

⸻

Setup (Windows)

1. Install dependencies

Option A: Using winget

winget install yt-dlp
winget install Gyan.FFmpeg

Option B: Manual install

* yt-dlp: https://github.com/yt-dlp/yt-dlp
* ffmpeg: https://www.gyan.dev/ffmpeg/builds/

Make sure both yt-dlp and ffmpeg are added to PATH.

⸻

2. Create output folders

mkdir $env:USERPROFILE\Desktop\YTAudio\Covers

⸻

3. Clone and build

git clone https://github.com/raid118/flacboi.git
cd flacboi
g++ -std=c++20 main.cpp -o flacboi.exe

(Or use MSVC if preferred)

⸻

Usage

Run:

flacboi.exe

Then enter:

* A song name
* A YouTube URL
* A playlist URL

Type:

quit

to exit.

⸻

Output

* Audio files → C:\Users\%USERNAME%\Desktop\YTAudio\
* Thumbnails → C:\Users\%USERNAME%\Desktop\YTAudio\Covers\

⸻

Tips

* For 1:1 (square) thumbnails, use a YouTube Music link instead of a regular YouTube video
* To move Spotify playlists to YouTube or YouTube Music, use:
    * TuneMyMusic: https://www.tunemymusic.com

⸻

Notes

* Requires C++20 (starts_with)
* Ensure yt-dlp and ffmpeg are installed and accessible via PATH
* If downloads fail, check your system PATH or executable locations

⸻

Credits

* yt-dlp
* ffmpeg

⸻

Audio Note

FLAC files are lossless, but playback quality still depends on your output device.

For best results, use:

* Wired headphones
* Or a high-quality Bluetooth codec

⸻

Author

Made by raid118
