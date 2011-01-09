/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController>
{
    unsigned int _didCheckIn : 1;
    NSUInteger _clientPort;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSInteger _playbackNotificationObservers;
}


- (void)prepareForRemoteSelectorInvocation;
- (void)prepareForDecodingWithCoder:(id)arg1;
- (void)serverConnectionDied;

@end
