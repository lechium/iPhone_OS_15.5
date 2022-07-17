//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, UIButton, UIListContentView, UIView;
@protocol ConferenceCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailConferenceCell
{
    UIButton *_openURLButton;	// 24 = 0x18
    UIButton *_shareButton;	// 32 = 0x20
    unsigned long long _actionButtonType;	// 40 = 0x28
    UIListContentView *_listView;	// 48 = 0x30
    UIView *_topSeparator;	// 56 = 0x38
    UIView *_bottomSeparator;	// 64 = 0x40
    NSArray *_constraints;	// 72 = 0x48
    NSObject<ConferenceCellDelegate> *_delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000020231
@property(nonatomic) __weak NSObject<ConferenceCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_share:(id)arg1;	// IMP=0x000000000001ff31
- (void)_openURL;	// IMP=0x000000000001f818
- (void)tintColorDidChange;	// IMP=0x000000000001f7cc
- (void)_updateActionButtonWithType:(unsigned long long)arg1;	// IMP=0x000000000001f4f4
- (id)_buttonConfigForCurrentTime;	// IMP=0x000000000001f315
- (void)updateListConfigWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x000000000001f097
- (_Bool)update;	// IMP=0x000000000001ebbd
- (void)_createConstraints;	// IMP=0x000000000001dae0
- (void)_createViews;	// IMP=0x000000000001d5ab
- (id)_defaultListConfiguration;	// IMP=0x000000000001d3de
- (double)_separatorHeight;	// IMP=0x000000000001d390
- (_Bool)_buttonsShouldUseSeparateLine;	// IMP=0x000000000001d2ac
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;	// IMP=0x000000000001d22c

@end
