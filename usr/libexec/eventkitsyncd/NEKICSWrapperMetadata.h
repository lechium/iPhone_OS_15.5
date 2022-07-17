//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NEKICSWrapperMetadata : NSObject
{
    _Bool _hasProperInvitationStatus;	// 8 = 0x8
    _Bool _dateChanged;	// 9 = 0x9
    _Bool _timeChanged;	// 10 = 0xa
    _Bool _titleChanged;	// 11 = 0xb
    _Bool _locationChanged;	// 12 = 0xc
    _Bool _attendeeComment;	// 13 = 0xd
    _Bool _attendeeStatusFlag;	// 14 = 0xe
    unsigned long long _entityType;	// 16 = 0x10
    NSString *_selfAttendeeEmail;	// 24 = 0x18
    NSString *_selfAttendeeUUID;	// 32 = 0x20
    NSString *_selfOrganizerEmail;	// 40 = 0x28
    NSString *_selfOrganizerUUID;	// 48 = 0x30
    long long _attendeeStatus;	// 56 = 0x38
    unsigned long long _invitationStatus;	// 64 = 0x40
    unsigned long long _properInvitationStatus;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    NSDate *_startDate;	// 88 = 0x58
    NSString *_externalID;	// 96 = 0x60
    long long _locationPredictionState;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000023e9
@property(nonatomic) long long locationPredictionState; // @synthesize locationPredictionState=_locationPredictionState;
@property(copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool attendeeStatusFlag; // @synthesize attendeeStatusFlag=_attendeeStatusFlag;
@property(nonatomic) _Bool attendeeComment; // @synthesize attendeeComment=_attendeeComment;
@property(nonatomic) _Bool locationChanged; // @synthesize locationChanged=_locationChanged;
@property(nonatomic) _Bool titleChanged; // @synthesize titleChanged=_titleChanged;
@property(nonatomic) _Bool timeChanged; // @synthesize timeChanged=_timeChanged;
@property(nonatomic) _Bool dateChanged; // @synthesize dateChanged=_dateChanged;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasProperInvitationStatus; // @synthesize hasProperInvitationStatus=_hasProperInvitationStatus;
@property(nonatomic) unsigned long long properInvitationStatus; // @synthesize properInvitationStatus=_properInvitationStatus;
@property(nonatomic) unsigned long long invitationStatus; // @synthesize invitationStatus=_invitationStatus;
@property(nonatomic) long long attendeeStatus; // @synthesize attendeeStatus=_attendeeStatus;
@property(retain, nonatomic) NSString *selfOrganizerUUID; // @synthesize selfOrganizerUUID=_selfOrganizerUUID;
@property(retain, nonatomic) NSString *selfOrganizerEmail; // @synthesize selfOrganizerEmail=_selfOrganizerEmail;
@property(retain, nonatomic) NSString *selfAttendeeUUID; // @synthesize selfAttendeeUUID=_selfAttendeeUUID;
@property(retain, nonatomic) NSString *selfAttendeeEmail; // @synthesize selfAttendeeEmail=_selfAttendeeEmail;
@property(nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
- (id)description;	// IMP=0x0010000000002024

@end
