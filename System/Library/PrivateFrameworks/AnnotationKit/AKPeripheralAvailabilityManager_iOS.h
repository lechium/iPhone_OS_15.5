//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKPeripheralAvailabilityManager_iOS : NSObject
{
    struct __IOHIDManager *stylusHidManager;	// 8 = 0x8
    unsigned long long _currentAvailability;	// 16 = 0x10
}

+ (_Bool)onlyDrawWithApplePencil;	// IMP=0x000000000004e89e
@property unsigned long long currentAvailability; // @synthesize currentAvailability=_currentAvailability;
- (void)stopMonitoringForPeripheralConnection;	// IMP=0x000000000004ece1
- (void)startMonitoringForPeripheralConnection;	// IMP=0x000000000004ea70
- (void)postConnectionStatusNotification;	// IMP=0x000000000004e932
- (void)teardown;	// IMP=0x000000000004e920
- (void)dealloc;	// IMP=0x000000000004e8e2
- (id)init;	// IMP=0x000000000004e8a6

@end

