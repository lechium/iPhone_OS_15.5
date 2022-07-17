//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KeyboardServices/_KSTextReplacementServiceProtocol-Protocol.h>

@class NSString, _KSTextReplacementServer;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol>
{
    _KSTextReplacementServer *_owner;	// 8 = 0x8
    _Bool _hasReadAccess;	// 16 = 0x10
    long long _generation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002b967
@property(readonly, nonatomic) _Bool hasReadAccess; // @synthesize hasReadAccess=_hasReadAccess;
@property(nonatomic) long long generation; // @synthesize generation=_generation;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b731
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b532
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b483
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b427
- (void)removeAllEntries;	// IMP=0x000000000002b3f6
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b2fd
- (void)cancel;	// IMP=0x000000000002b2d4
- (id)initWithOwner:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000000002b20b
- (id)initWithOwner:(id)arg1;	// IMP=0x000000000002b1a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
