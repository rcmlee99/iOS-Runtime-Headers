/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSURL, NSString;



@interface DAVMultiStatusResponse : NSObject 
{
    NSURL *href;
    NSString *responseDescription;
    NSInteger statusCode;
}


- (id)init;
- (id)initWithXMLNode:(id)arg1;
- (void)dealloc;
- (id)href;
- (NSInteger)statusCode;
- (id)responseDescription;
- (BOOL)handleResponseSubnode:(id)arg1;

@end
