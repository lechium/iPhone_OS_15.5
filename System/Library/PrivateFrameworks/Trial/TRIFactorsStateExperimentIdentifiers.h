//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>

@class NSString;

@interface TRIFactorsStateExperimentIdentifiers : NSObject <NSCopying>
{
    int _deploymentId;	// 8 = 0x8
    NSString *_experimentId;	// 16 = 0x10
    NSString *_treatmentId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002b8de
@property(readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(readonly, nonatomic) int deploymentId; // @synthesize deploymentId=_deploymentId;
@property(readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (id)init;	// IMP=0x000000000002b8bb
- (id)description;	// IMP=0x000000000002b82f
- (unsigned long long)hash;	// IMP=0x000000000002b7d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b76e
- (_Bool)isEqualToIdentifiers:(id)arg1;	// IMP=0x000000000002b614
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b609
- (id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2 treatmentId:(id)arg3;	// IMP=0x000000000002b4f2
- (id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2;	// IMP=0x000000000002b4dd

@end

