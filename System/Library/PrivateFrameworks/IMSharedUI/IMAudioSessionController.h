//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMAudioSessionController : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _dirty;	// 9 = 0x9
    unsigned long long _options;	// 16 = 0x10
}

+ (id)queue;	// IMP=0x0000000000012c14
+ (id)sharedInstance;	// IMP=0x0000000000012b1d
+ (void)__setSingleton__im:(id)arg1;	// IMP=0x0000000000012b09
+ (id)__singleton__im;	// IMP=0x0000000000012af7
@property unsigned long long options; // @synthesize options=_options;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
- (void)configureAudioSessionWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000130b2
- (void)setActive:(_Bool)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012ce7
@property(readonly) _Bool shouldDuckOthers;
@property(readonly) _Bool shouldStopPlayingWhenSilent;
@property(readonly) _Bool shouldUseSpeaker;
- (void)deactivate;	// IMP=0x0000000000012c88
- (void)activateWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012c6b

@end

