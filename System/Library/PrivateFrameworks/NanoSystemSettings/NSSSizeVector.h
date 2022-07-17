//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoSystemSettings/NSSecureCoding-Protocol.h>

@interface NSSSizeVector : NSObject <NSSecureCoding>
{
    long long _fixed;	// 8 = 0x8
    long long _docsAndData;	// 16 = 0x10
    long long _purgeable;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d1cb
+ (id)fixed:(long long)arg1 dynamic:(long long)arg2 purgeable:(long long)arg3;	// IMP=0x000000000001d185
+ (id)fixed:(long long)arg1 docsAndData:(long long)arg2 purgeable:(long long)arg3;	// IMP=0x000000000001d142
+ (id)docsAndData:(long long)arg1 purgeable:(long long)arg2;	// IMP=0x000000000001d128
+ (id)fixed:(long long)arg1 purgeable:(long long)arg2;	// IMP=0x000000000001d111
+ (id)fixed:(long long)arg1 docsAndData:(long long)arg2;	// IMP=0x000000000001d0fc
+ (id)purgeable:(long long)arg1;	// IMP=0x000000000001d0e3
+ (id)docsAndData:(long long)arg1;	// IMP=0x000000000001d0c9
+ (id)fixed:(long long)arg1;	// IMP=0x000000000001d0b2
+ (id)zero;	// IMP=0x000000000001cf45
@property(readonly) long long purgeable; // @synthesize purgeable=_purgeable;
@property(readonly) long long docsAndData; // @synthesize docsAndData=_docsAndData;
@property(readonly) long long fixed; // @synthesize fixed=_fixed;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d256
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d1d3
- (id)initWithFixed:(long long)arg1 docsAndData:(long long)arg2 purgeable:(long long)arg3;	// IMP=0x000000000001d05f
- (id)plus:(id)arg1;	// IMP=0x000000000001cfac
@property(readonly) long long userTotal;
@property(readonly) long long dynamic;
@property(readonly) _Bool isZero;
- (unsigned long long)hash;	// IMP=0x000000000001cee2
- (_Bool)isEqualToSizeVector:(id)arg1;	// IMP=0x000000000001ce5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cdf4

@end
