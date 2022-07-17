//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource;

@interface ADBluetoothManager : NSObject
{
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000002962cc
- (void).cxx_destruct;	// IMP=0x0020000000296686
- (id)wirelessSplitterSession;	// IMP=0x0010000000296670
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029665a
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296644
- (id)deviceWithUID:(id)arg1;	// IMP=0x001000000029662e
- (id)deviceWithAddress:(id)arg1;	// IMP=0x0010000000296588
- (id)deviceWithRecordingInfo:(id)arg1;	// IMP=0x001000000029642e
- (void)prewarmDeviceWithIdentifier:(id)arg1;	// IMP=0x0010000000296387
- (id)_init;	// IMP=0x0010000000296331

@end
