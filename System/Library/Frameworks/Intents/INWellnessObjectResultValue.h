//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding>
{
    INDateComponentsRange *_recordDate;	// 8 = 0x8
    NSString *_unit;	// 16 = 0x10
    NSArray *_values;	// 24 = 0x18
    long long _resultType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011ecf5
- (void).cxx_destruct;	// IMP=0x000000000011ecc2
@property(readonly, nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(readonly, copy, nonatomic) INDateComponentsRange *recordDate; // @synthesize recordDate=_recordDate;
- (id)_dictionaryRepresentation;	// IMP=0x000000000011eb3e
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000011ea62
- (id)description;	// IMP=0x000000000011ea4e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011e9b5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011e7e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e7d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011e65e
- (unsigned long long)hash;	// IMP=0x000000000011e5ff
- (id)initWithRecordDate:(id)arg1 unit:(id)arg2 values:(id)arg3 resultType:(long long)arg4;	// IMP=0x000000000011e53c

@end

