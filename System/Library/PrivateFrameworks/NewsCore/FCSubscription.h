//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCReorderableTagSubscription-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface FCSubscription : NSObject <FCReorderableTagSubscription>
{
    _Bool _notificationsEnabled;	// 8 = 0x8
    _Bool _canRetry;	// 9 = 0x9
    NSString *_subscriptionID;	// 16 = 0x10
    unsigned long long _subscriptionType;	// 24 = 0x18
    NSNumber *_order;	// 32 = 0x20
    NSDate *_dateAdded;	// 40 = 0x28
    unsigned long long _zone;	// 48 = 0x30
    unsigned long long _subscriptionOrigin;	// 56 = 0x38
    NSString *_tagID;	// 64 = 0x40
    NSString *_groupID;	// 72 = 0x48
    NSURL *_url;	// 80 = 0x50
    NSString *_title;	// 88 = 0x58
    NSURL *_pollingURL;	// 96 = 0x60
    NSString *_errorMessage;	// 104 = 0x68
}

+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;	// IMP=0x00000000000b93fd
+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 type:(unsigned long long)arg3 order:(id)arg4 origin:(unsigned long long)arg5 groupID:(id)arg6 dateAdded:(id)arg7 notificationsEnabled:(_Bool)arg8 zone:(unsigned long long)arg9;	// IMP=0x00000000000b9301
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;	// IMP=0x000000000018cc89
- (void).cxx_destruct;	// IMP=0x00000000000bab1f
@property(readonly, nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSURL *pollingURL; // @synthesize pollingURL=_pollingURL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) unsigned long long subscriptionOrigin; // @synthesize subscriptionOrigin=_subscriptionOrigin;
@property(readonly, nonatomic) unsigned long long zone; // @synthesize zone=_zone;
@property(readonly, nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(readonly, copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, copy, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(readonly, nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(readonly, copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
- (id)copyWithOrder:(id)arg1;	// IMP=0x00000000000ba837
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ba82c
- (id)description;	// IMP=0x00000000000ba679
- (id)asReorderableTagSubscription;	// IMP=0x00000000000ba64c
- (id)asCKRecord;	// IMP=0x00000000000b9e06
- (long long)comparePriority:(id)arg1;	// IMP=0x00000000000b9cc1
- (unsigned long long)priority;	// IMP=0x00000000000b9c99
- (_Bool)isDeprecated;	// IMP=0x00000000000b9c87
- (_Bool)isTypeIgnoredTag;	// IMP=0x00000000000b9c6d
- (_Bool)isTypeGroupableTag;	// IMP=0x00000000000b9c53
- (_Bool)isTypeAutoFavoriteTag;	// IMP=0x00000000000b9c39
- (_Bool)isTypeMutedTag;	// IMP=0x00000000000b9c1f
- (_Bool)isTypeTag;	// IMP=0x00000000000b9c06
- (_Bool)isTypePending;	// IMP=0x00000000000b9bec
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;	// IMP=0x00000000000b98e4
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned long long)arg5 order:(id)arg6 origin:(unsigned long long)arg7 notificationsEnabled:(_Bool)arg8 zone:(unsigned long long)arg9;	// IMP=0x00000000000b94e3
- (id)dictionaryRepresentation;	// IMP=0x000000000018d12d

@end

