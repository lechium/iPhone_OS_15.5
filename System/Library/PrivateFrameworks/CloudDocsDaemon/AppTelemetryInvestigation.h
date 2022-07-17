//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface AppTelemetryInvestigation : PBCodable <NSCopying>
{
    long long _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    NSString *_itemID;	// 32 = 0x20
    NSString *_lastStep;	// 40 = 0x28
    NSString *_operationType;	// 48 = 0x30
    NSString *_reason;	// 56 = 0x38
    NSData *_zoneName;	// 64 = 0x40
    _Bool _hasForegroundClients;	// 72 = 0x48
    _Bool _isPCSChained;	// 73 = 0x49
    _Bool _nonDiscretionary;	// 74 = 0x4a
    _Bool _sharedZone;	// 75 = 0x4b
    struct {
        unsigned int errorCode:1;
        unsigned int hasForegroundClients:1;
        unsigned int isPCSChained:1;
        unsigned int nonDiscretionary:1;
        unsigned int sharedZone:1;
    } _has;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x000000000005ded8
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005dd3f
- (unsigned long long)hash;	// IMP=0x000000000005dbac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d8d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d6ca
- (void)copyTo:(id)arg1;	// IMP=0x000000000005d531
- (void)writeTo:(id)arg1;	// IMP=0x000000000005d395
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005d388
- (id)dictionaryRepresentation;	// IMP=0x000000000005cb4b
- (id)description;	// IMP=0x000000000005ca9c
@property(nonatomic) _Bool hasIsPCSChained;
@property(nonatomic) _Bool isPCSChained;
@property(nonatomic) _Bool hasHasForegroundClients;
@property(nonatomic) _Bool hasForegroundClients;
@property(nonatomic) _Bool hasNonDiscretionary;
@property(nonatomic) _Bool nonDiscretionary;
@property(retain, nonatomic) NSString *operationType;
@property(readonly, nonatomic) _Bool hasOperationType;
@property(retain, nonatomic) NSString *reason;
@property(readonly, nonatomic) _Bool hasReason;
@property(retain, nonatomic) NSString *itemID;
@property(readonly, nonatomic) _Bool hasItemID;
@property(retain, nonatomic) NSString *lastStep;
@property(readonly, nonatomic) _Bool hasLastStep;
@property(retain, nonatomic) NSString *errorDescription;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) long long errorCode;
@property(retain, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasSharedZone;
@property(nonatomic) _Bool sharedZone;
@property(retain, nonatomic) NSData *zoneName;
@property(readonly, nonatomic) _Bool hasZoneName;

@end
