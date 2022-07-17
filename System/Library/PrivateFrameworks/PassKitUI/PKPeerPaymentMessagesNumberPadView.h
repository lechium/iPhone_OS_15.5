//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKPeerPaymentNumberPadActionButton;

@interface PKPeerPaymentMessagesNumberPadView : UIView
{
    UIView *_buttonContainerView;	// 8 = 0x8
    PKPeerPaymentNumberPadActionButton *_buttons[4][3];	// 16 = 0x10
    _Bool _enabled;	// 112 = 0x70
    CDUnknownBlockType _actionHandler;	// 120 = 0x78
}

+ (struct CGSize)referenceSize;	// IMP=0x0000000000189757
- (void).cxx_destruct;	// IMP=0x0000000000189da8
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)_handleActionButton:(id)arg1;	// IMP=0x0000000000189d00
- (id)_buttonForAction:(unsigned long long)arg1;	// IMP=0x0000000000189c20
- (void)layoutSubviews;	// IMP=0x00000000001899c9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000189972
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001897ef
- (id)init;	// IMP=0x0000000000189789

@end
