//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PKCanvasView;

@interface PKCanvasAttachmentView
{
    _Bool __wantsFullyRenderedNotification;	// 8 = 0x8
    PKCanvasView *_canvasView;	// 16 = 0x10
    double _drawingWidth;	// 24 = 0x18
    NSMutableArray *_fullyRenderedCompletionBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020b7bf
@property(retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks; // @synthesize fullyRenderedCompletionBlocks=_fullyRenderedCompletionBlocks;
@property(nonatomic) double drawingWidth; // @synthesize drawingWidth=_drawingWidth;
@property(nonatomic) _Bool _wantsFullyRenderedNotification; // @synthesize _wantsFullyRenderedNotification=__wantsFullyRenderedNotification;
@property(nonatomic) __weak PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (struct CGAffineTransform)drawingTransform;	// IMP=0x000000000020b67e
- (_Bool)disableTileAnimations;	// IMP=0x000000000020b610
- (void)fullyRendered;	// IMP=0x000000000020b5d3
- (_Bool)wantsFullyRendered;	// IMP=0x000000000020b590
- (void)drawingDidChangeVisibleStrokes:(_Bool)arg1;	// IMP=0x000000000020b526

@end
