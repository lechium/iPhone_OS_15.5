//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CMRecordedAccelerometerData
{
    double _startDateValue;	// 24 = 0x18
    CDStruct_31142d93 _accelerationValue;	// 32 = 0x20
    double _timestampValue;	// 56 = 0x38
    unsigned long long _identifier;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019ee9e
@property(readonly) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000019f16c
@property(readonly) NSDate *startDate;
- (double)timestamp;	// IMP=0x000000000019f132
- (CDStruct_31142d93)acceleration;	// IMP=0x000000000019f112
- (void)dealloc;	// IMP=0x000000000019f0e3
- (void)resetWithData:(struct CMAccel100 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;	// IMP=0x000000000019f062
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ef9d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019eea6
- (id)initWithData:(struct CMAccel100 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;	// IMP=0x000000000019ee2a
@property(readonly) double startTime;

@end
