/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaServerQuery, MPMediaServerItem;



@interface MPMediaServerItemCollection : NSObject <NSCoding>
{
    MPMediaServerQuery *_itemsQuery;
    NSArray *_items;
    NSUInteger _itemsCount;
    MPMediaServerItem *_representativeItem;
    NSInteger _containedMediaTypes;
}

@property(readonly) MPMediaServerQuery *itemsQuery;


- (id)initWithItemsQuery:(id)arg1 itemsCount:(NSUInteger)arg2 representativeItem:(id)arg3 containedMediaTypes:(NSInteger)arg4;
- (id)initWithItems:(id)arg1 representativeItem:(id)arg2 containedMediaTypes:(NSInteger)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)itemsQuery;

@end
