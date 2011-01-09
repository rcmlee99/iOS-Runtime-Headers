/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKVoiceChatService : NSObject 
{
    id _voiceChatService;
}

@property <GKVoiceChatClient> *client;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property float remoteParticipantVolume;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;

+ (id)defaultVoiceChatService;

- (id)client;
- (void)setClient:(id)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (BOOL)acceptCallID:(NSInteger)arg1 error:(id*)arg2;
- (void)denyCallID:(NSInteger)arg1;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (float)remoteParticipantVolume;
- (void)setRemoteParticipantVolume:(float)arg1;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (BOOL)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (void)forceNoICE:(BOOL)arg1;
- (void)dealloc;

@end
