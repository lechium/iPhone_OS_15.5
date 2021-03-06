//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding>
{
    CTCarrierSpaceUsageInfo *_usageInfo;	// 8 = 0x8
    CTCarrierSpacePlansInfo *_plansInfo;	// 16 = 0x10
    CTCarrierSpaceAppsInfo *_appsInfo;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004225
- (void).cxx_destruct;	// IMP=0x000000000000427e
@property(retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo; // @synthesize appsInfo=_appsInfo;
@property(retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo; // @synthesize plansInfo=_plansInfo;
@property(retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo; // @synthesize usageInfo=_usageInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004115
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004092
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003f03
- (id)description;	// IMP=0x0000000000003de2
- (id)init;	// IMP=0x0000000000003d73

@end

