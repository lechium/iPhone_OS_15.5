//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BMPBNotificationEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    unsigned long long _badge;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSString *_categoryID;	// 40 = 0x28
    NSMutableArray *_contactIDs;	// 48 = 0x30
    NSString *_deviceID;	// 56 = 0x38
    NSString *_notificationID;	// 64 = 0x40
    NSString *_sectionID;	// 72 = 0x48
    NSString *_subtitle;	// 80 = 0x50
    NSString *_threadID;	// 88 = 0x58
    NSString *_title;	// 96 = 0x60
    NSString *_uniqueID;	// 104 = 0x68
    int _usageType;	// 112 = 0x70
    _Bool _isGroupMessage;	// 116 = 0x74
    struct {
        unsigned int absoluteTimestamp:1;
        unsigned int badge:1;
        unsigned int usageType:1;
        unsigned int isGroupMessage:1;
    } _has;	// 120 = 0x78
}

+ (Class)contactIDsType;	// IMP=0x00000000000a9035
- (void).cxx_destruct;	// IMP=0x00000000000aaf83
@property(nonatomic) _Bool isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(retain, nonatomic) NSMutableArray *contactIDs; // @synthesize contactIDs=_contactIDs;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(nonatomic) unsigned long long badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000aaaa5
- (unsigned long long)hash;	// IMP=0x00000000000aa7d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa45a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aa078
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a9df4
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a9b05
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a9af8
- (id)dictionaryRepresentation;	// IMP=0x00000000000a9140
- (id)description;	// IMP=0x00000000000a9091
@property(nonatomic) _Bool hasIsGroupMessage;
- (id)contactIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a9018
- (unsigned long long)contactIDsCount;	// IMP=0x00000000000a8ffb
- (void)addContactIDs:(id)arg1;	// IMP=0x00000000000a8f91
- (void)clearContactIDs;	// IMP=0x00000000000a8f74
@property(readonly, nonatomic) _Bool hasSectionID;
@property(readonly, nonatomic) _Bool hasCategoryID;
@property(readonly, nonatomic) _Bool hasThreadID;
@property(nonatomic) _Bool hasBadge;
@property(readonly, nonatomic) _Bool hasBody;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasDeviceID;
@property(readonly, nonatomic) _Bool hasNotificationID;
@property(readonly, nonatomic) _Bool hasBundleID;
- (int)StringAsUsageType:(id)arg1;	// IMP=0x00000000000a8b88
- (id)usageTypeAsString:(int)arg1;	// IMP=0x00000000000a8a1a
@property(nonatomic) _Bool hasUsageType;
@property(nonatomic) int usageType; // @synthesize usageType=_usageType;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(readonly, nonatomic) _Bool hasUniqueID;

@end
