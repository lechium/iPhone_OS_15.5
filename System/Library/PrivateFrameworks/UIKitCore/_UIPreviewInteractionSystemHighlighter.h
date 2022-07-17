//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionHighlighting-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting>
{
    _Bool _blinderViewEnabled;	// 8 = 0x8
    UIView *_initialSnapshotView;	// 16 = 0x10
    UIView *_updatedSnapshotView;	// 24 = 0x18
    UIView *_blinderView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c29d34
@property(retain, nonatomic) UIView *blinderView; // @synthesize blinderView=_blinderView;
@property(nonatomic) _Bool blinderViewEnabled; // @synthesize blinderViewEnabled=_blinderViewEnabled;
@property(retain, nonatomic) UIView *updatedSnapshotView; // @synthesize updatedSnapshotView=_updatedSnapshotView;
@property(retain, nonatomic) UIView *initialSnapshotView; // @synthesize initialSnapshotView=_initialSnapshotView;
- (id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(_Bool)arg2;	// IMP=0x0000000000c29bc4
- (void)finalizeHighlightForPreviewingContext:(id)arg1;	// IMP=0x0000000000c29b1c
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;	// IMP=0x0000000000c2960f
- (void)prepareHighlightWithPreviewingContext:(id)arg1;	// IMP=0x0000000000c2956d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
