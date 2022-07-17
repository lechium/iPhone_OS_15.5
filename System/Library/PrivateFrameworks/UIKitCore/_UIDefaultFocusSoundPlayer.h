//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusSoundPlayer-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer>
{
    NSMutableDictionary *_urlPools;	// 8 = 0x8
    NSMutableDictionary *_focusSoundPools;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_soundQueue;	// 24 = 0x18
    NSTimer *_unregisterTimer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000006d76d9
- (void).cxx_destruct;	// IMP=0x00000000006d7ff9
@property(retain, nonatomic) NSTimer *unregisterTimer; // @synthesize unregisterTimer=_unregisterTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *soundQueue; // @synthesize soundQueue=_soundQueue;
@property(retain, nonatomic) NSMutableDictionary *focusSoundPools; // @synthesize focusSoundPools=_focusSoundPools;
@property(retain, nonatomic) NSMutableDictionary *urlPools; // @synthesize urlPools=_urlPools;
- (void)_playSystemSound:(unsigned int)arg1 withVolume:(double)arg2 pan:(double)arg3;	// IMP=0x00000000006d7a35
- (void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3;	// IMP=0x00000000006d7947
- (void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3;	// IMP=0x00000000006d77db
- (void)dealloc;	// IMP=0x00000000006d773e
- (void)_registerForSystemSoundsIfNecessary;	// IMP=0x00000000006d74e5
- (id)_init;	// IMP=0x00000000006d7316

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
