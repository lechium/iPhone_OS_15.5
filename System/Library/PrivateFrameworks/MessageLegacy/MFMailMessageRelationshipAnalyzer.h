//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFMailMessageRelationshipAnalyzer : NSObject
{
    NSArray *_messages;	// 8 = 0x8
    NSArray *_relationships;	// 16 = 0x10
}

+ (_Bool)isMessage:(id)arg1 sentByAddress:(id)arg2;	// IMP=0x0000000000054bdb
+ (id)myEmailAddresses;	// IMP=0x0000000000054b6b
+ (_Bool)isMessage:(id)arg1 forwardOfMessage:(id)arg2 myEmailAddresses:(id)arg3;	// IMP=0x0000000000054b56
+ (_Bool)isMessageDraft:(id)arg1;	// IMP=0x0000000000054b24
+ (id)recipientsOfMessage:(id)arg1;	// IMP=0x0000000000054ada
+ (_Bool)isMessage:(id)arg1 addressedToMailingListForMessage:(id)arg2;	// IMP=0x00000000000549f8
+ (_Bool)isMessage:(id)arg1 addressedToPreviousSender:(id)arg2;	// IMP=0x000000000005495a
+ (_Bool)isMessage:(id)arg1 responseToMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;	// IMP=0x00000000000548e8
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;	// IMP=0x0000000000054849
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2;	// IMP=0x0000000000054801
+ (id)sendersOfMessage:(id)arg1;	// IMP=0x0000000000054787
+ (id)analyzeMessages:(id)arg1 myEmailAddresses:(id)arg2;	// IMP=0x0000000000054649
+ (id)analysisOfConversation:(id)arg1;	// IMP=0x00000000000544c4
- (unsigned long long)relationOfMessage:(id)arg1;	// IMP=0x00000000000545eb
- (void)dealloc;	// IMP=0x00000000000545a1
- (id)initWithMessages:(id)arg1 relationships:(id)arg2;	// IMP=0x0000000000054527

@end

