/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <KNAnimationPluginContext>, KNAnimatedSlideView, KNPlaybackSession;

@interface KNAnimationRenderer : NSObject {
    <KNAnimationPluginContext> *_pluginContext;
    boolmAreAnimationsPaused;
    KNAnimatedSlideView *mASV;
    unsigned long long mDirection;
    double mDuration;
    id mPlugin;
    Class mPluginClass;
    KNPlaybackSession *mSession;
}

@property unsigned long long direction;
@property double duration;
@property(readonly) id plugin;
@property(readonly) Class pluginClass;
@property(readonly) <KNAnimationPluginContext> * pluginContext;

- (void)dealloc;
- (unsigned long long)direction;
- (double)duration;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (Class)pluginClass;
- (id)pluginContext;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setupPluginContext;
- (void)stopAnimations;

@end
