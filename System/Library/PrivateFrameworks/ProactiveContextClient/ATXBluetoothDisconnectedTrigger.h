//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXTrigger-Protocol.h>

@class NSString;

@interface ATXBluetoothDisconnectedTrigger : NSObject <ATXTrigger>
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000049a7
- (void).cxx_destruct;	// IMP=0x0000000000004ba9
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004b27
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004a62
- (id)initWithDeviceIdentifier:(id)arg1 deviceName:(id)arg2;	// IMP=0x00000000000049ba
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

