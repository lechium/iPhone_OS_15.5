//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUDownloadPolicy-Protocol.h>

@class NSString, SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>
{
    SUDescriptor *_descriptor;	// 8 = 0x8
    SUCarrierDownloadPolicyProperties *_carrierPolicy;	// 16 = 0x10
    SUNetworkMonitor *_networkMonitor;	// 24 = 0x18
    _Bool _cellularCapable;	// 32 = 0x20
    int _cellularFeeAgreementStatus;	// 36 = 0x24
}

@property(nonatomic) int cellularFeeAgreementStatus; // @synthesize cellularFeeAgreementStatus=_cellularFeeAgreementStatus;
@property(retain, nonatomic) SUNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(nonatomic, getter=isCellularCapable) _Bool cellularCapable; // @synthesize cellularCapable=_cellularCapable;
@property(retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy; // @synthesize carrierPolicy=_carrierPolicy;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (_Bool)_inexpensiveHDM;	// IMP=0x000000000002ae34
- (_Bool)_isDownloadableForNetworkType:(int)arg1 error:(long long *)arg2 cellularFeesApply:(_Bool *)arg3 powerRequired:(_Bool *)arg4;	// IMP=0x000000000002aaf9
- (unsigned long long)wifiOnlyPeriodInDays;	// IMP=0x000000000002aab5
- (_Bool)isDownloadAllowableForCellular2G;	// IMP=0x000000000002aa71
- (_Bool)cellularDownloadFeesApply;	// IMP=0x000000000002aa5c
- (_Bool)isDownloadAllowableForCellularIncludingInexpensiveHDM:(_Bool)arg1;	// IMP=0x000000000002a7f7
- (_Bool)isDownloadAllowableForCellular;	// IMP=0x000000000002a7c2
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;	// IMP=0x000000000002a762
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;	// IMP=0x000000000002a74d
- (_Bool)is5GDownloadAllowed;	// IMP=0x000000000002a73b
- (_Bool)isDownloadFreeForCellular;	// IMP=0x000000000002a71b
- (_Bool)isDownloadAllowableForCellularRoaming;	// IMP=0x000000000002a6e2
- (_Bool)allowExpensiveNetwork;	// IMP=0x000000000002a6ce
- (_Bool)isDownloadAllowableForWiFi;	// IMP=0x000000000002a69c
- (_Bool)isDownloadable;	// IMP=0x000000000002a663
- (_Bool)isPowerRequired;	// IMP=0x000000000002a65b
- (_Bool)hasEnoughDiskSpace;	// IMP=0x000000000002a49b
- (_Bool)isSamePolicy:(id)arg1;	// IMP=0x000000000002a444
- (_Bool)_isCellularCapable;	// IMP=0x000000000002a40f
- (id)_stringForBool:(_Bool)arg1;	// IMP=0x000000000002a3f5
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000002a273
- (id)initWithDescriptor:(id)arg1;	// IMP=0x000000000002a1b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
