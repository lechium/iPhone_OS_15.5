//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CATiledLayerDelegate><CALayerDelegate;

@interface CATiledLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x000000000006ccee
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000006cb71
+ (double)fadeDuration;	// IMP=0x000000000006cb63
+ (unsigned int)prefetchedTiles;	// IMP=0x000000000006ec23
+ (_Bool)shouldDrawOnMainThread;	// IMP=0x000000000006ec1b
@property struct CGSize tileSize;
@property unsigned long long levelsOfDetailBias;
@property unsigned long long levelsOfDetail;
- (void)setUnsafeUnretainedDelegate:(id)arg1;	// IMP=0x000000000006d69a
- (void)_colorSpaceDidChange;	// IMP=0x000000000006d5ee
- (_Bool)_canDisplayConcurrently;	// IMP=0x000000000006d5e6
- (void)_display;	// IMP=0x000000000006d25b
- (void)dealloc;	// IMP=0x000000000006d202
- (void)_dealloc;	// IMP=0x000000000006d1a9
- (void)invalidateContents;	// IMP=0x000000000006d195
- (void)setContents:(id)arg1;	// IMP=0x000000000006d015
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x000000000006ceff
- (_Bool)shouldArchiveValueForKey:(id)arg1;	// IMP=0x000000000006ce82
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x000000000006cd61
@property(getter=isDrawingEnabled) _Bool drawingEnabled;
@property double maximumTileScale;
@property struct CGColor *fillColor;
- (void)displayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;	// IMP=0x000000000006e85e
- (_Bool)canDrawRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;	// IMP=0x000000000006e7ae
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2;	// IMP=0x000000000006e79a
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3;	// IMP=0x000000000006e61a

// Remaining properties
@property __weak id <CATiledLayerDelegate><CALayerDelegate> delegate;

@end
