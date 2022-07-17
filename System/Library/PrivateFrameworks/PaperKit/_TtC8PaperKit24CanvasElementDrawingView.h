//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKAttachmentView.h>

@class MISSING_TYPE, PKTiledView, UIView;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit24CanvasElementDrawingView : PKAttachmentView
{
    MISSING_TYPE *canvasElementView;	// 8 = 0x8
    MISSING_TYPE *liveStreamingDisplayLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001cc80
- (void)setAttachmentChromeVisible:(_Bool)arg1 animated:(_Bool)arg2 highlightBackground:(_Bool)arg3;	// IMP=0x000000000001cb80
- (_Bool)hitChrome:(struct CGPoint)arg1 isStylus:(_Bool)arg2;	// IMP=0x000000000001cb20
@property(nonatomic, readonly) UIView *attachmentContainerView;
- (void)updateDrawingHeight:(double)arg1;	// IMP=0x000000000001c8b0
- (double)heightFromDrawing:(id)arg1 delta:(double)arg2;	// IMP=0x000000000001c7f0
@property(nonatomic, readonly) _Bool isAtEndOfDocument;
- (void)updateFrameForTextContainer;	// IMP=0x000000000001c5c0
- (void)didEndDrawing;	// IMP=0x000000000001c4c0
- (void)drawingDidEraseStrokes;	// IMP=0x000000000001c420
- (void)updateLiveDrawing;	// IMP=0x000000000001c3f0
- (void)didBeginDrawing;	// IMP=0x000000000001c140
- (void)updateTileContainerViewFrame;	// IMP=0x000000000001be60
@property(nonatomic, readonly) struct CGAffineTransform drawingTransform;
- (void)drawingDidChangeVisibleStrokes:(_Bool)arg1;	// IMP=0x000000000001bb10
@property(nonatomic, readonly) PKTiledView *tiledView;
- (_Bool)resignFirstResponder;	// IMP=0x000000000001b880
- (_Bool)becomeFirstResponder;	// IMP=0x000000000001b690
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)didMoveToWindow;	// IMP=0x000000000001b5c0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000001b340
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b2e0
- (id)initWithFrame:(struct CGRect)arg1 drawing:(id)arg2;	// IMP=0x000000000001b230

@end
