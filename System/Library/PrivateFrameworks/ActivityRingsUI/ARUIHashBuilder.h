//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIHashBuilder : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
}

+ (id)builder;	// IMP=0x0000000000011683
- (void)appendObject:(id)arg1;	// IMP=0x000000000001197d
- (void)appendFloat4x4:(CDStruct_14d5dc5e)arg1;	// IMP=0x0000000000011925
- (void)appendFloat4: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000118c2
- (void)appendFloat2: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000011880
- (void)appendDouble:(double)arg1;	// IMP=0x000000000001184f
- (void)appendCGRect:(struct CGRect)arg1;	// IMP=0x00000000000117f3
- (void)appendTimeInterval:(double)arg1;	// IMP=0x00000000000117c2
- (void)appendCGFloat:(double)arg1;	// IMP=0x0000000000011791
- (void)appendFloat:(float)arg1;	// IMP=0x0000000000011760
- (unsigned long long)hashForNSTimeInterval:(double)arg1;	// IMP=0x0000000000011755
- (unsigned long long)hashForDouble:(double)arg1;	// IMP=0x000000000001174a
- (unsigned long long)hashForCGFloat:(double)arg1;	// IMP=0x000000000001173f
- (unsigned long long)hashForFloat:(float)arg1;	// IMP=0x0000000000011735
- (void)appendInt:(long long)arg1;	// IMP=0x000000000001171a
- (void)appendUnsignedInt:(unsigned long long)arg1;	// IMP=0x00000000000116ff
- (void)appendBool:(_Bool)arg1;	// IMP=0x00000000000116e2
- (unsigned long long)hash;	// IMP=0x00000000000116d8
- (id)init;	// IMP=0x000000000001169c

@end

