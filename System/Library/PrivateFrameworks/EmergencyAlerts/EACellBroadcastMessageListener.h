//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject
{
    EAEmergencyAlertCenter *_emergencyAlertCenter;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000002dff
- (void).cxx_destruct;	// IMP=0x0000000000002fdc
- (void)dealloc;	// IMP=0x0000000000002f9a
- (void)start;	// IMP=0x0000000000002ec7
- (id)init;	// IMP=0x0000000000002e6c
- (void)_cellBroadcastMessageReceived:(id)arg1;	// IMP=0x0000000000002e54

@end

