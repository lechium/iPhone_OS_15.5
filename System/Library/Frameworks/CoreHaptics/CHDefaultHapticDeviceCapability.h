//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHaptics/CHHapticDeviceCapability-Protocol.h>

__attribute__((visibility("hidden")))
@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability>
{
    _Bool _supports3rdPartyHaptics;	// 8 = 0x8
}

- (id)attributesForDynamicParameter:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000053da
- (id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000518e
- (float)defaultValueForDynamicParameter:(id)arg1;	// IMP=0x0000000000004f90
- (float)minimumValueForDynamicParameter:(id)arg1;	// IMP=0x0000000000004d92
- (float)maximumValueForDynamicParameter:(id)arg1;	// IMP=0x0000000000004b9b
- (float)defaultValueForEventParameter:(id)arg1 eventType:(id)arg2;	// IMP=0x0000000000004909
- (float)minimumValueForEventParameter:(id)arg1;	// IMP=0x0000000000004732
- (float)maximumValueForEventParameter:(id)arg1;	// IMP=0x0000000000004562
@property(readonly) unsigned long long maximumNumberOfAudioChannels;
@property(readonly) unsigned long long maximumNumberOfHapticChannels;
@property(readonly) _Bool supportsAudio;
@property(readonly) _Bool supportsHaptics;
- (id)initPrivate;	// IMP=0x00000000000044c4
- (id)init;	// IMP=0x00000000000044b6

@end
