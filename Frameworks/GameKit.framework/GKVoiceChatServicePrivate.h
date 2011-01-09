/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, LoopbackSocketTunnel, <GKVoiceChatClient>, GKVoiceChatDictionary, NSRecursiveLock, GKVoiceChatService;



@interface GKVoiceChatServicePrivate : NSObject 
{
    <GKVoiceChatClient> *client;
    float remoteParticipantVolume;
    BOOL outputMeteringEnabled;
    BOOL inputMeteringEnabled;
    float outputMeterLevel;
    float inputMeterLevel;
    BOOL microphoneMuted;
    struct tagHANDLE { NSInteger x1; } *hSIP;
    struct tagHANDLE { NSInteger x1; } *rtpHandle;
    struct tagHANDLE { NSInteger x1; } *hAUIO;
    NSInteger curCallID;
    NSInteger state;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    NSString *sdp;
    struct tagCONNRESULT { 
        NSInteger iCallID; 
        NSInteger iRemoteCallID; 
        NSInteger proto; 
        NSInteger bIfRelay; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            NSInteger iFlags; 
            BOOL szIfName[16]; 
            union { 
                NSUInteger dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        NSUInteger dwRTT; 
    } currentConnResult;
    LoopbackSocketTunnel *tunnel;
    NSRecursiveLock *stateLock;
    GKVoiceChatService *wrapperService;
    NSInteger callPayload;
    NSInteger callSampleRate;
    NSInteger callSamplesPerFrame;
    NSInteger didUseICE;
    double lastReceivedAudio;
    BOOL launchedShutdownThread;
    NSInteger bundle;
    BOOL forceNoICE;
}

@property GKVoiceChatService *wrapperService; /* unknown property attribute: VwrapperService */
@property NSInteger state; /* unknown property attribute: Vstate */
@property(getter=isMicrophoneMuted) BOOL microphoneMuted; /* unknown property attribute: VmicrophoneMuted */
@property float inputMeterLevel; /* unknown property attribute: VinputMeterLevel */
@property float outputMeterLevel; /* unknown property attribute: VoutputMeterLevel */
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled; /* unknown property attribute: VinputMeteringEnabled */
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled; /* unknown property attribute: VoutputMeteringEnabled */
@property float remoteParticipantVolume; /* unknown property attribute: VremoteParticipantVolume */
@property <GKVoiceChatClient> *client; /* unknown property attribute: Vclient */

+ (id)defaultVoiceChatService;

- (id)init;
- (id)createConnectionData:(NSInteger*)arg1 error:(id*)arg2;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatProc:(id)arg1;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (BOOL)acceptCallID:(NSInteger)arg1 error:(id*)arg2;
- (void)denyCallID:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)startAudioIO:(id*)arg1;
     /* Encoded args for previous method: B12@0:4^@8 */

- (void)setClient:(id)arg1;
- (void)sipConnectThreadProc:(id)arg1;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)resetState;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)inviteIsValid:(id)arg1;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(NSUInteger)arg2 error:(id*)arg3;
- (id)createInvite:(id*)arg1 toParticipant:(id)arg2;
- (NSInteger)handleIncomingWithCallID:(NSInteger)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void*)arg4 confIndex:(NSInteger*)arg5;
- (NSInteger)sipCallbackNotification:(NSInteger)arg1 callID:(NSInteger)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void*)arg5 confIndex:(NSInteger*)arg6;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(NSInteger)arg1;
- (NSInteger)startICEConnectionCheck:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)onCaptureSound:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4;
     /* Encoded args for previous method: B24@0:4*8i12i16I20 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)onPlaySound:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4;
     /* Encoded args for previous method: B24@0:4*8i12i16I20 */

- (BOOL)inviteeICEResultTimer:(id)arg1;
- (BOOL)noRemotePacketsProc:(id)arg1;
- (NSUInteger)connectionResultCallbackForCallID:(NSInteger)arg1 result:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; struct tagIPPORT { NSInteger x_5_1_1; BOOL x_5_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_5_1_3; unsigned short x_5_1_4; } x5; struct tagIPPORT { NSInteger x_6_1_1; BOOL x_6_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_6_1_3; unsigned short x_6_1_4; } x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; NSUInteger x10; }*)arg2 didReceiveICEPacket:(BOOL)arg3;
- (void)getNSError:(id*)arg1 code:(NSInteger)arg2 description:(id)arg3 hResult:(NSInteger)arg4;
- (void)getNSError:(id*)arg1 code:(NSInteger)arg2 description:(id)arg3 reason:(id)arg4;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (BOOL)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (void)setOutputMeterLevel:(float)arg1;
- (void)setInputMeterLevel:(float)arg1;
- (BOOL)choosePayload:(NSInteger*)arg1 count:(NSInteger)arg2;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)forceNoICE:(BOOL)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (id)wrapperService;
- (void)setWrapperService:(id)arg1;
- (NSInteger)state;
- (void)setState:(NSInteger)arg1;
- (BOOL)isMicrophoneMuted;
- (float)remoteParticipantVolume;
- (id)client;

@end
