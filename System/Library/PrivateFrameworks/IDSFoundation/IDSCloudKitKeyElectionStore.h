//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCKDatabase;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyElectionStore : NSObject
{
    IDSCKDatabase *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (_Bool)isItemNotFoundError:(id)arg1;	// IMP=0x000000000009c6c8
- (void).cxx_destruct;	// IMP=0x000000000009d9fc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSCKDatabase *database; // @synthesize database=_database;
- (id)_recordID;	// IMP=0x000000000009d930
- (id)_recordFromItem:(id)arg1;	// IMP=0x000000000009d812
- (id)_itemFromRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009d5a6
- (void)storeAccountIdentityItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009cfdb
- (void)removeAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009cd99
- (void)fetchAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009c803
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;	// IMP=0x000000000009c76a

@end
