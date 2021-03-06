//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFActivityMarking-Protocol.h>
#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFObject-Protocol.h>

@class HMFLogEventSession, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_os_activity, OS_voucher;

@interface HMFActivity <HMFLogging, HMFObject, HMFActivityMarking>
{
    NSObject<OS_os_activity> *_internal;	// 8 = 0x8
    NSObject<OS_voucher> *_voucher;	// 16 = 0x10
    NSMutableSet *_threadContexts;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    _Bool _valid;	// 36 = 0x24
    HMFLogEventSession *_logSession;	// 40 = 0x28
    NSUUID *_identifier;	// 48 = 0x30
    HMFActivity *_parent;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    NSString *_clientMetricIdentifier;	// 72 = 0x48
    unsigned long long _options;	// 80 = 0x50
    NSArray *_internalAssertions;	// 88 = 0x58
    unsigned long long _startMachTime;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x000000000002111e
+ (id)shortDescription;	// IMP=0x000000000001fd4e
+ (void)markCurrentActivityWithFormat:(id)arg1;	// IMP=0x000000000001dfa9
+ (void)markCurrentActivityWithReason:(id)arg1;	// IMP=0x000000000001df37
+ (void)markCurrentActivity;	// IMP=0x000000000001defa
+ (id)currentActivityForMarking;	// IMP=0x000000000001dcea
+ (id)currentActivity;	// IMP=0x000000000001dada
+ (void)initialize;	// IMP=0x000000000001dab5
+ (id)bundleIdentifier;	// IMP=0x000000000001da0b
+ (void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d8ef
+ (void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d8dd
+ (void)activityWithName:(id)arg1 parent:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d8c5
+ (void)activityWithName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d8ab
- (void).cxx_destruct;	// IMP=0x0000000000021270
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) __weak HMFActivity *parent; // @synthesize parent=_parent;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x0000000000021185
- (void)enableReportingWithServiceName:(id)arg1 rootUUID:(id)arg2;	// IMP=0x000000000002110c
- (void)enableReportingWithServiceName:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000020cf4
- (void)enableReportingWithServiceName:(id)arg1;	// IMP=0x0000000000020c7f
@property(readonly, getter=isEventReportingEnabled) _Bool eventReportingEnabled;
@property(readonly) HMFLogEventSession *logSession; // @synthesize logSession=_logSession;
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020b7b
- (CDUnknownBlockType)blockWithQualityOfService:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020ad4
- (CDUnknownBlockType)blockWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020a78
- (void)markWithReason:(id)arg1;	// IMP=0x00000000000205e1
- (void)markWithFormat:(id)arg1;	// IMP=0x00000000000204d0
- (void)mark;	// IMP=0x00000000000204bc
- (void)end;	// IMP=0x00000000000201db
- (void)begin;	// IMP=0x00000000000200d3
@property(readonly) unsigned long long assertions;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *shortDescription;
- (void)invalidate;	// IMP=0x000000000001fc85
@property(readonly, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, getter=hasStarted) _Bool started;
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x000000000001f47b
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 parent:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000001e4c0
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 parent:(id)arg3 assertions:(id)arg4;	// IMP=0x000000000001e263
- (id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001e1c2
- (id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3;	// IMP=0x000000000001e1b0
- (id)initWithName:(id)arg1 parent:(id)arg2;	// IMP=0x000000000001e19b
- (id)initWithName:(id)arg1;	// IMP=0x000000000001e184
- (id)init;	// IMP=0x000000000001e0dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

