//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SchoolTime/NSCopying-Protocol.h>

@class SCLPBScheduleTime;

@interface SCLPBTimeInterval : PBCodable <NSCopying>
{
    SCLPBScheduleTime *_endTime;	// 8 = 0x8
    SCLPBScheduleTime *_startTime;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e273
@property(retain, nonatomic) SCLPBScheduleTime *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) SCLPBScheduleTime *startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e198
- (unsigned long long)hash;	// IMP=0x000000000001e14b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e083
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001dfe5
- (void)copyTo:(id)arg1;	// IMP=0x000000000001df82
- (void)writeTo:(id)arg1;	// IMP=0x000000000001df25
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001df18
- (id)dictionaryRepresentation;	// IMP=0x000000000001dc60
- (id)description;	// IMP=0x000000000001dbb1
@property(readonly, nonatomic) _Bool hasEndTime;
@property(readonly, nonatomic) _Bool hasStartTime;

@end
