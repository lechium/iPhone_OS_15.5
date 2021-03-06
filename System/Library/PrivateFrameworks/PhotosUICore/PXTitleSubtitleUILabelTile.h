//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec, PXTitleSubtitleUILabel, UIView;

@interface PXTitleSubtitleUILabelTile : NSObject <PXUIViewBasicTile>
{
    UIView *_view;	// 8 = 0x8
    PXTitleSubtitleUILabel *_label;	// 16 = 0x10
    _Bool _rendersTextAsynchronously;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    PXTitleSubtitleLabelSpec *_labelSpec;	// 48 = 0x30
    long long __animationCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000063d874
@property(nonatomic, setter=_setAnimationCount:) long long _animationCount; // @synthesize _animationCount=__animationCount;
@property(nonatomic) _Bool rendersTextAsynchronously; // @synthesize rendersTextAsynchronously=_rendersTextAsynchronously;
@property(readonly, copy, nonatomic) PXTitleSubtitleLabelSpec *labelSpec; // @synthesize labelSpec=_labelSpec;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;	// IMP=0x000000000063d7f3
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;	// IMP=0x000000000063d7c1
- (void)prepareForReuse;	// IMP=0x000000000063d782
- (void)becomeReusable;	// IMP=0x000000000063d71f
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x000000000063d634
@property(readonly, nonatomic) UIView *view;
- (void)_updateLabelTitleAndSubtitle;	// IMP=0x000000000063d496
@property(readonly, nonatomic) double lastBaseline;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000063d438
- (id)init;	// IMP=0x000000000063d400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

