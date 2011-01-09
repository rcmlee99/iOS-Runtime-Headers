/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CandWordString;



@interface WordInfo : CandWord 
{
    CandWordString *_yomi;
    NSInteger _inConnection;
    NSInteger _outConnection[10];
    unsigned char _readingLens[10];
    unsigned short _lcAttrs[10];
    unsigned short _rcAttrs[10];
    NSUInteger _trievalues[10];
    NSInteger _outConnections;
    NSInteger _weight;
}


- (id)initWithWord:(id)arg1 withYomi:(id)arg2 inConnection:(NSInteger)arg3 outConnection:(NSInteger)arg4 weight:(NSInteger)arg5;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)addOutConnection:(NSInteger)arg1;
- (void)addWeight:(NSInteger)arg1;
- (id)yomi;
- (const char *)yomiUTF8String;
- (NSInteger)inConnection;
- (NSInteger*)outConnection;
- (NSInteger)outConnections;
- (void)getInConnection:(NSInteger*)arg1 outConnection:(NSInteger**)arg2 andOutConnections:(NSInteger*)arg3;
- (NSInteger)weight;
- (void)setWeight:(NSInteger)arg1;
- (char *)readingLens;
- (unsigned short*)lcAttrs;
- (NSUInteger*)trievalues;
- (unsigned short*)rcAttrs;

@end
