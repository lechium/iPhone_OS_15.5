//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol ICInkToolPickerResponderDelegate;

@interface ICInkToolPickerResponder : UIView
{
    _Bool _preventFirstResponder;	// 8 = 0x8
    id <ICInkToolPickerResponderDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a06c6
@property(nonatomic) _Bool preventFirstResponder; // @synthesize preventFirstResponder=_preventFirstResponder;
@property(nonatomic) __weak id <ICInkToolPickerResponderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)inputAssistantItem;	// IMP=0x00000000000a05ff
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000a05ea

@end
