//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHObject;
@protocol PHShare;

@interface PHShareRelationshipChangeRequestHelper
{
    PHObject<PHShare> *_originalShare;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007824
@property(nonatomic) __weak PHObject<PHShare> *originalShare; // @synthesize originalShare=_originalShare;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000076db
- (void)removeParticipants:(id)arg1 toChangeRequest:(id)arg2;	// IMP=0x00000000000074bb
- (void)addParticipants:(id)arg1 toChangeRequest:(id)arg2;	// IMP=0x000000000000729b
- (id)_mutableParticipantsObjectIDsAndUUIDs;	// IMP=0x000000000000726d
- (void)_prepareParticipantsHelperIfNeeded;	// IMP=0x0000000000007065
- (void)_prepareParticipantsWithFetchResult:(id)arg1;	// IMP=0x0000000000006fcb
- (id)initWithXpcDict:(id)arg1 changeRequestHelper:(id)arg2;	// IMP=0x0000000000006f8f
- (id)initWithChangeRequestHelper:(id)arg1;	// IMP=0x0000000000006f56

@end
