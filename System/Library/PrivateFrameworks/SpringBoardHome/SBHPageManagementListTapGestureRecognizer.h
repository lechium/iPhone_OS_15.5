//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface SBHPageManagementListTapGestureRecognizer : UIGestureRecognizer
{
    UITouch *_activeTouch;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008f6e
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000008f03
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000008e19
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000008d2f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000008c48
- (void)reset;	// IMP=0x0000000000008c05

@end

