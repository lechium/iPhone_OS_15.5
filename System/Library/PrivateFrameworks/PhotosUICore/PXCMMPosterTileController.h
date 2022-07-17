//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXCMMViewModel, PXMomentShareStatusPresentation, UIView;

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>
{
    unsigned long long _activityType;	// 8 = 0x8
    PXCMMViewModel *_viewModel;	// 16 = 0x10
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;	// 24 = 0x18
    PXCMMPosterHeaderView *_posterHeaderView;	// 32 = 0x20
}

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;	// IMP=0x0000000000021b82
- (void).cxx_destruct;	// IMP=0x00000000000219d7
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000218ff
- (void)_updateStatusString;	// IMP=0x00000000000217fc
- (void)_updateContent;	// IMP=0x000000000002177a
- (void)prepareForReuse;	// IMP=0x0000000000021762
- (void)becomeReusable;	// IMP=0x0000000000021747
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x0000000000021741
@property(readonly, nonatomic) UIView *view;
- (id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3;	// IMP=0x00000000000215ff
- (id)init;	// IMP=0x0000000000021585

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
