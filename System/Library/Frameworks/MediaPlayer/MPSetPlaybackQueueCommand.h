//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPSetPlaybackQueueCommand
{
    NSMutableDictionary *_registeredSpecializedQueues;	// 64 = 0x40
    NSMutableSet *_registeredQueueTypes;	// 72 = 0x48
    NSMutableSet *_registeredCustomQueueIdentifiers;	// 80 = 0x50
    _Bool _supportsSharedQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_serialQueue;	// 96 = 0x60
    long long _upNextItemCount;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000262f53
@property(nonatomic) long long upNextItemCount; // @synthesize upNextItemCount=_upNextItemCount;
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x0000000000262e8f
- (void)setSupportedSharedQueue:(_Bool)arg1;	// IMP=0x0000000000262e28
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;	// IMP=0x0000000000262d84
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;	// IMP=0x0000000000262ce0
- (void)unregisterSupportedQueueType:(long long)arg1;	// IMP=0x0000000000262c78
- (void)registerSupportedQueueType:(long long)arg1;	// IMP=0x0000000000262c10
- (void)unregisterSpecializedQueueIdentifier:(id)arg1;	// IMP=0x0000000000262b6c
- (void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;	// IMP=0x00000000002629d7
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;	// IMP=0x00000000002627f8

@end
