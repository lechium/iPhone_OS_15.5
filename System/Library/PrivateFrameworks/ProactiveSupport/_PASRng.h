//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASRng : NSObject
{
    struct {
        unsigned long long s[2];
    } _state;	// 8 = 0x8
}

- (double)nextDouble;	// IMP=0x00000000000232c9
- (float)nextFloat;	// IMP=0x0000000000023283
- (unsigned long long)next;	// IMP=0x0000000000023251
- (id)initWithSeed:(unsigned long long)arg1;	// IMP=0x0000000000023194
- (id)init;	// IMP=0x0000000000023147

@end

