/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, CALayerHost, <MPMediaPickerControllerDelegate>, UIWindow;



@interface MPMediaPickerControllerInternal : NSObject 
{
    NSInteger _mediaTypes;
    unsigned int _allowsPickingMultipleItems : 1;
    NSString *_prompt;
    <MPMediaPickerControllerDelegate> *_delegate;
    NSUInteger _serverPort;
    struct __CFMachPort { } *_serverPortRef;
    NSUInteger _replyPort;
    struct __CFRunLoopSource { } *_replyPortRunLoopSource;
    UIWindow *_layerHostProxyWindow;
    CALayerHost *_layerHost;
    unsigned int _layerHostIsActive : 1;
}



@end
