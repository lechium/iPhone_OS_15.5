//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class EMActivityObjectID, EMStatusUpdateProvider, NSDate, NSDictionary, NSError, NSProgress, NSString;
@protocol EFCancelable;

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    EMStatusUpdateProvider *_statusUpdateProvider;	// 16 = 0x10
    id <EFCancelable> _progressKVOCancellation;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    long long _activityType;	// 40 = 0x28
    NSDate *_started;	// 48 = 0x30
    NSDate *_finished;	// 56 = 0x38
    NSProgress *_progress;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    double _fractionCompleted;	// 80 = 0x50
    EMActivityObjectID *_objectID;	// 88 = 0x58
}

+ (id)keyPathsForValuesAffectingLocalizedDescription;	// IMP=0x00000000000068d4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005eeb
+ (id)log;	// IMP=0x0000000000005e0e
- (void).cxx_destruct;	// IMP=0x0000000000007216
@property(readonly) EMActivityObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly) NSDate *finished; // @synthesize finished=_finished;
@property(readonly) NSDate *started; // @synthesize started=_started;
@property(readonly) long long activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)_localizedDescriptionForFetchState:(long long)arg1;	// IMP=0x0000000000006f59
@property(readonly, copy) NSString *localizedDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool needsPersistentHistory;
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000006b63
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000006a17
- (void)setCompletedCount:(long long)arg1 totalCount:(long long)arg2;	// IMP=0x0000000000006976
- (_Bool)isEqualToActivityWithType:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00000000000067a2
- (void)_observeProgress;	// IMP=0x00000000000065d2
- (void)dealloc;	// IMP=0x000000000000654c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000063a1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006023
- (id)initWithActivityType:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000005ef3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

