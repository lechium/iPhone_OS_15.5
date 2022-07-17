//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying>
{
    NSMutableArray *_appleLanguages;	// 8 = 0x8
    NSString *_appleLocale;	// 16 = 0x10
    NSData *_archivedPreferences;	// 24 = 0x18
}

+ (Class)appleLanguagesType;	// IMP=0x000000000000d48d
- (void).cxx_destruct;	// IMP=0x000000000000e036
@property(retain, nonatomic) NSData *archivedPreferences; // @synthesize archivedPreferences=_archivedPreferences;
@property(retain, nonatomic) NSString *appleLocale; // @synthesize appleLocale=_appleLocale;
@property(retain, nonatomic) NSMutableArray *appleLanguages; // @synthesize appleLanguages=_appleLanguages;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000de2d
- (unsigned long long)hash;	// IMP=0x000000000000ddc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000dcc8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000da92
- (void)copyTo:(id)arg1;	// IMP=0x000000000000d988
- (void)writeTo:(id)arg1;	// IMP=0x000000000000d80b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000d7fe
- (id)dictionaryRepresentation;	// IMP=0x000000000000d577
- (id)description;	// IMP=0x000000000000d4c8
@property(readonly, nonatomic) _Bool hasArchivedPreferences;
@property(readonly, nonatomic) _Bool hasAppleLocale;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000d470
- (unsigned long long)appleLanguagesCount;	// IMP=0x000000000000d453
- (void)addAppleLanguages:(id)arg1;	// IMP=0x000000000000d3e9
- (void)clearAppleLanguages;	// IMP=0x000000000000d3cc

@end
