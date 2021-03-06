/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, NSString;

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate> {
    id _errorHandler;
    id _finishedHandler;
    GEORequester *_requester;
    bool_cancelled;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) GEORequester * requester;
@property(readonly) Class superclass;

+ (id)providerURL;

- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
