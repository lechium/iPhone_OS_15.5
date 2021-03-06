//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSRemoteDarwinDeviceInfo : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00400000000d198f
- (_Bool)isPrimaryVoiceTriggerDeviceWithUUID:(id)arg1;	// IMP=0x00400000000d19eb
- (id)fetchRichDeviceUIDStringFromUUID:(id)arg1;	// IMP=0x00100000000d19e3
- (_Bool)isRemoteDarwinConnectedWithUUID:(id)arg1;	// IMP=0x00100000000d19db
- (_Bool)hasDarwinDeviceHandleVoiceTrigger;	// IMP=0x00100000000d19d3
- (_Bool)hasDarwinDeviceConnected;	// IMP=0x00100000000d19cb
- (id)fetchDeviceUUIDStringFromUID:(id)arg1;	// IMP=0x00100000000d19c3
- (void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)arg1;	// IMP=0x00100000000d19bd
- (void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)arg1;	// IMP=0x00100000000d19b7
- (void)allDeviceDisconnected;	// IMP=0x00100000000d19b1
- (void)deviceDisconnectedWithUUID:(id)arg1;	// IMP=0x00100000000d19ab
- (void)deviceConnectedWithUUID:(id)arg1;	// IMP=0x00100000000d19a5
- (id)init;	// IMP=0x00100000000d1997

@end

