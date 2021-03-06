//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface IMTimer : NSObject
{
    id _timer;	// 8 = 0x8
    id _target;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    double _timeInterval;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    SEL _selector;	// 48 = 0x30
    _Bool _wakeDevice;	// 56 = 0x38
    _Bool _useCurrentRunLoop;	// 57 = 0x39
    id _userInfo;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000032c72
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;	// IMP=0x0000000000032c15
- (void)invalidate;	// IMP=0x0000000000032bff
@property(readonly, retain, nonatomic) NSDate *fireDate;
- (void)_reschedulePCPersistentTimer;	// IMP=0x0000000000032bb3
- (void)setFireTimeInterval:(double)arg1;	// IMP=0x0000000000032b5a
- (id)_initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(_Bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(_Bool)arg7 queue:(id)arg8;	// IMP=0x0000000000032957
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(_Bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 queue:(id)arg7;	// IMP=0x0000000000032934
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(_Bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(_Bool)arg7;	// IMP=0x000000000003290f
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(_Bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;	// IMP=0x00000000000328f3

@end

