//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSObject-Protocol.h>

@class AVOutputDevice, AVOutputDeviceGroup, NSArray, NSDictionary;

@protocol AVOutputDeviceGroupImpl <NSObject>
@property(readonly) float volume;
@property(readonly) AVOutputDevice *groupLeader;
@property(readonly) NSArray *outputDevices;
@property(readonly) _Bool receivesLongFormAudioFromLocalDevice;
@property __weak AVOutputDeviceGroup *parentOutputDeviceGroup;
- (long long)volumeControlType;
- (void)setVolume:(float)arg1;
- (void)removeOutputDevice:(AVOutputDevice *)arg1 withOptions:(NSDictionary *)arg2 completionhandler:(void (^)(AVOutputDeviceGroupMembershipChangeResult *))arg3;
- (void)addOutputDevice:(AVOutputDevice *)arg1 withOptions:(NSDictionary *)arg2 completionHandler:(void (^)(AVOutputDeviceGroupMembershipChangeResult *))arg3;
@end

