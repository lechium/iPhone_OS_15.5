//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>

@class NSString;

@interface TRIRolloutIdentifiers : NSObject <NSCopying>
{
    int _deploymentId;	// 8 = 0x8
    NSString *_rolloutId;	// 16 = 0x10
    NSString *_factorPackId;	// 24 = 0x18
    NSString *_rampId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003cf6a
@property(readonly, nonatomic) NSString *rampId; // @synthesize rampId=_rampId;
@property(readonly, nonatomic) NSString *factorPackId; // @synthesize factorPackId=_factorPackId;
@property(readonly, nonatomic) int deploymentId; // @synthesize deploymentId=_deploymentId;
@property(readonly, nonatomic) NSString *rolloutId; // @synthesize rolloutId=_rolloutId;
- (id)init;	// IMP=0x000000000003cf3d
- (id)description;	// IMP=0x000000000003cea9
- (unsigned long long)hash;	// IMP=0x000000000003ce38
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003cdd0
- (_Bool)isEqualToRolloutIdentifiers:(id)arg1;	// IMP=0x000000000003cbf3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003cbe8
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2 factorPackId:(id)arg3 rampId:(id)arg4;	// IMP=0x000000000003cb27
- (id)initWithRolloutId:(id)arg1 deploymentId:(int)arg2 factorPackId:(id)arg3;	// IMP=0x000000000003cb12

@end
