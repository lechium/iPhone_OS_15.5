//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface APPBAttributionRequest : PBRequest
{
    double _downloadClickTimestamp;	// 8 = 0x8
    double _iAdConversionTimestamp;	// 16 = 0x10
    double _iAdImpressionTimestamp;	// 24 = 0x18
    double _purchaseTimestamp;	// 32 = 0x20
    double _searchAdClickTimestamp;	// 40 = 0x28
    NSString *_adMetadata;	// 48 = 0x30
    NSData *_anonymousDemandiAdID;	// 56 = 0x38
    NSString *_bundleID;	// 64 = 0x40
    NSData *_dPID;	// 72 = 0x48
    int _downloadType;	// 80 = 0x50
    NSData *_iAdID;	// 88 = 0x58
    int _runState;	// 96 = 0x60
    NSData *_tiltID;	// 104 = 0x68
    NSData *_toroID;	// 112 = 0x70
    _Bool _attributedByiTunes;	// 120 = 0x78
    struct {
        unsigned int downloadClickTimestamp:1;
        unsigned int iAdConversionTimestamp:1;
        unsigned int iAdImpressionTimestamp:1;
        unsigned int purchaseTimestamp:1;
        unsigned int searchAdClickTimestamp:1;
        unsigned int downloadType:1;
        unsigned int runState:1;
        unsigned int attributedByiTunes:1;
    } _has;	// 124 = 0x7c
}

+ (id)options;	// IMP=0x0020000000053c60
- (void).cxx_destruct;	// IMP=0x00200000000560fe
@property(nonatomic) double downloadClickTimestamp; // @synthesize downloadClickTimestamp=_downloadClickTimestamp;
@property(retain, nonatomic) NSString *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(nonatomic) double searchAdClickTimestamp; // @synthesize searchAdClickTimestamp=_searchAdClickTimestamp;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSData *toroID; // @synthesize toroID=_toroID;
@property(nonatomic) _Bool attributedByiTunes; // @synthesize attributedByiTunes=_attributedByiTunes;
@property(nonatomic) double iAdImpressionTimestamp; // @synthesize iAdImpressionTimestamp=_iAdImpressionTimestamp;
@property(nonatomic) double iAdConversionTimestamp; // @synthesize iAdConversionTimestamp=_iAdConversionTimestamp;
@property(nonatomic) double purchaseTimestamp; // @synthesize purchaseTimestamp=_purchaseTimestamp;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *anonymousDemandiAdID; // @synthesize anonymousDemandiAdID=_anonymousDemandiAdID;
@property(retain, nonatomic) NSData *tiltID; // @synthesize tiltID=_tiltID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000055d93
- (unsigned long long)hash;	// IMP=0x00100000000556c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005534e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000550df
- (void)copyTo:(id)arg1;	// IMP=0x0010000000054ee1
- (void)writeTo:(id)arg1;	// IMP=0x0010000000054ce1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000054cd4
- (id)dictionaryRepresentation;	// IMP=0x0010000000054278
- (id)description;	// IMP=0x00000000000541c9
- (int)StringAsDownloadType:(id)arg1;	// IMP=0x0010000000054137
- (id)downloadTypeAsString:(int)arg1;	// IMP=0x00100000000540d1
@property(nonatomic) _Bool hasDownloadType;
@property(nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) _Bool hasDownloadClickTimestamp;
@property(readonly, nonatomic) _Bool hasAdMetadata;
@property(nonatomic) _Bool hasSearchAdClickTimestamp;
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasToroID;
- (int)StringAsRunState:(id)arg1;	// IMP=0x0010000000053f02
- (id)runStateAsString:(int)arg1;	// IMP=0x0010000000053e9c
@property(nonatomic) _Bool hasRunState;
@property(nonatomic) int runState; // @synthesize runState=_runState;
@property(nonatomic) _Bool hasAttributedByiTunes;
@property(nonatomic) _Bool hasIAdImpressionTimestamp;
@property(nonatomic) _Bool hasIAdConversionTimestamp;
@property(nonatomic) _Bool hasPurchaseTimestamp;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasAnonymousDemandiAdID;
@property(readonly, nonatomic) _Bool hasTiltID;
@property(readonly, nonatomic) _Bool hasIAdID;

@end
