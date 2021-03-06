//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UITextCanvas-Protocol.h>
#import <UIKitCore/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, _UISceneDisplayLink, _UITextTiledLayer;
@protocol _UITextCanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextCanvasView <_UITextTiledLayerDelegate, _UITextCanvas>
{
    NSMutableSet *_ghostedRanges;	// 120 = 0x78
    NSMutableSet *_invisibleRanges;	// 128 = 0x80
    NSArray *_maskedRects;	// 136 = 0x88
    _UISceneDisplayLink *_sceneDisplayLink;	// 144 = 0x90
    id <_UITextCanvasContext> _context;	// 152 = 0x98
}

+ (Class)layerClass;	// IMP=0x000000000104b38a
- (void).cxx_destruct;	// IMP=0x000000000104c79a
@property(nonatomic) __weak id <_UITextCanvasContext> context; // @synthesize context=_context;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000104c639
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x000000000104c633
- (void)setNeedsLayout;	// IMP=0x000000000104c5e9
- (void)removeInvisibleRange:(struct _NSRange)arg1;	// IMP=0x000000000104c550
- (void)addInvisibleRange:(struct _NSRange)arg1;	// IMP=0x000000000104c49f
- (void)removeAllGhostedRanges;	// IMP=0x000000000104c44b
- (void)addGhostedRange:(struct _NSRange)arg1;	// IMP=0x000000000104c39a
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;	// IMP=0x000000000104ba8b
@property(nonatomic, setter=_setDrawsDebugBaselines:) _Bool _drawsDebugBaselines;
- (void)resumeTiling;	// IMP=0x000000000104b94b
- (void)suspendTiling;	// IMP=0x000000000104b90e
@property(nonatomic) double maxTileHeight;
@property(nonatomic, getter=isTilingEnabled) _Bool tilingEnabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000104b78d
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000104b73b
- (void)_updateTilingViewportLayer;	// IMP=0x000000000104b6ac
- (void)_updateTilingViewportBookkeeping;	// IMP=0x000000000104b566
- (void)_windowDidMoveToScreen;	// IMP=0x000000000104b554
- (void)didMoveToWindow;	// IMP=0x000000000104b513
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000104b3db
- (_Bool)_enableAutoConstraining;	// IMP=0x000000000104b3d3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000104b311

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UITextTiledLayer *layer; // @dynamic layer;
@property(readonly) Class superclass;

@end

