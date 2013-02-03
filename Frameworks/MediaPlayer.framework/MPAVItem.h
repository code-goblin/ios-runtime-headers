/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAlternateTracks, NSData, MPQueueFeeder, MPImageCache, AVPlayerItem, MPAVController, AVAsset, MPMediaItem, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface MPAVItem : NSObject {
    unsigned int _advancedDuringPlayback : 1;
    unsigned int _handledFinishTime : 1;
    unsigned int _hasPlayedThisSession : 1;
    unsigned int _wasCountedAsSkipped : 1;
    unsigned int _watchingAttributes : 1;
    unsigned int _lyricsAvailable : 1;
    unsigned int _timeMarkersNeedLoading : 1;
    unsigned int _isStreamable : 2;
    MPAlternateTracks *_alternateTracks;
    NSArray *_artworkTimeMarkers;
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    NSArray *_chapterTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    float _defaultPlaybackRate;
    BOOL _didAttemptToLoadAsset;
    MPQueueFeeder *_feeder;
    unsigned int _indexInQueueFeeder;
    BOOL _isAssetLoaded;
    MPAVController *_player;
    double _seekableTimeRangesCacheTime;
    float _soundCheckVolumeNormalization;
    unsigned int _type;
    NSArray *_urlTimeMarkers;
}

@property(readonly) NSString * album;
@property(readonly) NSString * albumArtist;
@property(readonly) unsigned int albumTrackCount;
@property(readonly) unsigned int albumTrackNumber;
@property(readonly) BOOL allowsEQ;
@property(readonly) MPAlternateTracks * alternateTracks;
@property(readonly) NSString * artist;
@property(readonly) NSData * artworkImageData;
@property(readonly) NSString * artworkMIMEType;
@property(retain) NSArray * artworkTimeMarkers;
@property(readonly) AVAsset * asset;
@property(readonly) BOOL canSeedGenius;
@property(retain) NSArray * chapterTimeMarkers;
@property(retain) NSArray * closedCaptionTimeMarkers;
@property(readonly) NSString * composer;
@property(readonly) unsigned int countForQueueFeeder;
@property(readonly) double currentTimeDisplayOverride;
@property(readonly) int customAVEQPreset;
@property float defaultPlaybackRate;
@property(readonly) unsigned int discCount;
@property(readonly) unsigned int discNumber;
@property(readonly) NSString * displayableText;
@property(readonly) BOOL displayableTextLoaded;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) double durationFromExternalMetadata;
@property(readonly) double durationIfAvailable;
@property(readonly) BOOL durationIsValid;
@property MPQueueFeeder * feeder;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property(readonly) NSString * genre;
@property(readonly) BOOL hasDataForItemArtwork;
@property(readonly) BOOL hasDisplayableText;
@property BOOL hasPlayedThisSession;
@property(readonly) MPImageCache * imageCache;
@property unsigned int indexInQueueFeeder;
@property BOOL isAssetLoaded;
@property(readonly) BOOL isStreamingQuality;
@property(readonly) NSString * lyrics;
@property(readonly) NSString * mainTitle;
@property(readonly) MPMediaItem * mediaItem;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) unsigned long long persistentID;
@property(readonly) double playableDuration;
@property(readonly) double playableDurationIfAvailable;
@property double playbackCheckpointCurrentTime;
@property MPAVController * player;
@property(readonly) AVPlayerItem * playerItem;
@property(readonly) NSURL * podcastURL;
@property(readonly) struct CGSize { float x1; float x2; } presentationSize;
@property float soundCheckVolumeNormalization;
@property(readonly) int status;
@property(getter=isStreamable,readonly) BOOL streamable;
@property int subtitleTrackID;
@property(readonly) BOOL supportsRewindAndFastForward15Seconds;
@property(readonly) double timeOfSeekableEnd;
@property(readonly) double timeOfSeekableStart;
@property(readonly) unsigned int type;
@property(retain) NSArray * urlTimeMarkers;
@property(readonly) BOOL useEmbeddedChapterData;
@property(readonly) float userRating;
@property(copy) NSString * videoID;
@property(readonly) BOOL wantsSubtitles;
@property(readonly) BOOL wasDownloadedThisSession;

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (unsigned int)defaultScaleMode;
+ (void)setDefaultScaleMode:(unsigned int)arg1;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_checkAllowsBlockingDurationCall;
- (void)_closedCaptioningStatusDidChangeNotification:(id)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (id)album;
- (id)albumArtist;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (BOOL)allowsEQ;
- (id)alternateTracks;
- (unsigned int)alternatesCountForTypes:(unsigned int)arg1;
- (id)artist;
- (id)artworkImageData;
- (id)artworkMIMEType;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkers;
- (id)composer;
- (unsigned int)countForQueueFeeder;
- (double)currentTimeDisplayOverride;
- (int)customAVEQPreset;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)displayableText;
- (BOOL)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (BOOL)durationIsValid;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasDisplayableText;
- (BOOL)hasPlayedThisSession;
- (id)imageCache;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2;
- (unsigned int)indexInQueueFeeder;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isAssetLoaded;
- (BOOL)isAssetURLValid;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isStreamable;
- (BOOL)isStreamingQuality;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedPositionInPlaylistString;
- (id)lyrics;
- (id)mainTitle;
- (id)mediaItem;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (double)playbackCheckpointCurrentTime;
- (float)playbackRateForLevel:(unsigned int)arg1 direction:(int)arg2 paused:(BOOL)arg3;
- (id)player;
- (id)playerItem;
- (id)podcastURL;
- (struct CGSize { float x1; float x2; })presentationSize;
- (BOOL)prioritizeDownloadSession;
- (void)reevaluateType;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned int)arg1 paused:(BOOL)arg2;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setFeeder:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasPlayedThisSession:(BOOL)arg1;
- (void)setIndexInQueueFeeder:(unsigned int)arg1;
- (void)setIsAssetLoaded:(BOOL)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setUserEnabledSubtitles:(BOOL)arg1;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (void)setVideoID:(id)arg1;
- (void)setupEQPresetWithDefaultPreset:(int)arg1;
- (void)setupPlaybackInfo;
- (float)soundCheckVolumeNormalization;
- (int)status;
- (int)subtitleTrackID;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;
- (BOOL)userSkippedPlayback;
- (id)videoID;
- (BOOL)wantsSubtitles;
- (BOOL)wasDownloadedThisSession;

@end