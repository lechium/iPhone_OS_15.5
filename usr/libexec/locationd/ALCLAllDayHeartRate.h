//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLAllDayHeartRate : PBCodable
{
    double _startTime;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
    float _heartRate;	// 20 = 0x14
    unsigned int _mode;	// 24 = 0x18
}

@property(nonatomic) float heartRate; // @synthesize heartRate=_heartRate;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003877d6
- (unsigned long long)hash;	// IMP=0x00100000003874e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000387462
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003873de
- (void)copyTo:(id)arg1;	// IMP=0x0010000000387398
- (void)writeTo:(id)arg1;	// IMP=0x0010000000387325
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000387318
- (id)dictionaryRepresentation;	// IMP=0x0010000000386f17
- (id)description;	// IMP=0x0010000000386ea0

@end
