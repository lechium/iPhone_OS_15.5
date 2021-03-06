//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject
{
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;	// 8 = 0x8
}

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1;	// IMP=0x000000000012cf1d
- (id)availableOutputDeviceGroups;	// IMP=0x0000000000006e32
@property(readonly, nonatomic) NSArray *otherDevices;
@property(readonly, nonatomic) NSArray *recentlyUsedDevices;
- (void)_loadOutputDevices;	// IMP=0x0000000000006b68
- (id)impl;	// IMP=0x0000000000006b5a
- (unsigned long long)hash;	// IMP=0x0000000000006b06
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006a66
- (void)dealloc;	// IMP=0x00000000000069fd
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1;	// IMP=0x000000000000696f
- (id)init;	// IMP=0x000000000000692f

@end

