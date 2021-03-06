//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SNMLModelCacheKey : NSObject <NSCopying>
{
    NSArray *_keys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001c28a
- (unsigned long long)hash;	// IMP=0x000000000001c274
- (_Bool)isEqualToModelCacheKey:(id)arg1;	// IMP=0x000000000001c25a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c1f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c1c3
- (id)initWithKeys:(id)arg1;	// IMP=0x000000000001c158
- (id)initWithModelClass:(Class)arg1 modelConfiguration:(id)arg2;	// IMP=0x000000000001bfb8

@end

