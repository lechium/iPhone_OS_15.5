//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding>
{
    _CLLSLLocationCoordinate *_coordinate;	// 8 = 0x8
    double _altitude;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000073e1f
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(copy, nonatomic) _CLLSLLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;	// IMP=0x0000000000073e47
- (id)description;	// IMP=0x0000000000073e27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073db4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073d01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073c8d
- (void)dealloc;	// IMP=0x0000000000073c52
- (id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3;	// IMP=0x0000000000073bdd
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4;	// IMP=0x0000000000073b65
- (id)initWithCoordinate:(id)arg1;	// IMP=0x0000000000073b4d
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x0000000000073ae3

@end
