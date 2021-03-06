//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, WFRowOfIconsView;

@interface WFAutomationNotificationContentView : UIView
{
    UIStackView *_stackView;	// 8 = 0x8
    WFRowOfIconsView *_actionIconsView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000152088
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WFRowOfIconsView *actionIconsView; // @synthesize actionIconsView=_actionIconsView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)updateUIFromNotification:(id)arg1;	// IMP=0x0000000000151eb6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000151a6b

@end

