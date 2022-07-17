//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDWakeConfigurationParameters, NSData, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_reserved;	// 8 = 0x8
    HMDWakeConfigurationParameters *_custom1;	// 16 = 0x10
    HMDWakeConfigurationParameters *_custom2;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a8042b
- (void).cxx_destruct;	// IMP=0x0000000000a7f2c3
@property(retain, nonatomic) HMDWakeConfigurationParameters *custom2; // @synthesize custom2=_custom2;
@property(retain, nonatomic) HMDWakeConfigurationParameters *custom1; // @synthesize custom1=_custom1;
@property(retain, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7eec7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7ee0f
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000a7e977
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a7e4c6
- (id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3;	// IMP=0x0000000000a7e40f
- (id)init;	// IMP=0x0000000000a7e3e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
