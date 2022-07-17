//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VISAXNotificationHandler : NSObject
{
    NSString *_notificationName;	// 8 = 0x8
    id _target;	// 16 = 0x10
    CDUnknownBlockType _dispatcher;	// 24 = 0x18
    unsigned long long _observerIdentifier;	// 32 = 0x20
    _Bool _valid;	// 40 = 0x28
}

+ (id)_safelyGetObserverForIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000002350
+ (void)_safelyRemoveObserverForIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000228c
+ (unsigned long long)_safelyRegisterObserver:(id)arg1;	// IMP=0x000000000000207a
- (void).cxx_destruct;	// IMP=0x0000000000002546
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target;
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName; // @synthesize _notificationName;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void)_handleNotificationWithName:(id)arg1 object:(const void *)arg2 userInfo:(id)arg3;	// IMP=0x0000000000001ffb
- (void)processHandler:(SEL)arg1;	// IMP=0x0000000000001dc7
- (void)_stopObserving;	// IMP=0x0000000000003c6b
- (void)_startObserving;	// IMP=0x0000000000003c40
- (void)invalidate;	// IMP=0x0000000000001afd
- (id)_notificationTypeDescription;	// IMP=0x0000000000003c12
- (id)description;	// IMP=0x0000000000001a29
@property(copy, nonatomic, setter=_setDispatcher:) CDUnknownBlockType _dispatcher;
- (void)dealloc;	// IMP=0x000000000000197c
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(CDUnknownBlockType)arg3 startObserving:(_Bool)arg4;	// IMP=0x00000000000016c2
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(CDUnknownBlockType)arg3;	// IMP=0x00000000000016aa
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3;	// IMP=0x0000000000001651

@end
