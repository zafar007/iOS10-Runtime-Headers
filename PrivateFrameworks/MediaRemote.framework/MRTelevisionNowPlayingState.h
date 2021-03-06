/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevisionNowPlayingState : NSObject {
    NSString * _displayID;
    NSString * _displayName;
    bool  _isPlaying;
    NSDictionary * _nowPlayingInfo;
    void * _playbackQueue;
    unsigned int  _playbackState;
    NSArray * _supportedCommands;
}

@property (nonatomic, retain) NSString *displayID;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool isPlaying;
@property (nonatomic, retain) NSDictionary *nowPlayingInfo;
@property (nonatomic) void*playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, retain) NSArray *supportedCommands;

- (void)clear;
- (void)dealloc;
- (id)displayID;
- (id)displayName;
- (bool)isPlaying;
- (id)nowPlayingInfo;
- (void*)playbackQueue;
- (unsigned int)playbackState;
- (void)setDisplayID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIsPlaying:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueue:(void*)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;

@end
