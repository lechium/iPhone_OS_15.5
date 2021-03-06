//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SYDDeviceInfo : NSObject
{
    NSDictionary *_systemDictionary;	// 8 = 0x8
    NSDictionary *_frameworkDictionary;	// 16 = 0x10
}

+ (_Bool)isHomePod;	// IMP=0x000000000004f58f
+ (id)productVersion;	// IMP=0x001000000004f550
+ (id)userAgentHeader;	// IMP=0x001000000004f41b
+ (id)clientInfoHeader;	// IMP=0x001000000004f221
+ (id)osVersion;	// IMP=0x001000000004f1e2
- (void).cxx_destruct;	// IMP=0x002000000004f9ad
@property(retain, nonatomic) NSDictionary *frameworkDictionary; // @synthesize frameworkDictionary=_frameworkDictionary;
@property(retain, nonatomic) NSDictionary *systemDictionary; // @synthesize systemDictionary=_systemDictionary;
- (id)frameworkIdentifier;	// IMP=0x001000000004f91d
- (id)frameworkVersion;	// IMP=0x001000000004f88b
- (id)buildVersion;	// IMP=0x001000000004f831
- (id)osName;	// IMP=0x001000000004f7d7
- (id)systemInfoDictionary;	// IMP=0x001000000004f741
- (id)frameworkInfoDictionary;	// IMP=0x001000000004f649
- (_Bool)isHomePod;	// IMP=0x001000000004f641
- (id)productType;	// IMP=0x001000000004f634
- (id)productVersion;	// IMP=0x001000000004f62c
- (id)wifiMacAddress;	// IMP=0x001000000004f624
- (id)serialNumber;	// IMP=0x001000000004f61c
- (id)osVersion;	// IMP=0x001000000004f5c2
- (id)init;	// IMP=0x001000000004f1b3

@end

