//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@interface FCCachePolicy : NSObject <NSCopying>
{
    unsigned long long _cachePolicy;	// 8 = 0x8
    double _maximumCachedAge;	// 16 = 0x10
}

+ (id)cachePolicyWithSoftMaxAge:(double)arg1;	// IMP=0x0000000000145224
+ (id)ignoreCacheCachePolicy;	// IMP=0x00000000001451b6
+ (id)cachedOnlyCachePolicy;	// IMP=0x0000000000145148
+ (id)defaultCachePolicy;	// IMP=0x00000000001450dd
@property(nonatomic) double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014527e

@end
