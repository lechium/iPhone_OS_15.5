//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/NSCopying-Protocol.h>
#import <CallHistory/NSSecureCoding-Protocol.h>

@class CHHandle, CHPhoneBookIOSManager, CNContact, INInteraction, NSArray, NSDate, NSDateInterval, NSDictionary, NSNumber, NSSet, NSString, NSUUID, NSValue;

@interface CHRecentCall : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _read;	// 8 = 0x8
    _Bool _callerIdIsBlocked;	// 9 = 0x9
    _Bool _multiCall;	// 10 = 0xa
    _Bool _answered;	// 11 = 0xb
    _Bool _mobileOriginated;	// 12 = 0xc
    unsigned int _callStatus;	// 16 = 0x10
    unsigned int _callerIdAvailability;	// 20 = 0x14
    unsigned int _callCategory;	// 24 = 0x18
    unsigned int _callType;	// 28 = 0x1c
    CHHandle *_localParticipantHandle;	// 32 = 0x20
    NSUUID *_localParticipantUUID;	// 40 = 0x28
    NSUUID *_outgoingLocalParticipantUUID;	// 48 = 0x30
    NSSet *_remoteParticipantHandles;	// 56 = 0x38
    NSString *_uniqueId;	// 64 = 0x40
    NSString *_callerNetworkName;	// 72 = 0x48
    NSString *_serviceProvider;	// 80 = 0x50
    NSNumber *_bytesOfDataUsed;	// 88 = 0x58
    NSDate *_date;	// 96 = 0x60
    double _duration;	// 104 = 0x68
    NSString *_isoCountryCode;	// 112 = 0x70
    NSString *_mobileCountryCode;	// 120 = 0x78
    NSString *_mobileNetworkCode;	// 128 = 0x80
    NSNumber *_disconnectedCause;	// 136 = 0x88
    NSNumber *_filteredOutReason;	// 144 = 0x90
    NSString *_callerNetworkFirstName;	// 152 = 0x98
    NSString *_callerNetworkSecondName;	// 160 = 0xa0
    unsigned long long _unreadCount;	// 168 = 0xa8
    NSArray *_callOccurrences;	// 176 = 0xb0
    NSString *_clientAddressBookRecordId;	// 184 = 0xb8
    NSString *_contactIdentifier;	// 192 = 0xc0
    long long _mediaType;	// 200 = 0xc8
    long long _ttyType;	// 208 = 0xd0
    long long _handleType;	// 216 = 0xd8
    NSNumber *_timeToEstablish;	// 224 = 0xe0
    NSValue *_addressBookRecordRef;	// 232 = 0xe8
    NSString *_addressBookRecordId;	// 240 = 0xf0
    NSString *_addressBookCallerIDMultiValueId;	// 248 = 0xf8
    NSString *_devicePhoneId;	// 256 = 0x100
    NSString *_callerId;	// 264 = 0x108
    CNContact *_contactRef;	// 272 = 0x110
    long long _junkConfidence;	// 280 = 0x118
    long long _verificationStatus;	// 288 = 0x120
    NSString *_callerName;	// 296 = 0x128
    NSString *_callerIdLabel;	// 304 = 0x130
    NSString *_callerIdLocation;	// 312 = 0x138
    NSUUID *_participantGroupUUID;	// 320 = 0x140
    CHPhoneBookIOSManager *_phoneBookManager;	// 328 = 0x148
    NSString *_callerIdFormatted;	// 336 = 0x150
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031648
+ (unsigned int)getCallTypeForCategory:(unsigned int)arg1 andServiceProvider:(id)arg2;	// IMP=0x0000000000031461
+ (id)serviceProviderForCallType:(unsigned int)arg1;	// IMP=0x0000000000031418
+ (unsigned int)categoryForCallType:(unsigned int)arg1;	// IMP=0x00000000000313d9
+ (unsigned int)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2;	// IMP=0x0000000000031395
+ (long long)ttyTypeForCallCategory:(unsigned int)arg1;	// IMP=0x000000000003136f
+ (long long)mediaTypeForCallCategory:(unsigned int)arg1;	// IMP=0x0000000000031349
+ (id)callCategoryAsString:(unsigned int)arg1;	// IMP=0x0000000000030e76
+ (id)callStatusAsString:(unsigned int)arg1;	// IMP=0x0000000000030dc6
+ (id)callTypeAsString:(unsigned int)arg1;	// IMP=0x0000000000030d16
+ (id)callHandleTypeAsString:(long long)arg1;	// IMP=0x0000000000030cdc
+ (id)callTTYTypeAsString:(long long)arg1;	// IMP=0x0000000000030ca3
+ (id)callMediaTypeAsString:(long long)arg1;	// IMP=0x0000000000030c6a
+ (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;	// IMP=0x000000000002ffd7
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c699
+ (id)unarchivedObjectClasses;	// IMP=0x000000000002c651
+ (id)predicateForCallsWithAnyUniqueIDs:(id)arg1;	// IMP=0x000000000003aa5e
+ (id)predicateForCallsWithUniqueID:(id)arg1;	// IMP=0x000000000003aa39
+ (id)predicateForCallsWithAnyTTYTypes:(id)arg1;	// IMP=0x000000000003a7a3
+ (id)predicateForCallsWithTTYType:(long long)arg1;	// IMP=0x000000000003a733
+ (id)predicateForCallsWithStatusJunk:(_Bool)arg1;	// IMP=0x000000000003a6ec
+ (id)predicateForCallsWithStatusRead:(_Bool)arg1;	// IMP=0x000000000003a6c8
+ (id)predicateForCallsWithStatusOriginated:(_Bool)arg1;	// IMP=0x000000000003a6a4
+ (id)predicateForCallsWithStatusAnswered:(_Bool)arg1;	// IMP=0x000000000003a680
+ (id)predicateForCallsWithStatus:(unsigned int)arg1;	// IMP=0x000000000003a5a6
+ (id)predicateForCallsWithAnyServiceProviders:(id)arg1;	// IMP=0x000000000003a522
+ (id)predicateForCallsWithServiceProvider:(id)arg1;	// IMP=0x000000000003a4fd
+ (id)predicateForCallsWithAnyRemoteParticipantHandleNormalizedValues:(id)arg1;	// IMP=0x000000000003a3d8
+ (id)predicateForCallsWithAnyRemoteParticipantHandleValues:(id)arg1;	// IMP=0x000000000003a2b3
+ (id)predicateForCallsWithAnyRemoteParticipantHandleTypes:(id)arg1;	// IMP=0x0000000000039ff9
+ (id)predicateForCallsWithAnyRemoteParticipantHandles:(id)arg1;	// IMP=0x00000000000399f0
+ (id)predicateForCallsWithRemoteParticipantHandleNormalizedValue:(id)arg1;	// IMP=0x00000000000399cb
+ (id)predicateForCallsWithRemoteParticipantHandleValue:(id)arg1;	// IMP=0x00000000000399a6
+ (id)predicateForCallsWithRemoteParticipantHandleType:(long long)arg1;	// IMP=0x0000000000039981
+ (id)predicateForCallsWithRemoteParticipantHandle:(id)arg1;	// IMP=0x0000000000039756
+ (id)predicateForCallsWithRemoteParticipantCount:(long long)arg1;	// IMP=0x0000000000039731
+ (id)predicateForCallsWithAnyMediaTypes:(id)arg1;	// IMP=0x000000000003949b
+ (id)predicateForCallsWithMediaType:(long long)arg1;	// IMP=0x000000000003942b
+ (id)predicateForCallsWithCategory:(unsigned int)arg1;	// IMP=0x0000000000039404
+ (id)predicateForCallsBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000000392cb
- (void).cxx_destruct;	// IMP=0x0000000000033118
@property _Bool mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
@property _Bool answered; // @synthesize answered=_answered;
@property(copy, nonatomic, getter=callerIdForDisplay) NSString *callerIdFormatted; // @synthesize callerIdFormatted=_callerIdFormatted;
@property(retain, nonatomic) CHPhoneBookIOSManager *phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
@property(retain, nonatomic) NSUUID *participantGroupUUID; // @synthesize participantGroupUUID=_participantGroupUUID;
@property(nonatomic) _Bool multiCall; // @synthesize multiCall=_multiCall;
@property(copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property(copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(nonatomic) long long junkConfidence; // @synthesize junkConfidence=_junkConfidence;
@property(copy, nonatomic) CNContact *contactRef; // @synthesize contactRef=_contactRef;
@property(copy, nonatomic) NSString *callerId; // @synthesize callerId=_callerId;
@property(copy, nonatomic) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property(nonatomic) unsigned int callCategory; // @synthesize callCategory=_callCategory;
@property(copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
@property(copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
@property(copy, nonatomic) NSValue *addressBookRecordRef; // @synthesize addressBookRecordRef=_addressBookRecordRef;
@property(retain, nonatomic) NSNumber *timeToEstablish; // @synthesize timeToEstablish=_timeToEstablish;
@property(nonatomic) long long handleType; // @synthesize handleType=_handleType;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy) NSString *clientAddressBookRecordId; // @synthesize clientAddressBookRecordId=_clientAddressBookRecordId;
@property(copy, nonatomic) NSArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property(copy, nonatomic) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property(nonatomic) _Bool callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property(nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
@property(retain, nonatomic) NSNumber *filteredOutReason; // @synthesize filteredOutReason=_filteredOutReason;
@property(retain, nonatomic) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property(copy, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(nonatomic) _Bool read; // @synthesize read=_read;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property(copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSUUID *outgoingLocalParticipantUUID; // @synthesize outgoingLocalParticipantUUID=_outgoingLocalParticipantUUID;
@property(retain, nonatomic) NSUUID *localParticipantUUID; // @synthesize localParticipantUUID=_localParticipantUUID;
@property(retain, nonatomic) CHHandle *localParticipantHandle; // @synthesize localParticipantHandle=_localParticipantHandle;
- (_Bool)isEqualToRecentCall:(id)arg1;	// IMP=0x0000000000032c67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032c00
- (unsigned long long)hash;	// IMP=0x0000000000032bbc
- (id)description;	// IMP=0x000000000003249b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031fb1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000319bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000031650
@property(readonly, nonatomic) _Bool isJunk;
- (void)fixCallTypeInfo;	// IMP=0x0000000000031522
- (void)updateTTYAndMediaType;	// IMP=0x00000000000312fd
- (id)callOccurrencesAsString;	// IMP=0x000000000003075b
- (id)callerIdSubStringForDisplay;	// IMP=0x00000000000306ee
- (id)callerNameForDisplay;	// IMP=0x000000000002f921
- (id)getLocalizedString:(id)arg1;	// IMP=0x000000000002f783
- (_Bool)callerIdIsEmailAddress;	// IMP=0x000000000002f26b
- (void)fetchAndSetFullContact;	// IMP=0x000000000002e94b
- (void)fetchAndSetContactIdentifier;	// IMP=0x000000000002e4bd
- (long long)countOfExcludedHandles;	// IMP=0x000000000002e321
- (id)validRemoteParticipantHandles;	// IMP=0x000000000002e15a
- (unsigned long long)numberOfOccurrences;	// IMP=0x000000000002dfb1
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)coalescedCallWithCall:(id)arg1 usingStrategy:(id)arg2;	// IMP=0x000000000002daca
- (_Bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;	// IMP=0x000000000002d6c1
- (_Bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;	// IMP=0x000000000002d512
- (_Bool)canCoalesceRemoteParticipantHandlesFromCall:(id)arg1;	// IMP=0x000000000002d27b
- (_Bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;	// IMP=0x000000000002ca0c
- (id)callOccurrencesArrayByAddingCallOccurrencesFromArray:(id)arg1;	// IMP=0x000000000002c820
- (id)init;	// IMP=0x000000000002c72b
- (id)archivedDataWithError:(id *)arg1;	// IMP=0x000000000002c62d
@property(readonly, nonatomic) NSDateInterval *interactionDateInterval;
@property(readonly, nonatomic) INInteraction *interaction;
@property(readonly, copy, nonatomic) NSString *notificationThreadIdentifier;

@end
