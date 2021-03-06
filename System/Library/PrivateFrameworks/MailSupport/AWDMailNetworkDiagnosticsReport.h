//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@class NSString;

@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying>
{
    unsigned long long _numActiveCalls;	// 8 = 0x8
    unsigned long long _numBackgroundWifiClients;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    NSString *_dataIndicator;	// 32 = 0x20
    int _dataInterface;	// 40 = 0x28
    unsigned int _reachabilityFlags;	// 44 = 0x2c
    _Bool _cellData;	// 48 = 0x30
    _Bool _dnsEnabled;	// 49 = 0x31
    _Bool _roamingAllowed;	// 50 = 0x32
    _Bool _wifiEnabled;	// 51 = 0x33
    struct {
        unsigned int numActiveCalls:1;
        unsigned int numBackgroundWifiClients:1;
        unsigned int timestamp:1;
        unsigned int dataInterface:1;
        unsigned int reachabilityFlags:1;
        unsigned int cellData:1;
        unsigned int dnsEnabled:1;
        unsigned int roamingAllowed:1;
        unsigned int wifiEnabled:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000000e79e
@property(nonatomic) unsigned long long numBackgroundWifiClients; // @synthesize numBackgroundWifiClients=_numBackgroundWifiClients;
@property(nonatomic) unsigned long long numActiveCalls; // @synthesize numActiveCalls=_numActiveCalls;
@property(nonatomic) _Bool roamingAllowed; // @synthesize roamingAllowed=_roamingAllowed;
@property(retain, nonatomic) NSString *dataIndicator; // @synthesize dataIndicator=_dataIndicator;
@property(nonatomic) _Bool cellData; // @synthesize cellData=_cellData;
@property(nonatomic) int dataInterface; // @synthesize dataInterface=_dataInterface;
@property(nonatomic) _Bool wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
@property(nonatomic) _Bool dnsEnabled; // @synthesize dnsEnabled=_dnsEnabled;
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000e57d
- (unsigned long long)hash;	// IMP=0x000000000000e414
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e1a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e009
- (void)copyTo:(id)arg1;	// IMP=0x000000000000dea0
- (void)writeTo:(id)arg1;	// IMP=0x000000000000dd0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000dd00
- (id)dictionaryRepresentation;	// IMP=0x000000000000d28c
- (id)description;	// IMP=0x000000000000d1bc
@property(nonatomic) _Bool hasNumBackgroundWifiClients;
@property(nonatomic) _Bool hasNumActiveCalls;
@property(nonatomic) _Bool hasRoamingAllowed;
@property(readonly, nonatomic) _Bool hasDataIndicator;
@property(nonatomic) _Bool hasCellData;
@property(nonatomic) _Bool hasDataInterface;
@property(nonatomic) _Bool hasWifiEnabled;
@property(nonatomic) _Bool hasDnsEnabled;
@property(nonatomic) _Bool hasReachabilityFlags;
@property(nonatomic) _Bool hasTimestamp;

@end

