/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerServerInternal;



@interface MPMusicPlayerControllerServer : NSObject 
{
    MPMusicPlayerControllerServerInternal *_internal;
}

+ (void)startMusicPlayerControllerServer;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)_runMigServer;

@end
