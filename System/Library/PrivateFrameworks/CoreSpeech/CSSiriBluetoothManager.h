//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSiriMobileBluetoothDeviceDataSource;

@interface CSSiriBluetoothManager : NSObject
{
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000a66e6
- (void).cxx_destruct;	// IMP=0x00000000000a6904
- (id)deviceWithUID:(id)arg1;	// IMP=0x00000000000a68ee
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00000000000a6848
- (void)prewarmDeviceWithIdentifier:(id)arg1;	// IMP=0x00000000000a67a1
- (id)_init;	// IMP=0x00000000000a674b

@end
