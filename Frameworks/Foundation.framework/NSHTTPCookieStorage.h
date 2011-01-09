/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPCookieStorageInternal;



@interface NSHTTPCookieStorage : NSObject 
{
    NSHTTPCookieStorageInternal *_internal;
}

+ (id)sharedHTTPCookieStorage;

- (void)dealloc;
- (id)init;
- (id)cookies;
- (void)setCookie:(id)arg1;
- (void)deleteCookie:(id)arg1;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (id)cookiesForURL:(id)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (NSUInteger)cookieAcceptPolicy;
- (void)setCookieAcceptPolicy:(NSUInteger)arg1;
- (id)description;
- (void)_setPrivateBrowsingEnabled:(BOOL)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;
- (void)_saveCookies;
- (void)_readAcceptCookiesPreference;
- (id)_internalInit;

@end
