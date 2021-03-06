//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView
{
    NSString *_personNameString;	// 8 = 0x8
    double _letterSpacing;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000dc6dc0
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000dc6d66
- (long long)legibilityStyle;	// IMP=0x0000000000dc6d20
- (double)extraRightPadding;	// IMP=0x0000000000dc6cda
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000dc6c5e
- (double)resetContentOverlap;	// IMP=0x0000000000dc6bfb
- (id)contentsImage;	// IMP=0x0000000000dc6bc6
- (_Bool)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000000dc682a
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000dc67ac
- (double)standardPadding;	// IMP=0x0000000000dc6775

@end

