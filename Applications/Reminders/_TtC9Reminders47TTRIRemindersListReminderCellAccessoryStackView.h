//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerStackView.h>

@class MISSING_TYPE, UIView;

@interface _TtC9Reminders47TTRIRemindersListReminderCellAccessoryStackView : NUIContainerStackView
{
    MISSING_TYPE *accessoryDelegate;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 24 = 0x18
    MISSING_TYPE *flaggedImageView;	// 344 = 0x158
    MISSING_TYPE *infoButton;	// 352 = 0x160
    MISSING_TYPE *subtaskCountLabel;	// 360 = 0x168
    MISSING_TYPE *subtaskDisclosure;	// 368 = 0x170
    MISSING_TYPE *appLinkButton;	// 376 = 0x178
    MISSING_TYPE *assigneeView;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00400000001a86a0
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x00100000001a8640
- (void)appLinkButtonAction:(id)arg1;	// IMP=0x00100000001a78e0
- (void)infoButtonAction:(id)arg1;	// IMP=0x00100000001a7840
- (void)assigneeViewAction:(id)arg1;	// IMP=0x00100000001a7720
- (id);	// IMP=0x00100000001a7670
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00100000001a75f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001a7540
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001a7510

// Remaining properties
@property(nonatomic, readonly) UIView *viewForFirstBaselineLayout;

@end

