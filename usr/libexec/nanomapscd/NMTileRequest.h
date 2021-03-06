//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class MISSING_TYPE, NSData, NSMutableArray, NSString;

@interface NMTileRequest : PBRequest
{
    NSMutableArray *_baseHeaders;	// 8 = 0x8
    NSString *_baseURL;	// 16 = 0x10
    NSString *_cachedBaseETag;	// 24 = 0x18
    NSString *_cachedETag;	// 32 = 0x20
    NSString *_cachedLocalizationETag;	// 40 = 0x28
    int _checksumMethod;	// 48 = 0x30
    NSMutableArray *_localizationHeaders;	// 56 = 0x38
    NSString *_localizationURL;	// 64 = 0x40
    unsigned int _priority;	// 72 = 0x48
    NSData *_tileKey;	// 80 = 0x50
    struct {
        unsigned int checksumMethod:1;
        unsigned int priority:1;
    } _has;	// 88 = 0x58
}

+ (Class)localizationHeadersType;	// IMP=0x002000000004fb44
+ (Class)baseHeadersType;	// IMP=0x001000000004fa48
- (void).cxx_destruct;	// IMP=0x002000000005184a
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) int checksumMethod; // @synthesize checksumMethod=_checksumMethod;
@property(retain, nonatomic) NSString *cachedLocalizationETag; // @synthesize cachedLocalizationETag=_cachedLocalizationETag;
@property(retain, nonatomic) NSMutableArray *localizationHeaders; // @synthesize localizationHeaders=_localizationHeaders;
@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(retain, nonatomic) NSString *cachedBaseETag; // @synthesize cachedBaseETag=_cachedBaseETag;
@property(retain, nonatomic) NSMutableArray *baseHeaders; // @synthesize baseHeaders=_baseHeaders;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *cachedETag; // @synthesize cachedETag=_cachedETag;
@property(retain, nonatomic) NSData *tileKey; // @synthesize tileKey=_tileKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000513b3
- (unsigned long long)hash;	// IMP=0x0010000000051278
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000051025
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000050bc6
- (void)copyTo:(id)arg1;	// IMP=0x001000000005095f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000050651
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000050644
- (MISSING_TYPE *)dictionaryRepresentation;	// IMP=0x001000000004fca7
- (id)description;	// IMP=0x001000000004fbf8
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) _Bool hasChecksumMethod;
@property(readonly, nonatomic) _Bool hasCachedLocalizationETag;
- (id)localizationHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000004fb27
- (unsigned long long)localizationHeadersCount;	// IMP=0x001000000004fb0a
- (void)addLocalizationHeaders:(id)arg1;	// IMP=0x001000000004faa0
- (void)clearLocalizationHeaders;	// IMP=0x001000000004fa83
@property(readonly, nonatomic) _Bool hasLocalizationURL;
@property(readonly, nonatomic) _Bool hasCachedBaseETag;
- (id)baseHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000004fa2b
- (unsigned long long)baseHeadersCount;	// IMP=0x001000000004fa0e
- (void)addBaseHeaders:(id)arg1;	// IMP=0x001000000004f9a4
- (void)clearBaseHeaders;	// IMP=0x001000000004f987
@property(readonly, nonatomic) _Bool hasBaseURL;
@property(readonly, nonatomic) _Bool hasCachedETag;
@property(readonly, nonatomic) _Bool hasTileKey;

@end

