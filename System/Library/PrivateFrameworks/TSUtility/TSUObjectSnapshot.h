//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSUObjectSnapshot : NSObject
{
    unsigned long long mEntryCount;	// 8 = 0x8
    void **mSnapshot;	// 16 = 0x10
    NSArray *mCompared;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0000000000040e48
- (void)p_clear;	// IMP=0x0000000000040dfd
- (void)compare;	// IMP=0x0000000000040d10
- (void)calibrate:(id)arg1;	// IMP=0x0000000000040c28
- (id)init;	// IMP=0x0000000000040be5

@end

