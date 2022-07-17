//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIRolloutDatabase;
@protocol TRIRolloutTargeting;

@interface TRIRolloutTargetingOperation : NSObject
{
    id <TRIRolloutTargeting> _targeter;	// 8 = 0x8
    TRIRolloutDatabase *_rolloutDatabase;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e7f9c
@property(readonly, nonatomic) TRIRolloutDatabase *rolloutDatabase; // @synthesize rolloutDatabase=_rolloutDatabase;
@property(readonly, nonatomic) id <TRIRolloutTargeting> targeter; // @synthesize targeter=_targeter;
- (_Bool)_targetRolloutDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 reportTelemetryToServer:(_Bool *)arg3 factorPackSetIdToActivate:(id *)arg4 shouldDisenroll:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x00000000000e7262
- (_Bool)targetRolloutDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 reportTelemetryToServer:(_Bool *)arg3 factorPackSetIdToActivate:(id *)arg4 shouldDisenroll:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x00000000000e70e5
- (id)initWithRolloutTargeter:(id)arg1 rolloutDatabase:(id)arg2;	// IMP=0x00000000000e704c

@end
