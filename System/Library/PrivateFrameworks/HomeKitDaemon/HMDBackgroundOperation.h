//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHomeManager, NSDate, NSDictionary, NSMutableSet, NSOperationQueue, NSString, NSUUID;

@interface HMDBackgroundOperation : HMFObject <HMFLogging, NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _finished;	// 12 = 0xc
    _Bool _isReadyToRun;	// 13 = 0xd
    _Bool _isExpired;	// 14 = 0xe
    NSUUID *_operationUUID;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    NSMutableSet *_dependencies;	// 32 = 0x20
    NSDictionary *_userData;	// 40 = 0x28
    NSDate *_scheduledDate;	// 48 = 0x30
    NSDate *_expirationDate;	// 56 = 0x38
    NSOperationQueue *_queue;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0000000000677129
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000677121
+ (id)predicate;	// IMP=0x0000000000677079
+ (_Bool)persistent;	// IMP=0x0000000000676fd1
- (void).cxx_destruct;	// IMP=0x0000000000676f4d
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) _Bool isReadyToRun; // @synthesize isReadyToRun=_isReadyToRun;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property(readonly) NSDictionary *userData; // @synthesize userData=_userData;
@property _Bool finished; // @synthesize finished=_finished;
@property(readonly) NSMutableSet *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
- (id)dumpState;	// IMP=0x0000000000676d14
- (id)attributeDescriptions;	// IMP=0x0000000000676b44
- (id)AllDependencies;	// IMP=0x0000000000676ae4
- (_Bool)hasDependency:(id)arg1;	// IMP=0x0000000000676a42
- (void)removeDependency:(id)arg1;	// IMP=0x00000000006769ae
- (void)addDependency:(id)arg1;	// IMP=0x0000000000676917
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000067664f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006764ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000067639e
- (void)markOperationFinished;	// IMP=0x0000000000676387
- (_Bool)runOperation:(id)arg1;	// IMP=0x000000000067606e
- (id)initWithUserData:(id)arg1;	// IMP=0x0000000000675f86
- (id)initWithUUID:(id)arg1 userData:(id)arg2 scheduledDate:(id)arg3 expirationDate:(id)arg4 dependentOperations:(id)arg5;	// IMP=0x0000000000675dea
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x0000000000675d42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
