//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeRangeAsValue : NSValue
{
    CDStruct_e83c9415 _timeRange;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000116c7
+ (id)valueWithCMTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000000113d1
- (Class)classForCoder;	// IMP=0x00000000000118ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000117f9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000116cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001164e
- (unsigned long long)hash;	// IMP=0x00000000000115d5
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000011504
- (id)description;	// IMP=0x0000000000011470
- (const char *)objCType;	// IMP=0x0000000000011463
- (void)getValue:(void *)arg1;	// IMP=0x000000000001143d
- (CDStruct_e83c9415)CMTimeRangeValue;	// IMP=0x0000000000011414

@end
