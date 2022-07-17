//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, RideBookingRideOptionStatus, UIButton;
@protocol RidesharingAppActionCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface RidesharingAppActionCollectionViewCell
{
    id <RidesharingAppActionCollectionViewCellDelegate> _delegate;	// 8 = 0x8
    unsigned long long _titleType;	// 16 = 0x10
    RideBookingRideOptionStatus *_status;	// 24 = 0x18
    UIButton *_actionButton;	// 32 = 0x20
    NSLayoutConstraint *_buttonBaselineToTopConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001a6e32
@property(retain, nonatomic) NSLayoutConstraint *buttonBaselineToTopConstraint; // @synthesize buttonBaselineToTopConstraint=_buttonBaselineToTopConstraint;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) RideBookingRideOptionStatus *status; // @synthesize status=_status;
@property(nonatomic) unsigned long long titleType; // @synthesize titleType=_titleType;
@property(nonatomic) __weak id <RidesharingAppActionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setApplicationName:(id)arg1 titleType:(unsigned long long)arg2;	// IMP=0x00100000001a6b5f
- (void)configureWithRideBookingRideOptionStatus:(id)arg1 titleType:(unsigned long long)arg2;	// IMP=0x00100000001a6ab5
- (void)_updateContentSizeCategoryDependentFontsAndConstraints;	// IMP=0x00100000001a69b5
- (void)_openAppPressed:(id)arg1;	// IMP=0x00100000001a6969
- (void)_setupConstraints;	// IMP=0x00100000001a6656
- (void)updateTheme;	// IMP=0x00100000001a654d
- (void)_setupViews;	// IMP=0x00100000001a6487
- (void)dealloc;	// IMP=0x00100000001a6412
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001a6343

@end
