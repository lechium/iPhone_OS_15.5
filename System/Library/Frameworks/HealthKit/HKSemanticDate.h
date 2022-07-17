//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface HKSemanticDate : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_keyPath;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f1182
+ (id)semanticDateWithKeyPath:(id)arg1 date:(id)arg2;	// IMP=0x00000000000f0eee
- (void).cxx_destruct;	// IMP=0x00000000000f15d6
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f1480
- (unsigned long long)hash;	// IMP=0x00000000000f13f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f13e8
- (long long)compare:(id)arg1;	// IMP=0x00000000000f1312
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f1264
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f118a
- (id)initWithKeyPath:(id)arg1 date:(id)arg2;	// IMP=0x00000000000f0fde
- (id)init;	// IMP=0x00000000000f0f64

@end
