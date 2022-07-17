//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>
#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitCompetitionList, ASCompetition, CKRecord, NSArray, NSString, NSUUID;

@interface ASCompetitionList : NSObject <ASCloudKitCodable, NSCopying>
{
    NSArray *_competitions;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSUUID *_friendUUID;	// 24 = 0x18
    CKRecord *_systemFieldsOnlyRecord;	// 32 = 0x20
}

+ (id)competitionListWithCodableCompetitionList:(id)arg1;	// IMP=0x0000000000008a58
+ (id)competitionListWithRecord:(id)arg1;	// IMP=0x0000000000008773
+ (id)competitionListFromCodableDatabaseCompetitionList:(id)arg1 codableCompetitions:(id)arg2 withType:(long long)arg3;	// IMP=0x0000000000021742
- (void).cxx_destruct;	// IMP=0x000000000003b0e2
@property(copy, nonatomic) CKRecord *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *competitions; // @synthesize competitions=_competitions;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003afab
@property(readonly, nonatomic) ASCompetition *currentCompetition;
@property(readonly, copy) NSString *description;
- (id)initWithFriendUUID:(id)arg1 type:(long long)arg2;	// IMP=0x000000000003aea3
- (id)init;	// IMP=0x000000000003ae52
@property(readonly, nonatomic) ASCodableCloudKitCompetitionList *codableCompetitionList;
- (id)recordWithZoneID:(id)arg1;	// IMP=0x000000000000862e
- (id)codableDatabaseCompetitionListEntryForOwner:(long long)arg1;	// IMP=0x0000000000021a90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
