//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CKLargeTitleAccessoryView : UIView
{
    NSArray *_accessoryButtons;	// 8 = 0x8
}

+ (id)newOptionsButton;	// IMP=0x000000000000a856
+ (id)newComposeButton;	// IMP=0x000000000000a558
- (void).cxx_destruct;	// IMP=0x000000000000ab22
@property(retain, nonatomic) NSArray *accessoryButtons; // @synthesize accessoryButtons=_accessoryButtons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000a2d9
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x000000000000a081
- (void)layoutSubviews;	// IMP=0x0000000000009dc1

@end

