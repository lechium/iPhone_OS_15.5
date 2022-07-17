//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _connectEnd;	// 16 = 0x10
    double _connectStart;	// 24 = 0x18
    double _domainLookupEnd;	// 32 = 0x20
    double _domainLookupStart;	// 40 = 0x28
    double _fetchStart;	// 48 = 0x30
    double _requestEnd;	// 56 = 0x38
    double _requestStart;	// 64 = 0x40
    double _responseEnd;	// 72 = 0x48
    double _responseStart;	// 80 = 0x50
    double _secureConnectEnd;	// 88 = 0x58
    double _secureConnectStart;	// 96 = 0x60
    int _multipathServiceType;	// 104 = 0x68
    int _protocolName;	// 108 = 0x6c
    int _resourceFetchType;	// 112 = 0x70
    _Bool _isMultipath;	// 116 = 0x74
    _Bool _proxyConnection;	// 117 = 0x75
    _Bool _reusedConnection;	// 118 = 0x76
    struct {
        unsigned int has_connectEnd:1;
        unsigned int has_connectStart:1;
        unsigned int has_domainLookupEnd:1;
        unsigned int has_domainLookupStart:1;
        unsigned int has_fetchStart:1;
        unsigned int has_requestEnd:1;
        unsigned int has_requestStart:1;
        unsigned int has_responseEnd:1;
        unsigned int has_responseStart:1;
        unsigned int has_secureConnectEnd:1;
        unsigned int has_secureConnectStart:1;
        unsigned int has_multipathServiceType:1;
        unsigned int has_protocolName:1;
        unsigned int has_resourceFetchType:1;
        unsigned int has_isMultipath:1;
        unsigned int has_proxyConnection:1;
        unsigned int has_reusedConnection:1;
    } _flags;	// 120 = 0x78
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f557e7
- (void).cxx_destruct;	// IMP=0x0000000000f572eb
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f572a5
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f5704d
- (unsigned long long)hash;	// IMP=0x0000000000f56351
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f55f3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f55ccd
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f55a8a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f55803
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f557f4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f55787
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f55775
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f54c8e
- (id)jsonRepresentation;	// IMP=0x0000000000f54b7c
- (id)dictionaryRepresentation;	// IMP=0x0000000000f541fe
- (id)description;	// IMP=0x0000000000f5414f
- (int)StringAsMultipathServiceType:(id)arg1;	// IMP=0x0000000000f540a0
- (id)multipathServiceTypeAsString:(int)arg1;	// IMP=0x0000000000f54021
@property(nonatomic) _Bool hasMultipathServiceType;
@property(nonatomic) int multipathServiceType;
@property(nonatomic) _Bool hasIsMultipath;
@property(nonatomic) _Bool isMultipath;
- (int)StringAsResourceFetchType:(id)arg1;	// IMP=0x0000000000f53ea4
- (id)resourceFetchTypeAsString:(int)arg1;	// IMP=0x0000000000f53e27
@property(nonatomic) _Bool hasResourceFetchType;
@property(nonatomic) int resourceFetchType;
@property(nonatomic) _Bool hasReusedConnection;
@property(nonatomic) _Bool reusedConnection;
@property(nonatomic) _Bool hasProxyConnection;
@property(nonatomic) _Bool proxyConnection;
- (int)StringAsProtocolName:(id)arg1;	// IMP=0x0000000000f53be8
- (id)protocolNameAsString:(int)arg1;	// IMP=0x0000000000f53b42
@property(nonatomic) _Bool hasProtocolName;
@property(nonatomic) int protocolName;
@property(nonatomic) _Bool hasResponseEnd;
@property(nonatomic) double responseEnd;
@property(nonatomic) _Bool hasResponseStart;
@property(nonatomic) double responseStart;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) _Bool hasConnectEnd;
@property(nonatomic) double connectEnd;
@property(nonatomic) _Bool hasSecureConnectEnd;
@property(nonatomic) double secureConnectEnd;
@property(nonatomic) _Bool hasSecureConnectStart;
@property(nonatomic) double secureConnectStart;
@property(nonatomic) _Bool hasConnectStart;
@property(nonatomic) double connectStart;
@property(nonatomic) _Bool hasDomainLookupEnd;
@property(nonatomic) double domainLookupEnd;
@property(nonatomic) _Bool hasDomainLookupStart;
@property(nonatomic) double domainLookupStart;
@property(nonatomic) _Bool hasFetchStart;
@property(nonatomic) double fetchStart;

@end
