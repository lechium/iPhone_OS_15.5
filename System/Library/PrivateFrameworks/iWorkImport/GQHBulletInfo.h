//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQHBulletInfo : NSObject
{
    int mType;	// 8 = 0x8
    int mBulletIndent;	// 12 = 0xc
    int mTextIndent;	// 16 = 0x10
    struct __CFString *mChar;	// 24 = 0x18
    _Bool mHasNumber;	// 32 = 0x20
    int mNumber;	// 36 = 0x24
    int mLabelType;	// 40 = 0x28
    GQDSStyle *mStyle;	// 48 = 0x30
}

- (id)style;	// IMP=0x0000000000024fd2
- (void)setStyle:(id)arg1;	// IMP=0x0000000000024fa9
- (int)textIndent;	// IMP=0x0000000000024fa0
- (void)setTextIndent:(int)arg1;	// IMP=0x0000000000024f97
- (int)bulletIndent;	// IMP=0x0000000000024f8e
- (void)setBulletIndent:(int)arg1;	// IMP=0x0000000000024f85
- (struct __CFString *)createTierStringNumber;	// IMP=0x0000000000024f63
- (struct __CFString *)bulletChar;	// IMP=0x0000000000024f59
- (void)setBulletChar:(struct __CFString *)arg1;	// IMP=0x0000000000024f28
- (int)type;	// IMP=0x0000000000024f1f
- (void)setType:(int)arg1;	// IMP=0x0000000000024f16
- (int)labelType;	// IMP=0x0000000000024f0d
- (void)setLabelType:(int)arg1;	// IMP=0x0000000000024f04
- (void)setHasNumber:(_Bool)arg1;	// IMP=0x0000000000024efb
- (_Bool)hasNumber;	// IMP=0x0000000000024ef2
- (int)number;	// IMP=0x0000000000024ee9
- (void)setNumber:(int)arg1;	// IMP=0x0000000000024ee0
- (void)dealloc;	// IMP=0x0000000000024e97

@end
