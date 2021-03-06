//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSUUID;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_sessionUUID;	// 8 = 0x8
    NSUUID *_machineUUID;	// 16 = 0x10
    unsigned long long _machineType;	// 24 = 0x18
    NSString *_machineName;	// 32 = 0x20
    NSString *_machineBrand;	// 40 = 0x28
    unsigned long long _activityType;	// 48 = 0x30
    NSDate *_machineStartDate;	// 56 = 0x38
    NSDate *_machinePreferredUntilDate;	// 64 = 0x40
    NSData *_nfcSessionIDData;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000455421
- (void).cxx_destruct;	// IMP=0x0000000000455492
@property(readonly, nonatomic) NSData *nfcSessionIDData; // @synthesize nfcSessionIDData=_nfcSessionIDData;
@property(readonly, nonatomic) NSDate *machinePreferredUntilDate; // @synthesize machinePreferredUntilDate=_machinePreferredUntilDate;
@property(readonly, nonatomic) NSDate *machineStartDate; // @synthesize machineStartDate=_machineStartDate;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *machineBrand; // @synthesize machineBrand=_machineBrand;
@property(readonly, copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;
@property(readonly, nonatomic) NSUUID *machineUUID; // @synthesize machineUUID=_machineUUID;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004551ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004550ff
- (id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 machineStartDate:(id)arg7 machinePreferredUntilDate:(id)arg8 nfcSessionIDData:(id)arg9;	// IMP=0x0000000000454fab

@end

