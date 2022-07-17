//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@protocol CAMMachineReadableCodeButtonDelegate;

@interface CAMMachineReadableCodeButton : UIButton
{
    _Bool _dismissable;	// 8 = 0x8
    id <CAMMachineReadableCodeButtonDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a1113
@property(nonatomic) __weak id <CAMMachineReadableCodeButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDismissable) _Bool dismissable; // @synthesize dismissable=_dismissable;
- (void)_didTapDismiss:(id)arg1;	// IMP=0x00000000000a108a
- (void)updateConfiguration;	// IMP=0x00000000000a0cee
- (void)layoutSubviews;	// IMP=0x00000000000a0ba6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000a0ab4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a0825

@end
