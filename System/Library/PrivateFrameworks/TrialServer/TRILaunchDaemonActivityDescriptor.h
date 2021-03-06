//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _supportedTaskCapabilities;	// 16 = 0x10
}

+ (id)launchDaemonActivityDescriptorWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2;	// IMP=0x00000000000072f1
+ (id)clientHotfixWifiDescriptor;	// IMP=0x00000000000acca9
+ (id)clientHotfixCellularAllowBatteryDescriptor;	// IMP=0x00000000000acc84
+ (id)clientTriggeredCellularDescriptor;	// IMP=0x00000000000acc5f
+ (id)clientTriggeredWifiDescriptor;	// IMP=0x00000000000acc3a
+ (id)setupAssistantFetchDescriptor;	// IMP=0x00000000000acc15
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;	// IMP=0x00000000000acbf0
+ (id)postUpgradeDescriptor;	// IMP=0x00000000000acbcb
+ (id)inexpensiveNetworkingDescriptor;	// IMP=0x00000000000acba6
+ (id)recurrentRollbackDescriptor;	// IMP=0x00000000000acb81
+ (id)cellularDescriptor;	// IMP=0x00000000000acb5c
+ (id)taskQueueDescriptor;	// IMP=0x00000000000acb37
+ (id)retryFailuresDescriptor;	// IMP=0x00000000000acb12
- (void).cxx_destruct;	// IMP=0x00000000000075e7
@property(readonly, nonatomic) unsigned long long supportedTaskCapabilities; // @synthesize supportedTaskCapabilities=_supportedTaskCapabilities;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;	// IMP=0x00000000000075cd
- (id)description;	// IMP=0x000000000000754d
- (unsigned long long)hash;	// IMP=0x000000000000751b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000074b3
- (_Bool)isEqualToLaunchDaemonActivityDescriptor:(id)arg1;	// IMP=0x00000000000073da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000073cf
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)arg1;	// IMP=0x000000000000739a
- (id)copyWithReplacementName:(id)arg1;	// IMP=0x0000000000007349
- (id)initWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2;	// IMP=0x0000000000007202

@end

