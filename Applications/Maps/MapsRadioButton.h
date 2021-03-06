//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIButton;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface MapsRadioButton : UIControl
{
    UIButton *_button;	// 8 = 0x8
    int _controlSize;	// 16 = 0x10
    id <NSObject><NSCopying> _groupIdentifier;	// 24 = 0x18
}

+ (id)buttonWithGroupIdentifier:(id)arg1;	// IMP=0x0040000000259e26
- (void).cxx_destruct;	// IMP=0x002000000025a633
@property(nonatomic) int controlSize; // @synthesize controlSize=_controlSize;
@property(copy, nonatomic) id <NSObject><NSCopying> groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000025a600
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000025a5ea
- (double)sizingLength;	// IMP=0x001000000025a5c6
- (void)_buttonTapped:(id)arg1;	// IMP=0x001000000025a58e
- (void)_otherButtonDidChange:(id)arg1;	// IMP=0x001000000025a460
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000259ea3

@end

