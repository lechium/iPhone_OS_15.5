//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface AAFamilyMember : NSObject
{
    _Bool _isMe;	// 8 = 0x8
    _Bool _isChild;	// 9 = 0x9
    _Bool _isSharingPurchases;	// 10 = 0xa
    _Bool _isOrganizer;	// 11 = 0xb
    _Bool _areParentalControlsEnabled;	// 12 = 0xc
    _Bool _isAskToBuyEnabled;	// 13 = 0xd
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSNumber *_personID;	// 40 = 0x28
    NSString *_personIDHash;	// 48 = 0x30
    NSString *_altDSID;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSDate *_joinDate;	// 72 = 0x48
    NSString *_iTunesNotLinkedMessage;	// 80 = 0x50
    NSString *_linkediTunesAppleID;	// 88 = 0x58
    NSNumber *_linkediTunesDSID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000158f7
@property(nonatomic) _Bool isAskToBuyEnabled; // @synthesize isAskToBuyEnabled=_isAskToBuyEnabled;
@property(nonatomic) _Bool areParentalControlsEnabled; // @synthesize areParentalControlsEnabled=_areParentalControlsEnabled;
@property(copy, nonatomic) NSNumber *linkediTunesDSID; // @synthesize linkediTunesDSID=_linkediTunesDSID;
@property(copy, nonatomic) NSString *linkediTunesAppleID; // @synthesize linkediTunesAppleID=_linkediTunesAppleID;
@property(copy, nonatomic) NSString *iTunesNotLinkedMessage; // @synthesize iTunesNotLinkedMessage=_iTunesNotLinkedMessage;
@property(nonatomic) _Bool isOrganizer; // @synthesize isOrganizer=_isOrganizer;
@property(nonatomic) _Bool isSharingPurchases; // @synthesize isSharingPurchases=_isSharingPurchases;
@property(nonatomic) _Bool isChild; // @synthesize isChild=_isChild;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSDate *joinDate; // @synthesize joinDate=_joinDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *personIDHash; // @synthesize personIDHash=_personIDHash;
@property(copy, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;

@end

