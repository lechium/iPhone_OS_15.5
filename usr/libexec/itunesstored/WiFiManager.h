//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface WiFiManager : NSObject
{
    int _clientType;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedWiFiManager;	// IMP=0x00400000001d3da5
- (id)_wifiInterfaceName;	// IMP=0x00200000001d3f42
- (long long)_wifiClientTypeForManagerType:(int)arg1;	// IMP=0x00100000001d3f3a
- (void *)_wifiClient;	// IMP=0x00100000001d3f32
@property int clientType;
@property(readonly) NSString *IPAddress;
- (void)dealloc;	// IMP=0x00100000001d3d66
- (id)init;	// IMP=0x00100000001d3d18

@end
