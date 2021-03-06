//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUCollectionViewCellSeparatorsProtocol-Protocol.h>
#import <HomeUI/HUSoftwareUpdateInternalResizingDelegate-Protocol.h>

@class HFItem, HUSoftwareUpdateInfoView, NSString, UIView;
@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateInfoCollectionViewCell : UICollectionViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>
{
    HUSoftwareUpdateInfoView *_infoView;	// 8 = 0x8
    id <HUResizableCellDelegate> _resizingDelegate;	// 16 = 0x10
    UIView *_topSeparatorView;	// 24 = 0x18
    UIView *_bottomSeparatorView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000272d97
@property(readonly, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(readonly, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
@property(readonly, nonatomic) HUSoftwareUpdateInfoView *infoView; // @synthesize infoView=_infoView;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1;	// IMP=0x0000000000272ceb
@property(nonatomic) _Bool bottomSeparatorVisible;
@property(nonatomic) _Bool topSeparatorVisible;
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x0000000000272b7d
@property(retain, nonatomic) HFItem *item;
- (void)prepareForReuse;	// IMP=0x0000000000272a61
- (void)layoutSubviews;	// IMP=0x000000000027279d
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000027272c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000271f8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

