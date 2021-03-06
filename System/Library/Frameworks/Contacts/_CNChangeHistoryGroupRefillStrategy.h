//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNEnumeratorRefillStrategy-Protocol.h>

@class CNContactStore;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy>
{
    CNContactStore *_contactStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000101a96
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2;	// IMP=0x0000000000101722
- (id)fetchGroupsWithIdentifiers:(id)arg1;	// IMP=0x00000000001015ed
- (id)objectsRepresentedByBatch:(id)arg1;	// IMP=0x000000000010150e
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;	// IMP=0x00000000001014f6
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000101478

@end

