//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface _HKFitnessFriendAchievement (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;	// IMP=0x000000000002df37
+ (Class)hd_dataEntityClass;	// IMP=0x0000000000030a60
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0000000000022e68
- (id)codableRepresentationForSync;	// IMP=0x0000000000022edc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

