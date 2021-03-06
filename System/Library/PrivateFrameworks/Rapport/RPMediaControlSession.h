//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPMediaControlSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _invalidateCalled;	// 16 = 0x10
    _Bool _registeredMediaControlInterest;	// 17 = 0x11
    unsigned long long _mediaControlFlags;	// 24 = 0x18
    CDUnknownBlockType _mediaControlFlagsChangedHandler;	// 32 = 0x20
    id <RPMessageable> _messenger;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000046e18
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) CDUnknownBlockType mediaControlFlagsChangedHandler; // @synthesize mediaControlFlagsChangedHandler=_mediaControlFlagsChangedHandler;
@property(readonly, nonatomic) unsigned long long mediaControlFlags; // @synthesize mediaControlFlags=_mediaControlFlags;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046bd9
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046a07
- (void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004686d
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000466f5
- (void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046564
- (void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004638a
- (void)_handleMediaControlEvent:(id)arg1;	// IMP=0x00000000000462cc
- (void)_invalidate;	// IMP=0x00000000000461fe
- (void)invalidate;	// IMP=0x000000000004619d
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045f60
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045e79
- (id)init;	// IMP=0x0000000000045e09

@end

