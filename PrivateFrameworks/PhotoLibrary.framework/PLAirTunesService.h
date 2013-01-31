/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MCMediaControlClientRemote, MediaControlClient, NSObject<OS_dispatch_queue>, NSMutableArray, <PLAirTunesServicePhotoBrowsingDataSource>, NSDictionary, NSString, AirPlayRemoteSlideshow, NSNetService;

@interface PLAirTunesService : NSObject <NSNetServiceDelegate> {
    NSNetService *_netService;
    struct _DNSServiceRef_t { } *_dnsService;
    NSString *_deviceID;
    <PLAirTunesServicePhotoBrowsingDataSource> *_dataSource;
    NSMutableArray *_streamedPhotoUuids;
    MediaControlClient *_mediaControlClient;
    MCMediaControlClientRemote *_remoteMediaControlClient;
    NSString *_ipAddress;
    BOOL _streamingPhotos;
    BOOL _streamingRemoteSlideshow;
    BOOL _streamingLocalSlideShow;
    BOOL _streamingVideo;
    AirPlayRemoteSlideshow *_remoteSlideshow;
    NSDictionary *_remoteSlideshowAvailableFeatures;
    NSString *_password;
    BOOL _requiresPassword;
    BOOL _requiresPIN;
    BOOL _showingPasswordAlert;
    BOOL _validPassword;
    BOOL _validated;
    BOOL _sentPhoto;
    double _playStartTime;
    unsigned int _features;
    NSObject<OS_dispatch_queue> *_resolveQueue;
}

@property(readonly) NSNetService * netService;
@property(readonly) NSString * deviceID;
@property BOOL streamingLocalSlideShow;
@property <PLAirTunesServicePhotoBrowsingDataSource> * dataSource;
@property(retain) NSString * ipAddress;
@property(retain) AirPlayRemoteSlideshow * remoteSlideshow;
@property(retain) NSDictionary * remoteSlideshowAvailableFeatures;
@property BOOL requiresPassword;
@property BOOL requiresPIN;
@property BOOL validPassword;
@property(retain) NSString * password;
@property unsigned int features;

+ (void)beginNetworkAssertion;
+ (void)endNetworkAssertion;
+ (BOOL)canDisplayMedia:(id)arg1;

- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)validate;
- (void)setFeatures:(unsigned int)arg1;
- (unsigned int)features;
- (BOOL)streamingLocalSlideShow;
- (void)setRequiresPIN:(BOOL)arg1;
- (BOOL)requiresPIN;
- (void)setRequiresPassword:(BOOL)arg1;
- (id)remoteSlideshowAvailableFeatures;
- (void)setIpAddress:(id)arg1;
- (void)_setDeviceID:(id)arg1;
- (void)setRemoteSlideshowAvailableFeatures:(id)arg1;
- (id)ipAddress;
- (id)remoteSlideshow;
- (void)setRemoteSlideshow:(id)arg1;
- (void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_fixLegacyEvent:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3;
- (BOOL)_streaming;
- (void)stopRemoteSlideshow;
- (BOOL)_allowsPhotoCaching;
- (void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4;
- (BOOL)_supportsPhotoCaching;
- (BOOL)validPassword;
- (void)_validateForBadPassword:(BOOL)arg1 completionBlock:(id)arg2;
- (void)setValidPassword:(BOOL)arg1;
- (void*)_keychainAccessibility;
- (void)_resolveWithTimeout:(double)arg1;
- (void)_cancelResolve;
- (id)netService;
- (id)initWithNSNetService:(id)arg1;
- (void)getVideoPosition:(id)arg1;
- (void)setVideoPosition:(double)arg1;
- (void)stopStreamingWithCompletionBlock:(id)arg1;
- (void)playVideo:(id)arg1 startTime:(double)arg2 stateChangedBlock:(id)arg3;
- (void)invalidateStreaming;
- (void)setStreamingLocalSlideShow:(BOOL)arg1;
- (void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2;
- (void)stopStreaming;
- (void)streamPhoto:(id)arg1 withTransition:(id)arg2;
- (void)getRemoteFeaturesWithCompletionHandler:(id)arg1;
- (id)remoteLocalizationForSlideshowThemeKey:(id)arg1;
- (id)supportedRemoteSlideshowThemes;
- (BOOL)supportsRemoteSlideshow;
- (void)invalidatePhotoCache;
- (id)deviceID;
- (id)password;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)requiresPassword;
- (void)setRate:(float)arg1;
- (BOOL)isAvailable;
- (void)setPassword:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;

@end