/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */



@interface QLPreviewURLProtocol : NSURLProtocol 
{
}

+ (void)initialize;
+ (id)createUniqueURLWithName:(id)arg1;
+ (id)createURLWithContentID:(id)arg1 baseURL:(id)arg2;
+ (void)registerPreview:(id)arg1;
+ (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
+ (id)_errorForAbort;
+ (id)_errorForCancel;
+ (id)_errorForNoPreview;
+ (void)_unregisterURL:(id)arg1;
+ (void)unregisterURLs:(id)arg1 andPreview:(id)arg2;
+ (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
+ (void)setError:(id)arg1 forURL:(id)arg2;
+ (id)errorForURL:(id)arg1;
+ (void)startLoadingProtocol:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)startLoading;
- (void)stopLoading;

@end
