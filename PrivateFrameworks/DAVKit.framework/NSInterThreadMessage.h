/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSNotification;



@interface NSInterThreadMessage : NSObject 
{
    NSInteger type;
    union { 
        NSNotification *notification; 
        struct { 
            SEL selector; 
            id receiver; 
            id arg1; 
            id arg2; 
        } sel; 
    } data;
}



@end
