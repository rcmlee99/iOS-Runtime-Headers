/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCacheNode, NSString, NSCachedURLResponse, NSURLRequest;



@interface NSURLCacheNode : NSObject 
{
    NSCachedURLResponse *cachedResponse;
    NSURLRequest *request;
    NSString *key;
    NSURLCacheNode *prev;
    NSURLCacheNode *next;
    NSUInteger hash;
}


- (id)initWithCachedResponse:(id)arg1 request:(id)arg2 key:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
