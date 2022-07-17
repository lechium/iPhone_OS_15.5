//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSData, NSString, WiFiAwareDiscoveryResult, WiFiAwareInternetSharingConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding>
{
    WiFiAwareDiscoveryResult *_discoveryResult;	// 8 = 0x8
    long long _serviceType;	// 16 = 0x10
    NSString *_passphrase;	// 24 = 0x18
    NSData *_pmk;	// 32 = 0x20
    NSData *_pmkID;	// 40 = 0x28
    WiFiAwarePublishDatapathServiceSpecificInfo *_serviceSpecificInfo;	// 48 = 0x30
    WiFiAwareInternetSharingConfiguration *_internetSharingConfiguration;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f3fd
- (void).cxx_destruct;	// IMP=0x0000000000010107
@property(copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration; // @synthesize internetSharingConfiguration=_internetSharingConfiguration;
@property(copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) NSData *pmkID; // @synthesize pmkID=_pmkID;
@property(readonly, nonatomic) NSData *pmk; // @synthesize pmk=_pmk;
@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult; // @synthesize discoveryResult=_discoveryResult;
- (id)description;	// IMP=0x000000000000ff37
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fd4d
- (_Bool)internetSharingEqual:(id)arg1;	// IMP=0x000000000000fc6a
- (_Bool)serviceSpecificInfoEqual:(id)arg1;	// IMP=0x000000000000fb87
- (_Bool)pmkIDEqual:(id)arg1;	// IMP=0x000000000000faa4
- (_Bool)pmkEqual:(id)arg1;	// IMP=0x000000000000f9c1
- (_Bool)passphraseEqual:(id)arg1;	// IMP=0x000000000000f8de
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 passphrase:(id)arg3 pmk:(id)arg4 pmkID:(id)arg5 serviceSpecificInfo:(id)arg6 internetSharingConfiguration:(id)arg7;	// IMP=0x000000000000f778
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f5a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f405

@end
