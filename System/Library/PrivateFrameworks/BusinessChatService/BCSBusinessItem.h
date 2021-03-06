//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSCopying-Protocol.h>
#import <BusinessChatService/NSSecureCoding-Protocol.h>

@class BCSBusinessItemIdentifier, BCSOpenHours, NSArray, NSDate, NSString, NSURL;

@interface BCSBusinessItem <NSCopying, NSSecureCoding>
{
    NSString *_bizID;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    long long _phoneHash;	// 32 = 0x20
    NSURL *_squareLogoURL;	// 40 = 0x28
    NSURL *_wideLogoURL;	// 48 = 0x30
    unsigned long long _tintColor;	// 56 = 0x38
    unsigned long long _backgroundColor;	// 64 = 0x40
    NSArray *_callToActions;	// 72 = 0x48
    NSArray *_visibilityItems;	// 80 = 0x50
    BCSOpenHours *_messagingOpenHours;	// 88 = 0x58
    BCSOpenHours *_callingOpenHours;	// 96 = 0x60
    _Bool _isVerified;	// 104 = 0x68
    NSString *_intentID;	// 112 = 0x70
    NSString *_groupID;	// 120 = 0x78
    BCSBusinessItemIdentifier *_itemIdentifier;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000041a90
+ (id)businessItemsFromRecords:(id)arg1;	// IMP=0x00000000000265ef
+ (id)businessItemsFromChatSuggestMessageDictionary:(id)arg1;	// IMP=0x0000000000026269
+ (id)businessItemsFromChatSuggestJSONObj:(id)arg1;	// IMP=0x0000000000025e1c
- (void).cxx_destruct;	// IMP=0x0000000000041b96
@property(readonly, nonatomic) NSArray *visibilityItems; // @synthesize visibilityItems=_visibilityItems;
@property(readonly, nonatomic) BCSOpenHours *callingOpenHours; // @synthesize callingOpenHours=_callingOpenHours;
@property(readonly, nonatomic) BCSOpenHours *messagingOpenHours; // @synthesize messagingOpenHours=_messagingOpenHours;
@property(readonly, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *intentID; // @synthesize intentID=_intentID;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(readonly, nonatomic) NSArray *callToActions; // @synthesize callToActions=_callToActions;
@property(readonly, nonatomic) unsigned long long backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) unsigned long long tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, copy, nonatomic) NSURL *wideLogoURL; // @synthesize wideLogoURL=_wideLogoURL;
@property(readonly, copy, nonatomic) NSURL *squareLogoURL; // @synthesize squareLogoURL=_squareLogoURL;
@property(readonly, nonatomic) long long phoneHash; // @synthesize phoneHash=_phoneHash;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *bizID; // @synthesize bizID=_bizID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004167b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041495
- (id)_selectedVisibilityItemForLanguage:(id)arg1 country:(id)arg2;	// IMP=0x0000000000040fa0
- (_Bool)_isChatSuggestVisibleForVisibilityItem:(id)arg1 messagesIdentifier:(id)arg2 bizID:(id)arg3;	// IMP=0x0000000000040f1b
- (id)callToAction;	// IMP=0x0000000000040c98
@property(readonly, nonatomic, getter=_businessItemIdentifier) BCSBusinessItemIdentifier *businessItemIdentifier;
- (_Bool)matchesItemIdentifying:(id)arg1;	// IMP=0x0000000000040bd5
- (long long)type;	// IMP=0x0000000000040b91
- (long long)truncatedHash;	// IMP=0x0000000000040b4d
- (id)itemIdentifier;	// IMP=0x0000000000040afd
@property(readonly, nonatomic) NSURL *messagesOpenURL;
@property(readonly, nonatomic) NSDate *dateWhenCallingAvailableNext;
@property(readonly, nonatomic) _Bool isAvailableForCalling;
@property(readonly, nonatomic) NSDate *dateWhenMessagingAvailableNext;
@property(readonly, nonatomic) _Bool isAvailableForMessaging;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ffe4
- (id)debugDescription;	// IMP=0x000000000003f9bd
- (id)description;	// IMP=0x000000000003f8e9
- (id)initWithBizID:(id)arg1 phoneNumber:(id)arg2 name:(id)arg3 phoneHash:(long long)arg4 squareLogoURL:(id)arg5 wideLogoURL:(id)arg6 tintColor:(unsigned long long)arg7 backgroundColor:(unsigned long long)arg8 callToActions:(id)arg9 messagingOpenHours:(id)arg10 callingOpenHours:(id)arg11 isVerified:(_Bool)arg12 intentID:(id)arg13 groupID:(id)arg14 visibilityItems:(id)arg15;	// IMP=0x000000000003f61b
- (id)initWithChatSuggestMessage:(id)arg1 bucketID:(id)arg2;	// IMP=0x00000000000256b5
@property(readonly, nonatomic) NSString *messageSubtitle;
@property(readonly, nonatomic) NSString *messageTitle;
@property(readonly, nonatomic) NSString *callSubtitle;
- (unsigned long long)_integerForHexString:(id)arg1;	// IMP=0x0000000000041c71
- (id)initWithJSONObj:(id)arg1;	// IMP=0x00000000000424cf

@end

