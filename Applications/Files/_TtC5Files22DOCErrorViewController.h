//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIButton, UILabel, UIStackView;

@interface _TtC5Files22DOCErrorViewController
{
    MISSING_TYPE *titleLabel;	// 144 = 0x90
    MISSING_TYPE *descriptionLabel;	// 152 = 0x98
    MISSING_TYPE *actionButton;	// 160 = 0xa0
    MISSING_TYPE *stackView;	// 168 = 0xa8
    MISSING_TYPE *shouldPresentAuthenticationUI;	// 176 = 0xb0
    MISSING_TYPE *error;	// 184 = 0xb8
    MISSING_TYPE *source;	// 192 = 0xc0
    MISSING_TYPE *location;	// 200 = 0xc8
    MISSING_TYPE *authenticationAction;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00400000001b5bb0
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000001b5aa0
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00100000001b5470
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001b5430
- (void)retryButtonTappedWithSender:(id)arg1;	// IMP=0x00100000001b5320
- (void)viewLayoutMarginsDidChange;	// IMP=0x00100000001b4f90
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001b4f10
- (void)viewDidLoad;	// IMP=0x00100000001b4ee0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b2c70
@property(nonatomic, retain) UIStackView *stackView; // @synthesize stackView;
@property(nonatomic, retain) UIButton *actionButton; // @synthesize actionButton;
@property(nonatomic, retain) UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;

@end
