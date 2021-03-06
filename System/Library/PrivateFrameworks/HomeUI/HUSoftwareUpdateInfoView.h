//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUInlineWebContainerViewDelegate-Protocol.h>
#import <HomeUI/UIScrollViewDelegate-Protocol.h>

@class HFItem, HUInlineWebContainerView, HUSoftwareUpdateAnimatedIcon, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIStackView;
@protocol HUResizableCellDelegate, HUSoftwareUpdateInternalResizingDelegate;

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol>
{
    HFItem *_item;	// 8 = 0x8
    id <HUSoftwareUpdateInternalResizingDelegate> _internalViewResizingDelegate;	// 16 = 0x10
    HUSoftwareUpdateAnimatedIcon *_animatedGearView;	// 24 = 0x18
    UIImage *_gearBackgroundImage;	// 32 = 0x20
    UIImageView *_gearBackgroundImageView;	// 40 = 0x28
    UIStackView *_labelStackView;	// 48 = 0x30
    UILabel *_updateNameLabel;	// 56 = 0x38
    UILabel *_publisherNameLabel;	// 64 = 0x40
    UILabel *_sizeLabel;	// 72 = 0x48
    HUInlineWebContainerView *_releaseNotesSummaryView;	// 80 = 0x50
    NSLayoutConstraint *_releaseNotesHeightConstraint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000271805
@property(retain, nonatomic) NSLayoutConstraint *releaseNotesHeightConstraint; // @synthesize releaseNotesHeightConstraint=_releaseNotesHeightConstraint;
@property(retain, nonatomic) HUInlineWebContainerView *releaseNotesSummaryView; // @synthesize releaseNotesSummaryView=_releaseNotesSummaryView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *publisherNameLabel; // @synthesize publisherNameLabel=_publisherNameLabel;
@property(retain, nonatomic) UILabel *updateNameLabel; // @synthesize updateNameLabel=_updateNameLabel;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) UIImageView *gearBackgroundImageView; // @synthesize gearBackgroundImageView=_gearBackgroundImageView;
@property(retain, nonatomic) UIImage *gearBackgroundImage; // @synthesize gearBackgroundImage=_gearBackgroundImage;
@property(retain, nonatomic) HUSoftwareUpdateAnimatedIcon *animatedGearView; // @synthesize animatedGearView=_animatedGearView;
@property(nonatomic) __weak id <HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate; // @synthesize internalViewResizingDelegate=_internalViewResizingDelegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1;	// IMP=0x0000000000271654
- (void)layoutSubviews;	// IMP=0x0000000000271580
- (void)_updateReleaseNotesHeightIfNeeded;	// IMP=0x000000000027147c
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x000000000027123b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002700c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

