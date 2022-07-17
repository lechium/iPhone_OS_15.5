//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/NSCopying-Protocol.h>

@class NSArray, NSData;

@interface _PFDQDECallSite : NSObject <NSCopying>
{
    NSData *_addresses;	// 8 = 0x8
    NSArray *_symbols;	// 16 = 0x10
}

+ (id)currentCallSite;	// IMP=0x00000000000172d4
+ (void)initialize;	// IMP=0x0000000000017293
- (void).cxx_destruct;	// IMP=0x000000000001726b
- (id)backtraceWithPrefix:(id)arg1;	// IMP=0x0000000000017184
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001716a
- (unsigned long long)hash;	// IMP=0x0000000000017154
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017149
- (id)initWithAddresses:(id)arg1;	// IMP=0x00000000000170de

@end
