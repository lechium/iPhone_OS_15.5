//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC16MagnifierSupport12MFInsetLabel : UILabel
{
    MISSING_TYPE *topInset;	// 8 = 0x8
    MISSING_TYPE *leftInset;	// 16 = 0x10
    MISSING_TYPE *bottomInset;	// 24 = 0x18
    MISSING_TYPE *rightInset;	// 32 = 0x20
}

- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000df0b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000df000
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000deee0
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x00000000000dedf0

@end

