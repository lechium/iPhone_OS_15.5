//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSString, PHMomentShare, PXMessagesStackView, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, UIActivityIndicatorView;

@interface PXCMMStackBubbleView : UIView <PXAssetsDataSourceManagerObserver>
{
    PXMessagesStackView *_stackView;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    PHMomentShare *_momentShare;	// 24 = 0x18
    PXPhotoKitUIMediaProvider *_mediaProvider;	// 32 = 0x20
    double _maximumHeight;	// 40 = 0x28
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;	// 48 = 0x30
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000057f688
- (void).cxx_destruct;	// IMP=0x000000000057f574
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000057f463
- (void)layoutSubviews;	// IMP=0x000000000057f3a3
- (void)_updateSubviews;	// IMP=0x000000000057f18a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000057ef82
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000057eeff
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000057ee30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
