//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HMImmutableSettingsProtoAvailableLanguageListEvent : PBCodable <NSCopying>
{
    NSMutableArray *_languages;	// 8 = 0x8
}

+ (Class)languagesType;	// IMP=0x000000000001fcce
- (void).cxx_destruct;	// IMP=0x000000000001fb0b
@property(retain, nonatomic) NSMutableArray *languages; // @synthesize languages=_languages;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f9b1
- (unsigned long long)hash;	// IMP=0x000000000001f994
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f8fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f737
- (void)copyTo:(id)arg1;	// IMP=0x000000000001f670
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f540
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f533
- (id)dictionaryRepresentation;	// IMP=0x000000000001f300
- (id)description;	// IMP=0x000000000001f251
- (id)languagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001f234
- (unsigned long long)languagesCount;	// IMP=0x000000000001f217
- (void)addLanguages:(id)arg1;	// IMP=0x000000000001f1ad
- (void)clearLanguages;	// IMP=0x000000000001f190

@end

