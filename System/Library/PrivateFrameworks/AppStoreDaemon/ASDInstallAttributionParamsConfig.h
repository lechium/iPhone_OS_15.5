//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDInstallAttributionParamsConfig : NSObject <NSSecureCoding>
{
    _Bool _overrideCampaignLimit;	// 8 = 0x8
    NSNumber *_appAdamId;	// 16 = 0x10
    NSString *_adNetworkId;	// 24 = 0x18
    NSNumber *_campaignId;	// 32 = 0x20
    NSString *_impressionId;	// 40 = 0x28
    NSNumber *_sourceAppAdamId;	// 48 = 0x30
    NSNumber *_timestamp;	// 56 = 0x38
    NSString *_attributionSignature;	// 64 = 0x40
    NSString *_version;	// 72 = 0x48
    NSString *_sourceAppBundleId;	// 80 = 0x50
}

+ (id)paramsFromDictionary:(id)arg1;	// IMP=0x0000000000038738
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000383cb
- (void).cxx_destruct;	// IMP=0x0000000000038a49
@property(nonatomic) _Bool overrideCampaignLimit; // @synthesize overrideCampaignLimit=_overrideCampaignLimit;
@property(retain, nonatomic) NSString *sourceAppBundleId; // @synthesize sourceAppBundleId=_sourceAppBundleId;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *sourceAppAdamId; // @synthesize sourceAppAdamId=_sourceAppAdamId;
@property(retain, nonatomic) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property(retain, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(retain, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000384e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000383d3

@end

