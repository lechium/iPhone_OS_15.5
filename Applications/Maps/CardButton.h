//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIMenu;

__attribute__((visibility("hidden")))
@interface CardButton : UIView
{
    UIButton *_actionButton;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007d9b49
@property(retain, nonatomic) UIMenu *menu;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x00100000007d9af2
@property(readonly, nonatomic) __weak UIView *viewForVisualAlignment;
- (id)initWithType:(unsigned long long)arg1 blurred:(_Bool)arg2 tintColor:(id)arg3;	// IMP=0x00100000007d8b6f
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00100000007d8b58

@end
