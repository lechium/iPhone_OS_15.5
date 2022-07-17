//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSDarwinVoiceTriggerEventInfoProvider : NSObject
{
    NSMutableDictionary *_triggerInfos;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)voiceTriggerEventInfoWithAdjustedMachTime:(id)arg1 deviceUUID:(id)arg2 anchorHostMachTime:(unsigned long long)arg3 anchorDarwinMachTime:(unsigned long long)arg4;	// IMP=0x000000000000916f
+ (id)sharedInstance;	// IMP=0x0000000000008cb3
- (void).cxx_destruct;	// IMP=0x0000000000009b18
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *triggerInfos; // @synthesize triggerInfos=_triggerInfos;
- (id)getMachTimeAdjustedVoiceTriggerEventInfoForDeviceUUID:(id)arg1;	// IMP=0x0000000000008f45
- (void)setRawVoiceTriggerEventInfo:(id)arg1 fromDeviceUUID:(id)arg2 anchorHostMachTime:(unsigned long long)arg3 anchorDarwinMachTime:(unsigned long long)arg4;	// IMP=0x0000000000008d8f
- (id)init;	// IMP=0x0000000000008d08

@end
