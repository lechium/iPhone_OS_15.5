//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class AKDevice, NSDictionary, NSString;

@interface HMDRemoteLoginProxyDeviceResponse <HMRemoteLoginMessageProtocol>
{
    AKDevice *_proxyDevice;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000034a96f
+ (id)messageName;	// IMP=0x000000000034a962
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000034a95a
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000034a7c3
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000034a64e
- (void).cxx_destruct;	// IMP=0x000000000034a63b
@property(retain, nonatomic) AKDevice *proxyDevice; // @synthesize proxyDevice=_proxyDevice;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000034a57b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000034a4e0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
