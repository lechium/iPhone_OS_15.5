//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterCredential : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_macAddress;	// 8 = 0x8
    NSData *_psk;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e3cc6
- (void).cxx_destruct;	// IMP=0x00000000004e3c9e
@property(retain, nonatomic) NSData *psk; // @synthesize psk=_psk;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e39b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e3922
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004e3640
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e3238
- (id)initWithMacAddress:(id)arg1 psk:(id)arg2;	// IMP=0x00000000004e319f
- (id)init;	// IMP=0x00000000004e3170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

