//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage
{
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ab793
- (unsigned long long)type;	// IMP=0x00000000001ab788
@property(readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;
- (id)initWithDeviceDescriptor:(id)arg1;	// IMP=0x00000000001ab514

@end
