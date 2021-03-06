//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, NSMutableDictionary, NSString;

@interface BKTouchDeliveryGenericGestureFocusObserver : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_destinationPerDisplayUUID;	// 16 = 0x10
    BKHIDSystemInterface *_HIDSystem;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000044494
- (void).cxx_destruct;	// IMP=0x002000000004446c
@property(retain, nonatomic) BKHIDSystemInterface *HIDSystem; // @synthesize HIDSystem=_HIDSystem;
- (void)postEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000004430c
- (void)postEvent:(struct __IOHIDEvent *)arg1 toDestination:(id)arg2;	// IMP=0x00100000000442f6
- (id)destinationsForEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x00100000000440d1
- (void)setEventDestination:(id)arg1 forDisplayUUID:(id)arg2;	// IMP=0x0010000000043f91
- (id)eventDestinationForDisplayUUID:(id)arg1;	// IMP=0x0010000000043ebe
- (id)initWithHIDSystem:(id)arg1;	// IMP=0x0010000000043e32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

