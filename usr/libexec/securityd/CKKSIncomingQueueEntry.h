//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSString;

__attribute__((visibility("hidden")))
@interface CKKSIncomingQueueEntry
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
}

+ (_Bool)allIQEsHaveValidUnwrappingKeys:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006c38e
+ (id)countNewEntriesByKeyInZone:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006c1b1
+ (long long)countByState:(id)arg1 zone:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006bf77
+ (id)countsByStateInZone:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006bdb0
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000006bc86
+ (id)sqlColumns;	// IMP=0x001000000006bc28
+ (id)sqlTable;	// IMP=0x001000000006bc1b
+ (id)fetch:(long long)arg1 startingAtUUID:(id)arg2 state:(id)arg3 action:(id)arg4 zoneID:(id)arg5 error:(id *)arg6;	// IMP=0x001000000006b9b7
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006b81a
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006b67d
- (void).cxx_destruct;	// IMP=0x002000000006b63b
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x001000000006b4ce
- (id)whereClauseToFindSelf;	// IMP=0x001000000006b378
@property(retain) NSString *uuid;
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3;	// IMP=0x001000000006b1f0
- (id)description;	// IMP=0x001000000006b085

@end

