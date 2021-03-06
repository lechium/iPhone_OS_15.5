//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventTableBookingSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    long long _blurredBookingTimestamp;	// 16 = 0x10
    long long _blurredReservationTimestamp;	// 24 = 0x18
    NSString *_bookTableAppId;	// 32 = 0x20
    NSString *_bookTableSessionId;	// 40 = 0x28
    double _durationOfSessionInSeconds;	// 48 = 0x30
    NSMutableArray *_errorMessages;	// 56 = 0x38
    NSString *_installNeededTappedAppId;	// 64 = 0x40
    unsigned long long _muid;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    int _endState;	// 92 = 0x5c
    int _endView;	// 96 = 0x60
    unsigned int _tableSize;	// 100 = 0x64
    _Bool _addedSpecialRequest;	// 104 = 0x68
    _Bool _installCompleted;	// 105 = 0x69
    _Bool _installNeeded;	// 106 = 0x6a
    _Bool _swipedAvailableTimes;	// 107 = 0x6b
    _Bool _tappedDatePicker;	// 108 = 0x6c
    struct {
        unsigned int has_blurredBookingTimestamp:1;
        unsigned int has_blurredReservationTimestamp:1;
        unsigned int has_durationOfSessionInSeconds:1;
        unsigned int has_muid:1;
        unsigned int has_endState:1;
        unsigned int has_endView:1;
        unsigned int has_tableSize:1;
        unsigned int has_addedSpecialRequest:1;
        unsigned int has_installCompleted:1;
        unsigned int has_installNeeded:1;
        unsigned int has_swipedAvailableTimes:1;
        unsigned int has_tappedDatePicker:1;
        unsigned int read_bookTableAppId:1;
        unsigned int read_bookTableSessionId:1;
        unsigned int read_errorMessages:1;
        unsigned int read_installNeededTappedAppId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000011a2028
+ (Class)errorMessageType;	// IMP=0x00000000011a0912
- (void).cxx_destruct;	// IMP=0x00000000011a3c44
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000011a391d
- (unsigned long long)hash;	// IMP=0x00000000011a35e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011a322b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011a2d67
- (void)copyTo:(id)arg1;	// IMP=0x00000000011a2a7f
- (void)writeTo:(id)arg1;	// IMP=0x00000000011a25fb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011a25ec
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000011a1d75
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000011a1d63
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000011a1177
- (id)jsonRepresentation;	// IMP=0x00000000011a1168
- (id)dictionaryRepresentation;	// IMP=0x00000000011a09d2
- (id)description;	// IMP=0x00000000011a0923
- (id)errorMessageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011a08e1
- (unsigned long long)errorMessagesCount;	// IMP=0x00000000011a08b5
- (void)addErrorMessage:(id)arg1;	// IMP=0x00000000011a07fe
- (void)clearErrorMessages;	// IMP=0x00000000011a07d3
@property(retain, nonatomic) NSMutableArray *errorMessages;
@property(nonatomic) _Bool hasTappedDatePicker;
@property(nonatomic) _Bool tappedDatePicker;
@property(nonatomic) _Bool hasSwipedAvailableTimes;
@property(nonatomic) _Bool swipedAvailableTimes;
@property(nonatomic) _Bool hasAddedSpecialRequest;
@property(nonatomic) _Bool addedSpecialRequest;
@property(nonatomic) _Bool hasTableSize;
@property(nonatomic) unsigned int tableSize;
@property(nonatomic) _Bool hasInstallCompleted;
@property(nonatomic) _Bool installCompleted;
@property(retain, nonatomic) NSString *installNeededTappedAppId;
@property(readonly, nonatomic) _Bool hasInstallNeededTappedAppId;
@property(nonatomic) _Bool hasInstallNeeded;
@property(nonatomic) _Bool installNeeded;
@property(nonatomic) _Bool hasDurationOfSessionInSeconds;
@property(nonatomic) double durationOfSessionInSeconds;
@property(nonatomic) _Bool hasBlurredBookingTimestamp;
@property(nonatomic) long long blurredBookingTimestamp;
@property(nonatomic) _Bool hasBlurredReservationTimestamp;
@property(nonatomic) long long blurredReservationTimestamp;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(retain, nonatomic) NSString *bookTableAppId;
@property(readonly, nonatomic) _Bool hasBookTableAppId;
- (int)StringAsEndView:(id)arg1;	// IMP=0x000000000119fefc
- (id)endViewAsString:(int)arg1;	// IMP=0x000000000119fe48
@property(nonatomic) _Bool hasEndView;
@property(nonatomic) int endView;
- (int)StringAsEndState:(id)arg1;	// IMP=0x000000000119fce4
- (id)endStateAsString:(int)arg1;	// IMP=0x000000000119fc4b
@property(nonatomic) _Bool hasEndState;
@property(nonatomic) int endState;
@property(retain, nonatomic) NSString *bookTableSessionId;
@property(readonly, nonatomic) _Bool hasBookTableSessionId;
- (id)initWithData:(id)arg1;	// IMP=0x000000000119ec90
- (id)init;	// IMP=0x000000000119ec34

@end

