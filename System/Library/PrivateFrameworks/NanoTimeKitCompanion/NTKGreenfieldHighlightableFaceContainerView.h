//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableSet, NTKFace, NTKFaceViewController;

@interface NTKGreenfieldHighlightableFaceContainerView : UIView
{
    NTKFace *_originalFace;	// 8 = 0x8
    NTKFaceViewController *_faceViewController;	// 16 = 0x10
    UIView *_overlayView;	// 24 = 0x18
    UIView *_highlightedDisplaysContainerView;	// 32 = 0x20
    NSMutableDictionary *_highlightedSlotToDisplayWrapperViewMapping;	// 40 = 0x28
    NSMutableSet *_highlightedSlots;	// 48 = 0x30
    NSMutableDictionary *_slotToTemplateMapping;	// 56 = 0x38
}

+ (id)_createFaceForDisplayingFrom:(id)arg1;	// IMP=0x00000000002b9226
- (void).cxx_destruct;	// IMP=0x00000000002b93cb
- (void)_toggleHighlight:(_Bool)arg1 forComplicationWrapperViewAtSlot:(id)arg2;	// IMP=0x00000000002b8eb3
- (void)_updateTemplateForSlot:(id)arg1;	// IMP=0x00000000002b8dde
- (void)layoutSubviews;	// IMP=0x00000000002b8c11
- (void)setComplicationDisplayViewState:(long long)arg1 forSlot:(id)arg2;	// IMP=0x00000000002b88a0
- (void)setTemplate:(id)arg1 forSlot:(id)arg2;	// IMP=0x00000000002b8834
- (id)initWithFace:(id)arg1;	// IMP=0x00000000002b8333

@end
