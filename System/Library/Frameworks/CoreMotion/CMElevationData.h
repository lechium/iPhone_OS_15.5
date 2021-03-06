//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>
#import <CoreMotion/SRSampling-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface CMElevationData : NSObject <SRSampling, NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;	// 8 = 0x8
    NSUUID *fSourceId;	// 16 = 0x10
    NSDate *fStartDate;	// 24 = 0x18
    NSDate *fEndDate;	// 32 = 0x20
    unsigned long long fElevationAscended;	// 40 = 0x28
    unsigned long long fElevationDescended;	// 48 = 0x30
    long long fSource;	// 56 = 0x38
}

+ (id)sourceName:(long long)arg1;	// IMP=0x000000000013c95c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013c6aa
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) unsigned long long elevationDescended;
@property(readonly, nonatomic) unsigned long long elevationAscended;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) unsigned long long recordId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013c851
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013c7f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013c6b2
- (void)dealloc;	// IMP=0x000000000013c659
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 elevationAscended:(unsigned long long)arg3 elevationDescended:(unsigned long long)arg4 source:(long long)arg5 recordId:(unsigned long long)arg6 sourceId:(id)arg7;	// IMP=0x000000000013c4fa
- (id)initWithSignificantElevationSample:(id)arg1;	// IMP=0x000000000013c380
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;	// IMP=0x000000000013cabb
- (id)binarySampleRepresentation;	// IMP=0x000000000013ca97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

