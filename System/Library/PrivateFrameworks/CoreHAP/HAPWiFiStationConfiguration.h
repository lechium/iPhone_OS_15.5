//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPWiFiSecurityModeWrapper, NSData, NSString;

@interface HAPWiFiStationConfiguration : NSObject <NSCopying, HAPTLVProtocol>
{
    NSString *_SSID;	// 8 = 0x8
    HAPWiFiSecurityModeWrapper *_securityMode;	// 16 = 0x10
    NSData *_PSK;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b9180
- (void).cxx_destruct;	// IMP=0x00000000001b914d
@property(retain, nonatomic) NSData *PSK; // @synthesize PSK=_PSK;
@property(retain, nonatomic) HAPWiFiSecurityModeWrapper *securityMode; // @synthesize securityMode=_securityMode;
@property(retain, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b8d51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8c99
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000001b8842
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b8371
- (id)initWithSSID:(id)arg1 securityMode:(id)arg2 PSK:(id)arg3;	// IMP=0x00000000001b82ba
- (id)init;	// IMP=0x00000000001b828b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

