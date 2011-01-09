/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSObject<CKContentEntryBridgeClient>;



@interface CKContentEntryBridge : NSObject 
{
    NSObject<CKContentEntryBridgeClient> *_entryView;
}

@property NSObject<CKContentEntryBridgeClient> *contentEntryView; /* unknown property attribute: V_entryView */

+ (id)newContentEntryBridge;

- (void)dealloc;
- (void)setMessageComposition:(id)arg1;
- (id)messageComposition;
- (void)setMessageParts:(id)arg1;
- (id)messageParts;
- (id)attachments;
- (void)insertMessagePart:(id)arg1;
- (BOOL)hasContent;
- (id)newContentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)supportedPasteboardTypesInTextContentView:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1 inTextContentView:(id)arg2;
- (id)contentEntryView;
- (void)setContentEntryView:(id)arg1;

@end
