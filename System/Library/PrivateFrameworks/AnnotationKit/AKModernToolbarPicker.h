//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class AKController, UIStackView;

@interface AKModernToolbarPicker : UIControl
{
    UIStackView *_stackview;	// 8 = 0x8
    AKController *_controller;	// 16 = 0x10
    long long _currentTag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000078ff5
@property(nonatomic) long long currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIStackView *stackview; // @synthesize stackview=_stackview;
- (void)revalidateItems:(id)arg1;	// IMP=0x0000000000078f8c
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;	// IMP=0x0000000000078b54

@end
