//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/_HMAudioControlDelegate-Protocol.h>

@class HMMediaSession, NSString, NSUUID, _HMAudioControl;
@protocol HMAudioControlDelegate;

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge>
{
    id <HMAudioControlDelegate> _delegate;	// 8 = 0x8
    HMMediaSession *_mediaSession;	// 16 = 0x10
    _HMAudioControl *_audioControl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000672df
@property(retain, nonatomic) _HMAudioControl *audioControl; // @synthesize audioControl=_audioControl;
@property __weak HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property __weak id <HMAudioControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)audioControl:(id)arg1 didUpdateMuted:(_Bool)arg2;	// IMP=0x000000000006712e
- (void)audioControl:(id)arg1 didUpdateVolume:(float)arg2;	// IMP=0x0000000000066fde
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000066f15
- (void)updateMuted:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066e9d
- (void)updateVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066d3d
@property(getter=isMuted) _Bool muted;
@property float volume;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)_unconfigure;	// IMP=0x0000000000066b81
- (void)__configureWithContext:(id)arg1;	// IMP=0x0000000000066b0f
- (id)initWithMediaSession:(id)arg1;	// IMP=0x0000000000066a74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

