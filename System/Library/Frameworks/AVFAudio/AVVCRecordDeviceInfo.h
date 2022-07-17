//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject
{
    _Bool _isRemoteDevice;	// 8 = 0x8
    _Bool _isUpsamplingSourceAudio;	// 9 = 0x9
    unsigned int _remoteDeviceCategory;	// 12 = 0xc
    NSString *_recordRoute;	// 16 = 0x10
    NSString *_remoteProductIdentifier;	// 24 = 0x18
    NSUUID *_remoteDeviceUID;	// 32 = 0x20
    NSString *_remoteDeviceUIDString;	// 40 = 0x28
}

@property(readonly, nonatomic) NSString *remoteDeviceUIDString; // @synthesize remoteDeviceUIDString=_remoteDeviceUIDString;
@property(readonly, nonatomic) _Bool isUpsamplingSourceAudio; // @synthesize isUpsamplingSourceAudio=_isUpsamplingSourceAudio;
@property(readonly, nonatomic) unsigned int remoteDeviceCategory; // @synthesize remoteDeviceCategory=_remoteDeviceCategory;
@property(readonly, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) NSString *remoteProductIdentifier; // @synthesize remoteProductIdentifier=_remoteProductIdentifier;
@property(readonly) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, nonatomic) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
- (void)dealloc;	// IMP=0x000000000000e7da
- (id)initWithRecordingEngine:(shared_ptr_dcedf963)arg1;	// IMP=0x000000000000e354

@end
