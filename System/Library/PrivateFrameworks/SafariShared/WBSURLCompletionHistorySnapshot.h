//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionDataSource-Protocol.h>

@class NSString, WBSURLCompletionDatabase;
@protocol OS_dispatch_queue;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource>
{
    NSObject<OS_dispatch_queue> *_completionDatabaseQueue;	// 8 = 0x8
    WBSURLCompletionDatabase *_completionDatabase;	// 16 = 0x10
    unique_ptr_5d7d1a42 _items;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000177772
- (void).cxx_destruct;	// IMP=0x000000000017773f
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(_Bool)arg3;	// IMP=0x00000000001775c3
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001775bd
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 withSearchParameters:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001772e7
- (id)_matchSnapshotForCompletionMatch:(id)arg1;	// IMP=0x0000000000177098
- (id)initWithItems:(unique_ptr_5d7d1a42)arg1;	// IMP=0x0000000000176fc2
- (id)init;	// IMP=0x0000000000176fb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

