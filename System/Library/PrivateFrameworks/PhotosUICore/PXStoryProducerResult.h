//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface PXStoryProducerResult : NSObject
{
    id _object;	// 8 = 0x8
    unsigned long long _flags;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    double _productionDuration;	// 32 = 0x20
}

+ (id)nullResult;	// IMP=0x000000000059fe50
- (void).cxx_destruct;	// IMP=0x000000000059fe28
@property(readonly, nonatomic) double productionDuration; // @synthesize productionDuration=_productionDuration;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (unsigned long long)hash;	// IMP=0x000000000059fd64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059fb94
- (id)description;	// IMP=0x000000000059fac8
@property(readonly, nonatomic) _Bool isDegraded;
- (id)deliveredNowWithRequestTime:(double)arg1;	// IMP=0x000000000059fa7d
- (id)error:(id)arg1;	// IMP=0x000000000059f998
- (id)flags:(unsigned long long)arg1;	// IMP=0x000000000059f98b
- (id)initWithObject:(id)arg1;	// IMP=0x000000000059f931
- (id)init;	// IMP=0x000000000059f8ef

@end
