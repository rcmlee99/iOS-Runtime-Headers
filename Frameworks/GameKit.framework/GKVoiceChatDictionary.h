/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary;



@interface GKVoiceChatDictionary : NSObject 
{
    NSMutableDictionary *actualDictionary;
    NSUInteger type;
}

+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(NSInteger)arg4;
+ (id)dictionaryFromData:(id)arg1;
+ (BOOL)validateDictionary:(id)arg1;
+ (BOOL)validateInvite:(id)arg1;
+ (BOOL)validateReply:(id)arg1;
+ (BOOL)validateCancel:(id)arg1;

- (void)dealloc;
- (id)replyDictionary:(NSUInteger)arg1 connectionData:(id)arg2 callID:(NSInteger)arg3;
- (id)cancelDictionary;
- (BOOL)isInviteDictionary;
- (BOOL)isCancelDictionary;
- (BOOL)isReplyDictionary;
- (BOOL)matchesResponse:(id)arg1;
- (NSUInteger)type;
- (NSUInteger)response;
- (id)connectionData;
- (id)fromParticipantID;
- (void)setFromParticipantID:(id)arg1;
- (id)participantID;
- (NSInteger)nonce;
- (BOOL)matchesNonce:(NSInteger)arg1;
- (id)version;
- (id)createBlob;
- (NSInteger)callID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end
