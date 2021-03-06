//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVOutputDeviceDescription-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription>
{
    NSString *_deviceID;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    long long _deviceType;	// 24 = 0x18
    long long _deviceSubType;	// 32 = 0x20
    _Bool _isClusterLeader;	// 40 = 0x28
    NSString *_modelID;	// 48 = 0x30
}

@property(readonly, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(readonly, nonatomic) _Bool isClusterLeader; // @synthesize isClusterLeader=_isClusterLeader;
@property(readonly, nonatomic) long long deviceSubType; // @synthesize deviceSubType=_deviceSubType;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)dealloc;	// IMP=0x00000000000c50da
- (id)initWithDeviceID:(id)arg1 deviceName:(id)arg2 deviceSubType:(long long)arg3 isClusterLeader:(_Bool)arg4 modelID:(id)arg5;	// IMP=0x00000000000c5010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

