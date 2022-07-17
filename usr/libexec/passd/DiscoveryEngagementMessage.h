//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DiscoveryEngagementMessage
{
    long long _messageOrder;	// 24 = 0x18
}

+ (id)_propertySettersForEngagementMessage;	// IMP=0x004000000000afa1
+ (id)_predicateForCheckingRelevantDate:(id)arg1;	// IMP=0x001000000000ace1
+ (id)_predicateForActiveEngagementMessagesWithPassQualifier:(long long)arg1;	// IMP=0x001000000000abe6
+ (id)_predicateForEngagementMessagesWithPassQualifier:(long long)arg1;	// IMP=0x001000000000ab4a
+ (id)_predicateForEngagementMessageIdentifier:(id)arg1;	// IMP=0x001000000000ab27
+ (void)deleteAllEngagementMessagesInDatabase:(id)arg1;	// IMP=0x001000000000aa5e
+ (void)deleteEngagementMessagesNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000000a9b9
+ (void)deleteEngagementMessageWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000000a920
+ (id)updateEngagementMessage:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000000a820
+ (id)insertOrUpdateEngagementMessage:(id)arg1 messageOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000a1a8
+ (id)_engagementMessagesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000009f5e
+ (id)engagementMessageWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000009ec5
+ (id)engagementMessagesForPassQualifier:(long long)arg1 active:(unsigned long long)arg2 relevantDate:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000009d4c
+ (id)databaseTable;	// IMP=0x0010000000009d3f
@property(nonatomic) long long messageOrder; // @synthesize messageOrder=_messageOrder;
- (void)setMessageOrder;	// IMP=0x001000000000bc25
- (id)_dictWithPropertiesForEngagementMessage:(id)arg1;	// IMP=0x001000000000b6b4
- (_Bool)deleteFromDatabase;	// IMP=0x001000000000aaf8
- (void)updateWithEngagementMessage:(id)arg1;	// IMP=0x001000000000a8d4
- (id)engagementMessage;	// IMP=0x001000000000a326
- (id)initWithEngagementMessage:(id)arg1 messageOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000a29b

@end
