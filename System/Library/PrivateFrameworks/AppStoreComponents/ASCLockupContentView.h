//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <AppStoreComponents/ASCLockupPresenterView-Protocol.h>
#import <AppStoreComponents/ASCOfferButtonDelegate-Protocol.h>
#import <AppStoreComponents/ASCOfferPresenterView-Protocol.h>

@class ASCArtworkView, ASCLockupTheme, ASCOfferButton, ASCOfferTheme, ASCSkeletonLabel, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface ASCLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>
{
    NSString *_size;	// 8 = 0x8
    ASCOfferTheme *_offerTheme;	// 16 = 0x10
    ASCLockupTheme *_lockupTheme;	// 24 = 0x18
    ASCArtworkView *_iconArtworkView;	// 32 = 0x20
    ASCSkeletonLabel *_titleLabel;	// 40 = 0x28
    ASCSkeletonLabel *_subtitleLabel;	// 48 = 0x30
    ASCOfferButton *_offerButton;	// 56 = 0x38
    UILabel *_headingLabelIfLoaded;	// 64 = 0x40
    UILabel *_offerStatusLabelIfLoaded;	// 72 = 0x48
}

+ (_Bool)isOfferButtonFixedHeightForSize:(id)arg1;	// IMP=0x0000000000053b78
+ (_Bool)isOfferButtonOnlyLockupForSize:(id)arg1;	// IMP=0x000000000005357d
- (void).cxx_destruct;	// IMP=0x000000000005689d
@property(readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // @synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded;
@property(readonly, nonatomic) UILabel *headingLabelIfLoaded; // @synthesize headingLabelIfLoaded=_headingLabelIfLoaded;
@property(readonly, nonatomic) ASCOfferButton *offerButton; // @synthesize offerButton=_offerButton;
@property(readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) ASCSkeletonLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ASCArtworkView *iconArtworkView; // @synthesize iconArtworkView=_iconArtworkView;
@property(copy, nonatomic) ASCLockupTheme *lockupTheme; // @synthesize lockupTheme=_lockupTheme;
@property(copy, nonatomic) ASCOfferTheme *offerTheme; // @synthesize offerTheme=_offerTheme;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3;	// IMP=0x00000000000563db
- (void)endOfferModalState;	// IMP=0x000000000005639e
- (void)beginOfferModalStateWithCancelBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005632c
- (void)setOfferStatus:(id)arg1;	// IMP=0x00000000000561da
- (void)setOfferInteractive:(_Bool)arg1;	// IMP=0x000000000005618e
- (void)setOfferEnabled:(_Bool)arg1;	// IMP=0x0000000000056142
- (void)setOfferMetadata:(id)arg1;	// IMP=0x000000000005601b
- (id)saveOfferState;	// IMP=0x0000000000055f65
- (void)setLoading:(_Bool)arg1;	// IMP=0x0000000000055d5b
- (void)setPrefersRightToLeftLayout:(_Bool)arg1;	// IMP=0x0000000000055d0d
- (void)setSubtitle:(id)arg1;	// IMP=0x0000000000055c67
- (void)setTitle:(id)arg1;	// IMP=0x0000000000055bc1
- (void)setHeading:(id)arg1;	// IMP=0x0000000000055a22
- (void)setIconImage:(id)arg1 withDecoration:(id)arg2;	// IMP=0x0000000000055935
- (void)removeOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000558b7
- (void)addOfferTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000055839
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005561f
- (void)layoutSubviews;	// IMP=0x0000000000055514
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000055369
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000055347
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000000552c6
- (id)makeLayout;	// IMP=0x0000000000055157
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000054fe8
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000054f71
@property(copy, nonatomic) UIColor *loadingColor;
@property(readonly, nonatomic) struct CGSize preferredIconSize;
@property(readonly, nonatomic) UILabel *headingLabel;
@property(readonly, nonatomic) UILabel *offerStatusLabel;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000546d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000546a5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000053bdc
@property(readonly, nonatomic) _Bool isOfferButtonOnlyLockup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

