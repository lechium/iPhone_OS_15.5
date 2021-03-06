//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying>
{
    CDStruct_9878d8f4 _strideCalStruct;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000193537
- (id)description;	// IMP=0x0000000000193970
@property(readonly, nonatomic) long long gpsSource;
@property(readonly, nonatomic) double percentGrade;
@property(readonly, nonatomic) double speed;
- (int)session;	// IMP=0x0000000000193948
@property(readonly, nonatomic) int steps;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) double endTime;
- (double)score;	// IMP=0x000000000019391e
- (double)kvalueTrack;	// IMP=0x0000000000193913
- (double)kvalue;	// IMP=0x0000000000193908
- (unsigned int)pacebin;	// IMP=0x00000000001938ff
@property(readonly, nonatomic) double startTime;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000193878
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019372f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019353f
- (id)initWithCLStrideCalEntry:(CDStruct_9878d8f4)arg1;	// IMP=0x00000000001934c8

@end

