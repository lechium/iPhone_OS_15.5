//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_xpc_object;

@interface FMXPCTimer : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _gracePeriod;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    CDUnknownBlockType _block;	// 48 = 0x30
    NSObject<OS_xpc_object> *_duetActivitySchedulerData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000068a0
@property(retain, nonatomic) NSObject<OS_xpc_object> *duetActivitySchedulerData; // @synthesize duetActivitySchedulerData=_duetActivitySchedulerData;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)handleActivity;	// IMP=0x0000000000006764
- (CDUnknownBlockType)activityHandler;	// IMP=0x0000000000006295
- (void)invalidate;	// IMP=0x000000000000618f
- (id)criteria;	// IMP=0x0000000000005e16
- (void)schedule;	// IMP=0x0000000000005d6a
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005cb0
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x0000000000005bef
- (id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005bd7
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x0000000000005ac1

@end

