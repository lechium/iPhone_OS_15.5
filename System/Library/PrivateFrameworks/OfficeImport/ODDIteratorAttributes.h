//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODDIteratorAttributes : NSObject
{
    int mAxis;	// 8 = 0x8
    int mPointType;	// 12 = 0xc
    _Bool mHideLastTransition;	// 16 = 0x10
    int mStart;	// 20 = 0x14
    unsigned int mCount;	// 24 = 0x18
    int mStep;	// 28 = 0x1c
}

- (void)setStep:(int)arg1;	// IMP=0x0000000000335dd0
- (int)step;	// IMP=0x0000000000335dc7
- (void)setCount:(unsigned int)arg1;	// IMP=0x0000000000335dbe
- (unsigned int)count;	// IMP=0x0000000000335db5
- (void)setStart:(int)arg1;	// IMP=0x0000000000335dac
- (int)start;	// IMP=0x0000000000335da3
- (void)setHideLastTransition:(_Bool)arg1;	// IMP=0x0000000000335d9a
- (_Bool)hideLastTransition;	// IMP=0x0000000000335d91
- (void)setPointType:(int)arg1;	// IMP=0x0000000000335d88
- (int)pointType;	// IMP=0x0000000000335d7f
- (void)setAxis:(int)arg1;	// IMP=0x0000000000335d76
- (int)axis;	// IMP=0x0000000000335d6d

@end

