//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>

@class RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CULiveAudioPeerSession : NSObject <CUActivatable>
{
    RPCompanionLinkClient *_clinkClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _invalidationHandler;	// 24 = 0x18
    RPCompanionLinkDevice *_destinationDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006ed18
@property(retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)sendAudioDataEvent:(id)arg1;	// IMP=0x000000000006eca3
- (void)invalidate;	// IMP=0x000000000006eb35
- (void)_activateCompleted:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e993
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e7a8

@end
