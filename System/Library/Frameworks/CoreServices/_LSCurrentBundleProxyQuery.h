//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSCurrentBundleProxyQuery
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000068cf7
+ (double)cacheInterval;	// IMP=0x0000000000068a75
+ (id)currentBundleProxyQuery;	// IMP=0x00000000000689e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000068d2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000068cff
- (unsigned long long)hash;	// IMP=0x0000000000068ca4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068c1d
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068a83

@end

