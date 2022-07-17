//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSArray;
@protocol _TVMenuBarStackViewDelegate;

@interface _TVMenuBarStackView : UIStackView
{
    id <_TVMenuBarStackViewDelegate> _delegate;	// 8 = 0x8
    unsigned long long _selectedIndex;	// 16 = 0x10
    NSArray *_tabBarItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001bf4d
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <_TVMenuBarStackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureView;	// IMP=0x000000000001be57
- (void)_buttonEventTouchUpInside:(id)arg1;	// IMP=0x000000000001bbe4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b6f3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b696

@end
