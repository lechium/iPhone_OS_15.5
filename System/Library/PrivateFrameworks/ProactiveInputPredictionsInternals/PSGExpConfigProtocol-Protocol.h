//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveInputPredictionsInternals/NSObject-Protocol.h>

@class NSString, TRIExperimentIdentifiers, TRIRolloutIdentifiers;

@protocol PSGExpConfigProtocol <NSObject>
@property(readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;
@property(readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property(readonly, nonatomic) NSString *treatmentName;
@end
