//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAudioSessionCoordinationSystemInfoMutating-Protocol.h>

@class AFAudioSessionCoordinationSystemInfo, NSString, NSUUID;

@interface _AFAudioSessionCoordinationSystemInfoMutation : NSObject <AFAudioSessionCoordinationSystemInfoMutating>
{
    AFAudioSessionCoordinationSystemInfo *_baseModel;	// 8 = 0x8
    _Bool _isSupportedAndEnabled;	// 16 = 0x10
    NSString *_homeKitRoomName;	// 24 = 0x18
    NSUUID *_homeKitMediaSystemIdentifier;	// 32 = 0x20
    NSString *_mediaRemoteGroupIdentifier;	// 40 = 0x28
    NSString *_mediaRemoteRouteIdentifier;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsSupportedAndEnabled:1;
        unsigned int hasHomeKitRoomName:1;
        unsigned int hasHomeKitMediaSystemIdentifier:1;
        unsigned int hasMediaRemoteGroupIdentifier:1;
        unsigned int hasMediaRemoteRouteIdentifier:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000073b69
- (id)generate;	// IMP=0x0000000000073995
- (void)setMediaRemoteRouteIdentifier:(id)arg1;	// IMP=0x0000000000073975
- (void)setMediaRemoteGroupIdentifier:(id)arg1;	// IMP=0x0000000000073955
- (void)setHomeKitMediaSystemIdentifier:(id)arg1;	// IMP=0x0000000000073935
- (void)setHomeKitRoomName:(id)arg1;	// IMP=0x0000000000073915
- (void)setIsSupportedAndEnabled:(_Bool)arg1;	// IMP=0x0000000000073908
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000007389d
- (id)init;	// IMP=0x0000000000073889

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

