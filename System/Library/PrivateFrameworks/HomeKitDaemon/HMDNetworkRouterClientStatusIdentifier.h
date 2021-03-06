//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, NSData, NSString;

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    NSData *_macAddress;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_ipAddress;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004eb00d
- (void).cxx_destruct;	// IMP=0x00000000004eafda
@property(retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004eabde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004eab26
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004ea754
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ea295
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3;	// IMP=0x00000000004ea1de
- (id)init;	// IMP=0x00000000004ea1af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

