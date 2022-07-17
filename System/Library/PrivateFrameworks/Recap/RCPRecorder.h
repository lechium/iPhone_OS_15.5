//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, RCPEventAction;

@interface RCPRecorder : NSObject
{
    struct __CFRunLoop *_ioRunLoop;	// 8 = 0x8
    NSMutableSet *_activeRecorders;	// 16 = 0x10
    RCPEventAction *_pointerLocationAction;	// 24 = 0x18
    _Bool _shouldRecordSenderProperties;	// 32 = 0x20
    _Bool _shouldRecordInitialPointerLocation;	// 33 = 0x21
}

+ (void)unregisterEventStreamRecorder:(id)arg1;	// IMP=0x0000000000014a80
+ (void)registerEventStreamRecorder:(id)arg1;	// IMP=0x00000000000149b2
+ (_Bool)shouldRecordSenderProperties;	// IMP=0x000000000001496e
+ (id)sharedRecorder;	// IMP=0x00000000000148bf
- (void).cxx_destruct;	// IMP=0x0000000000015766
@property(retain) RCPEventAction *pointerLocationAction; // @synthesize pointerLocationAction=_pointerLocationAction;
@property _Bool shouldRecordInitialPointerLocation; // @synthesize shouldRecordInitialPointerLocation=_shouldRecordInitialPointerLocation;
@property _Bool shouldRecordSenderProperties; // @synthesize shouldRecordSenderProperties=_shouldRecordSenderProperties;
- (void)_unregisterIOHIDClient;	// IMP=0x00000000000156fa
- (void)_registerIOHIDClient;	// IMP=0x0000000000014d2b
- (id)eventPreActions;	// IMP=0x0000000000014caf

@end
