//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPInsertIntoPlaybackQueueCommand
{
    NSMutableSet *_registeredQueueTypes;	// 64 = 0x40
    NSMutableSet *_registeredCustomQueueIdentifiers;	// 72 = 0x48
    _Bool _supportsSharedQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_serialQueue;	// 88 = 0x58
    NSArray *_supportedInsertionPositions;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000263c55
@property(copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (id)_mediaRemoteCommandInfoOptions;	// IMP=0x0000000000263b91
- (void)setSupportedSharedQueue:(_Bool)arg1;	// IMP=0x0000000000263b2a
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;	// IMP=0x0000000000263a86
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;	// IMP=0x00000000002639e2
- (void)unregisterSupportedQueueType:(long long)arg1;	// IMP=0x000000000026397a
- (void)registerSupportedQueueType:(long long)arg1;	// IMP=0x0000000000263912
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;	// IMP=0x000000000026377f

@end

