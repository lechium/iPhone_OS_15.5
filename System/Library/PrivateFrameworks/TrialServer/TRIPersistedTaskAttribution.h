//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedNetworkBehavior;

@interface TRIPersistedTaskAttribution : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000000000ef809

// Remaining properties
@property(copy, nonatomic) NSString *applicationBundleId; // @dynamic applicationBundleId;
@property(nonatomic) int cloudKitContainer; // @dynamic cloudKitContainer;
@property(nonatomic) _Bool hasApplicationBundleId; // @dynamic hasApplicationBundleId;
@property(nonatomic) _Bool hasCloudKitContainer; // @dynamic hasCloudKitContainer;
@property(nonatomic) _Bool hasNetworkBehavior; // @dynamic hasNetworkBehavior;
@property(nonatomic) _Bool hasTeamId; // @dynamic hasTeamId;
@property(retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior; // @dynamic networkBehavior;
@property(copy, nonatomic) NSString *teamId; // @dynamic teamId;

@end

