//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PaperKit/UIContextMenuInteractionDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23CanvasElementResizeView : UIView <UIContextMenuInteractionDelegate>
{
    MISSING_TYPE *resizeHandles;	// 8 = 0x8
    MISSING_TYPE *borderView;	// 16 = 0x10
    MISSING_TYPE *canvas;	// 24 = 0x18
    MISSING_TYPE *contextMenuInteraction;	// 32 = 0x20
    MISSING_TYPE *resizingCanvasElements;	// 40 = 0x28
    MISSING_TYPE *hasContextMenuInteractionVisible;	// 48 = 0x30
    MISSING_TYPE *hasDraggingCanvasElement;	// 49 = 0x31
    MISSING_TYPE *resizeOriginalFrame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000ccc80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ccc20
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000ccb70
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000cca50
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000cc940
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000cc8c0
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000000cc570
- (void)tapped:(id)arg1;	// IMP=0x00000000000cba20
- (void)dragMoved:(id)arg1;	// IMP=0x00000000000cb9d0
- (void)resizeHandleMoved:(id)arg1;	// IMP=0x00000000000ca890
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c8de0
- (void)layoutSubviews;	// IMP=0x00000000000c88c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7c50

@end

