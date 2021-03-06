//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface PKPaymentMarket : NSObject <NSSecureCoding>
{
    NSDictionary *_localizedNames;	// 8 = 0x8
    NSString *_notificationAssetIdentifier;	// 16 = 0x10
    NSDictionary *_renotifyCampaigns;	// 24 = 0x18
    NSSet *_geoFences;	// 32 = 0x20
    _Bool _productsRequiredForRegion;	// 40 = 0x28
    _Bool _shouldConsiderCellularRegion;	// 41 = 0x29
    long long _type;	// 48 = 0x30
    long long _classification;	// 56 = 0x38
    unsigned long long _expressUpgradeHideDisableAction;	// 64 = 0x40
    double _expressUpgradePromoteDuration;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    NSString *_region;	// 88 = 0x58
    NSSet *_supportedCredentialTypes;	// 96 = 0x60
    NSSet *_expressCredentialTypes;	// 104 = 0x68
    NSSet *_supportedTransitNetworks;	// 112 = 0x70
    NSSet *_expressTransitNetworks;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007ec3c
- (void).cxx_destruct;	// IMP=0x000000000007f29f
@property(readonly) _Bool shouldConsiderCellularRegion; // @synthesize shouldConsiderCellularRegion=_shouldConsiderCellularRegion;
@property(readonly) _Bool productsRequiredForRegion; // @synthesize productsRequiredForRegion=_productsRequiredForRegion;
@property(readonly, copy) NSSet *expressTransitNetworks; // @synthesize expressTransitNetworks=_expressTransitNetworks;
@property(readonly, copy) NSSet *supportedTransitNetworks; // @synthesize supportedTransitNetworks=_supportedTransitNetworks;
@property(readonly, copy) NSSet *expressCredentialTypes; // @synthesize expressCredentialTypes=_expressCredentialTypes;
@property(readonly, copy) NSSet *supportedCredentialTypes; // @synthesize supportedCredentialTypes=_supportedCredentialTypes;
@property(readonly, copy) NSString *region; // @synthesize region=_region;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) double expressUpgradePromoteDuration; // @synthesize expressUpgradePromoteDuration=_expressUpgradePromoteDuration;
@property(readonly) unsigned long long expressUpgradeHideDisableAction; // @synthesize expressUpgradeHideDisableAction=_expressUpgradeHideDisableAction;
@property(readonly) long long classification; // @synthesize classification=_classification;
@property(readonly) long long type; // @synthesize type=_type;
- (id)_geoFenceWithDictionary:(id)arg1;	// IMP=0x000000000007f0d0
- (unsigned long long)hash;	// IMP=0x000000000007f0ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f05b
- (double)shortestDistanceFromLocation:(id)arg1;	// IMP=0x000000000007ef18
- (_Bool)containsLocation:(id)arg1;	// IMP=0x000000000007eded
@property(readonly, copy) NSString *notificationAssetIdentifier;
@property(readonly, copy) NSString *renotifyDCICampaignIdentifier;
@property(readonly, copy) NSString *renotifyOpenLoopCampaignIdentifier;
@property(readonly, copy) NSString *name; // @dynamic name;
- (id)description;	// IMP=0x000000000007ec44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007eaa1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007e5df
- (id)initWithDictionary:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3;	// IMP=0x000000000007d8bd

@end

