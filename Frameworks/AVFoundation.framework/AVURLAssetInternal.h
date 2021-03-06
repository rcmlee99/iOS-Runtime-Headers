/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetCache, AVAssetInspectorLoader, AVAssetResourceLoader, NSArray, NSObject<OS_dispatch_queue>, NSURL;

@interface AVURLAssetInternal : NSObject {
    NSURL *URL;
    AVAssetCache *assetCache;
    boolshouldMatchDataInCacheByURLPathComponentOnly;
    boolshouldMatchDataInCacheByURLWithoutQueryComponent;
    boolshouldOptimizeAccessForLinearMoviePlayback;
    NSURL *downloadDestinationURL;
    AVAssetInspectorLoader *loader;
    long long makeOneResourceLoaderOnly;
    unsigned long long referenceRestrictions;
    AVAssetResourceLoader *resourceLoader;
    NSArray *tracks;
    NSObject<OS_dispatch_queue> *tracksAccessQueue;
}

@end
