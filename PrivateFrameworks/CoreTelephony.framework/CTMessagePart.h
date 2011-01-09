/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSMutableDictionary, NSData, NSString;



@interface CTMessagePart : NSObject 
{
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSString *_contentId;
    NSString *_contentLocation;
    NSData *_data;
}

@property(copy) NSData *data; /* unknown property attribute: V_data */
@property(copy) NSString *contentLocation; /* unknown property attribute: V_contentLocation */
@property(copy) NSString *contentId; /* unknown property attribute: V_contentId */
@property(copy) NSString *contentType; /* unknown property attribute: V_contentType */


- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;
- (void)dealloc;
- (id)data;
- (void)setData:(id)arg1;
- (id)contentLocation;
- (void)setContentLocation:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;

@end
