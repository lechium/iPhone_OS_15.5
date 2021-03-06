//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMUserDirectoryIterator-Protocol.h>

@class NSMutableArray, NSString;
@protocol CRKClassKitQuery, CRKClassKitRosterRequirements;

@interface CRKASMConcreteUserDirectoryIterator : NSObject <CRKASMUserDirectoryIterator>
{
    _Bool _executing;	// 8 = 0x8
    id <CRKClassKitRosterRequirements> _requirements;	// 16 = 0x10
    id <CRKClassKitQuery> _query;	// 24 = 0x18
    NSMutableArray *_queryCompletionQueue;	// 32 = 0x20
}

+ (id)iteratorWithRosterRequirements:(id)arg1 queryGenerator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044a66
- (void).cxx_destruct;	// IMP=0x000000000004528e
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(readonly, nonatomic) NSMutableArray *queryCompletionQueue; // @synthesize queryCompletionQueue=_queryCompletionQueue;
@property(readonly, nonatomic) id <CRKClassKitQuery> query; // @synthesize query=_query;
@property(readonly, nonatomic) id <CRKClassKitRosterRequirements> requirements; // @synthesize requirements=_requirements;
- (void)queryDidFinishExecutingWithResults:(id)arg1 error:(id)arg2;	// IMP=0x0000000000044fac
- (void)serviceQueryQueue;	// IMP=0x0000000000044e28
- (void)fetchNextUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044d0d
- (id)initWithRequirements:(id)arg1 query:(id)arg2;	// IMP=0x00000000000449b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

