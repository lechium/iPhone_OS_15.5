//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoSystemSettings/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NSSLegalDocumentsRespMsg : PBCodable <NSCopying>
{
    NSString *_buildVersion;	// 8 = 0x8
    NSData *_builtinApps;	// 16 = 0x10
    NSData *_legalNotices;	// 24 = 0x18
    NSData *_license;	// 32 = 0x20
    NSData *_sarStatement;	// 40 = 0x28
    _Bool _sarUrlAdded;	// 48 = 0x30
    struct {
        unsigned int sarUrlAdded:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000001c6a6
@property(retain, nonatomic) NSData *builtinApps; // @synthesize builtinApps=_builtinApps;
@property(nonatomic) _Bool sarUrlAdded; // @synthesize sarUrlAdded=_sarUrlAdded;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSData *legalNotices; // @synthesize legalNotices=_legalNotices;
@property(retain, nonatomic) NSData *sarStatement; // @synthesize sarStatement=_sarStatement;
@property(retain, nonatomic) NSData *license; // @synthesize license=_license;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c4fa
- (unsigned long long)hash;	// IMP=0x000000000001c433
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c29b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c161
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c07e
- (void)writeTo:(id)arg1;	// IMP=0x000000000001bfa5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001bf98
- (id)dictionaryRepresentation;	// IMP=0x000000000001bba1
- (id)description;	// IMP=0x000000000001baf2
@property(readonly, nonatomic) _Bool hasBuiltinApps;
@property(nonatomic) _Bool hasSarUrlAdded;
@property(readonly, nonatomic) _Bool hasBuildVersion;
@property(readonly, nonatomic) _Bool hasLegalNotices;
@property(readonly, nonatomic) _Bool hasSarStatement;
@property(readonly, nonatomic) _Bool hasLicense;

@end

