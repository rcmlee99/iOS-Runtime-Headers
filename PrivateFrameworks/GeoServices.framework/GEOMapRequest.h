/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {
    id _completionHandler;
    GEOMapRequestManager *_requestManager;
    bool_isFinished;
}

@property(copy) id completionHandler;
@property(readonly) bool isFinished;

- (void)cancel;
- (void)complete;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (bool)isFinished;
- (void)setCompletionHandler:(id)arg1;

@end
