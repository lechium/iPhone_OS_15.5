//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRVirtualTouchDeviceDescriptor, NSDictionary, NSMutableDictionary;

@interface MRDVirtualTouchDevice : NSObject
{
    NSDictionary *_deviceProperties;	// 8 = 0x8
    NSMutableDictionary *_activeTouchEventsForFingerIndices;	// 16 = 0x10
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;	// 24 = 0x18
    unsigned long long _uniqueIdentifier;	// 32 = 0x20
    struct __IOHIDUserDevice *_ioDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d50d5
@property(readonly, nonatomic) struct __IOHIDUserDevice *ioDevice; // @synthesize ioDevice=_ioDevice;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor; // @synthesize deviceDescriptor=_deviceDescriptor;
- (id)_newIOKitDeviceProperties;	// IMP=0x00100000000d4f19
- (_Bool)handleTouchEvent:(struct _MRHIDTouchEvent)arg1;	// IMP=0x00100000000d4b96
- (_Bool)handleHIDReport:(id)arg1;	// IMP=0x00100000000d4a87
- (id)deviceProperties;	// IMP=0x00100000000d4a48
- (void)dealloc;	// IMP=0x00100000000d4a09
- (id)initWithDeviceDescriptor:(id)arg1;	// IMP=0x00100000000d48c2

@end

