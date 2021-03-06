//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTSupportedMaxDataRates : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_rates;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001627f
- (void).cxx_destruct;	// IMP=0x00000000000162a2
@property(retain, nonatomic) NSArray *rates; // @synthesize rates=_rates;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016148
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016125
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016091
- (id)description;	// IMP=0x0000000000015fea
- (id)initWithRates:(id)arg1;	// IMP=0x0000000000015f7f

@end

