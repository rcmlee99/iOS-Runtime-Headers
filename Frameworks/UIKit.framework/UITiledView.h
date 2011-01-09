/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;



@interface UITiledView : UIView 
{
    NSMutableArray *_rows;
    NSMutableArray *_unusedTiles;
    NSString *_minificationFilter;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _requiredDrawRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _dirtyRect;
    struct CGSize { 
        float width; 
        float height; 
    } _tileSize;
    struct CGSize { 
        float width; 
        float height; 
    } _firstTileSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _tileOrigin;
    NSUInteger _maxTileCount;
    BOOL _drawsGrid;
    BOOL _isTilingEnabled;
    BOOL _logsTilingChanges;
    BOOL _tileDrawingEnabled;
    BOOL _inLayout;
    BOOL _allNewTilesNeeded;
    BOOL _positionsTilesFromOrigin;
    BOOL _sizesTilesToFit;
    BOOL _tilesOpaque;
    BOOL _adjustsMaxTileCountDynamically;
}

+ (Class)tileClass;

- (NSUInteger)_usedTileCount;
- (NSUInteger)_tileCount;
- (id)_createTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })gridRect;
- (void)_removeTile:(id)arg1 cache:(BOOL)arg2;
- (void)_removeRowAtIndex:(NSUInteger)arg1 cache:(BOOL)arg2;
- (void)_removeColumnAtIndex:(NSUInteger)arg1 cache:(BOOL)arg2;
- (NSUInteger)_removeLeastVisibleRowOrColumn:(BOOL)arg1;
- (void)_removeTilesIfNecessaryForRow:(BOOL)arg1;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)_updateTileCache;
- (void)_removeTilesIfNecessary;
- (void)_createRow:(BOOL)arg1;
- (void)_createColumn:(BOOL)arg1;
- (void)_addNeededTiles;
- (BOOL)shouldRepaintInPieces:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 region:(void*)arg2;
- (void)accurateDirtyRects:(struct CGRect {}**)arg1 count:(NSUInteger*)arg2 clear:(BOOL)arg3;
- (void)_invalidateTiles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)tilesNeedDisplay;
- (void)flushDirtyRects;
- (void)layoutBeforeDraw;
- (void)_layoutTiles;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)_didScroll;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSizesTilesToFit:(BOOL)arg1;
- (void)setPositionsTilesFromOrigin:(BOOL)arg1;
- (void)setTileOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })tileOrigin;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setDrawsGrid:(BOOL)arg1;
- (BOOL)drawsGrid;
- (void)setMaxTileCount:(NSUInteger)arg1;
- (NSUInteger)maxTileCount;
- (void)setAdjustsMaxTileCountDynamically:(BOOL)arg1;
- (NSUInteger)adjustedMaxTileCount;
- (BOOL)_canDrawContent;
- (void)setTilingEnabled:(BOOL)arg1;
- (BOOL)isTilingEnabled;
- (void)setLogsTilingChanges:(BOOL)arg1;
- (BOOL)logsTilingChanges;
- (void)ensureDrawnRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFirstTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTileDrawingEnabled:(BOOL)arg1;
- (BOOL)tileDrawingEnabled;
- (void)setTileMinificationFilter:(id)arg1;
- (void)setTilesOpaque:(BOOL)arg1;
- (BOOL)tilesOpaque;

@end
