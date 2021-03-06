//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFBluetoothWirelessSplitterSessionInfoMutating-Protocol.h>

@class AFBluetoothWirelessSplitterSessionInfo, NSArray, NSString;

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating>
{
    AFBluetoothWirelessSplitterSessionInfo *_baseModel;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSArray *_deviceAddresses;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasState:1;
        unsigned int hasDeviceAddresses:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000242eb
- (id)generate;	// IMP=0x000000000002420d
- (void)setDeviceAddresses:(id)arg1;	// IMP=0x00000000000241ed
- (void)setState:(long long)arg1;	// IMP=0x00000000000241df
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000024174
- (id)init;	// IMP=0x0000000000024160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

