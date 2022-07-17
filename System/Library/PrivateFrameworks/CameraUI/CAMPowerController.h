//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CAMPowerController : NSObject
{
    _Atomic int _assertionIdentifierGenerator;	// 8 = 0x8
    _Bool __isBackgrounded;	// 12 = 0xc
    int __powerPressureNotificationToken;	// 16 = 0x10
    NSMutableDictionary *__assertionsByIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *__powerControllerQueue;	// 32 = 0x20
    unsigned long long __backgroundTaskIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000956d0
@property(readonly, nonatomic) int _powerPressureNotificationToken; // @synthesize _powerPressureNotificationToken=__powerPressureNotificationToken;
@property(nonatomic, getter=_isBackgrounded, setter=_setBackgrounded:) _Bool _isBackgrounded; // @synthesize _isBackgrounded=__isBackgrounded;
@property(readonly, nonatomic) unsigned long long _backgroundTaskIdentifier; // @synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_powerControllerQueue; // @synthesize _powerControllerQueue=__powerControllerQueue;
@property(readonly, nonatomic) NSMutableDictionary *_assertionsByIdentifier; // @synthesize _assertionsByIdentifier=__assertionsByIdentifier;
- (void)removeAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;	// IMP=0x000000000005a9e4
- (void)addAssertionForIndentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;	// IMP=0x0000000000054150
- (unsigned int)generateAssertionIdentifier;	// IMP=0x0000000000053e5c
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x00000000000639bb
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000095181
- (void)_startBackgroundTaskIfNeeded;	// IMP=0x000000000005668d
- (void)_endBackgroundTaskIfNeeded;	// IMP=0x0000000000062217
- (id)description;	// IMP=0x0000000000094dfa
- (void)dealloc;	// IMP=0x0000000000094d40
- (id)init;	// IMP=0x0000000000005aa0

@end
