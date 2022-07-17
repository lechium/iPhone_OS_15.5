//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLifeCycle-Protocol.h>

@class BRCAccountSession, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCTimerScheduler : NSObject <BRCLifeCycle>
{
    BRCAccountSession *_session;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    _Bool _suspended;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_sqlTable;	// 40 = 0x28
    NSString *_field;	// 48 = 0x30
    CDUnknownBlockType _handler;	// 56 = 0x38
    _Bool _isCancelled;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000555d
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)reschedule;	// IMP=0x00000000000052d9
- (void)cancel;	// IMP=0x0000000000005275
- (void)resume;	// IMP=0x000000000000506d
- (void)close;	// IMP=0x0000000000005053
- (id)initWithAccountSession:(id)arg1 timerName:(id)arg2 sqlTable:(id)arg3 field:(id)arg4 timerHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000004f3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
