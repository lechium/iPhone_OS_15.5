//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKPersistentEvent, NSDate, NSString;

@interface EKPersistentSuggestedEventInfo
{
}

+ (id)relations;	// IMP=0x00000000000c1e31
+ (Class)meltedClass;	// IMP=0x00000000000c1cee
+ (id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;	// IMP=0x000000000006e417
- (id)semanticIdentifier;	// IMP=0x00000000000c20bf
@property(nonatomic) EKPersistentEvent *owner; // @dynamic owner;
- (void)setTimestampAsDate:(id)arg1;	// IMP=0x00000000000c206b
- (id)timestampAsDate;	// IMP=0x00000000000c204f
@property(nonatomic) _Bool changesAcknowledged; // @dynamic changesAcknowledged;
@property(nonatomic) unsigned long long changedFields; // @dynamic changedFields;
@property(copy, nonatomic) NSString *extractionGroupIdentifier; // @dynamic extractionGroupIdentifier;
@property(copy, nonatomic) NSString *uniqueKey; // @dynamic uniqueKey;
@property(copy, nonatomic) NSString *opaqueKey; // @dynamic opaqueKey;
- (int)entityType;	// IMP=0x00000000000c1f23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c1cff

// Remaining properties
@property(copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;

@end
