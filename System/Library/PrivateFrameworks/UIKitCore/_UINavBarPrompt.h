//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavBarPrompt
{
    UILabel *_label;	// 8 = 0x8
    UINavigationBar *_navBar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000170ea1
- (void)layoutSubviews;	// IMP=0x0000000000170d35
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;	// IMP=0x0000000000170a33
- (struct CGRect)promptBounds;	// IMP=0x00000000001709f5
- (struct CGRect)_labelFrame;	// IMP=0x00000000001708d2
@property(copy, nonatomic) NSString *prompt;
- (id)initWithNavBar:(id)arg1;	// IMP=0x00000000001706b4

@end

