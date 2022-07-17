//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface NPKIDVRemoteDeviceServiceContext : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_eventsToServiceNames;	// 8 = 0x8
    NSString *_remoteDeviceID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a18eb
- (void).cxx_destruct;	// IMP=0x00000000000a1f6e
@property(readonly, nonatomic) NSString *remoteDeviceID; // @synthesize remoteDeviceID=_remoteDeviceID;
- (id)description;	// IMP=0x00000000000a1f16
- (unsigned long long)_registeredEventsForServiceName:(id)arg1;	// IMP=0x00000000000a1dc1
- (void)_setServiceNames:(id)arg1 forEventString:(id)arg2;	// IMP=0x00000000000a1d30
- (id)_serviceNamesForEventString:(id)arg1;	// IMP=0x00000000000a1cb3
- (id)serviceNamesForEvent:(unsigned long long)arg1;	// IMP=0x00000000000a1c13
- (unsigned long long)unregisterEvents:(unsigned long long)arg1 forServiceName:(id)arg2;	// IMP=0x00000000000a1aba
- (unsigned long long)registerEvents:(unsigned long long)arg1 forServiceName:(id)arg2;	// IMP=0x00000000000a1961
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a18f3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a1661
- (id)init;	// IMP=0x00000000000a15b6

@end
