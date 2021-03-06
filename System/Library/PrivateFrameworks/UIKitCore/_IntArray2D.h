//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IntArray2D : NSObject
{
    long long *_arrayData;	// 8 = 0x8
    unsigned long long _iSize;	// 16 = 0x10
    unsigned long long _jSize;	// 24 = 0x18
    _Bool _shouldBoundsCheck;	// 32 = 0x20
}

+ (id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;	// IMP=0x0000000000a1c00e
@property(nonatomic) _Bool shouldBoundsCheck; // @synthesize shouldBoundsCheck=_shouldBoundsCheck;
@property(readonly, nonatomic) unsigned long long jSize; // @synthesize jSize=_jSize;
@property(readonly, nonatomic) unsigned long long iSize; // @synthesize iSize=_iSize;
- (void):(unsigned long long)arg1:(unsigned long long)arg2 newValue:(long long)arg3;	// IMP=0x0000000000a1c42a
- (long long):(unsigned long long)arg1:(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3;	// IMP=0x0000000000a1c3d8
- (long long):(unsigned long long)arg1:(unsigned long long)arg2;	// IMP=0x0000000000a1c39d
- (void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;	// IMP=0x0000000000a1c2dd
- (_Bool)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;	// IMP=0x0000000000a1c2c6
- (id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;	// IMP=0x0000000000a1c1e7
- (id)description;	// IMP=0x0000000000a1c083
- (void)dealloc;	// IMP=0x0000000000a1c049

@end

