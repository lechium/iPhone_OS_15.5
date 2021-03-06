//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INHomeAttributeExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INHomeAttribute : NSObject <INHomeAttributeExport, NSCopying, NSSecureCoding>
{
    _Bool _boolValue;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _valueType;	// 24 = 0x18
    double _doubleValue;	// 32 = 0x20
    NSString *_stringValue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012e3f7
- (void).cxx_destruct;	// IMP=0x000000000012e3e7
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(readonly, nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012e2fd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012e1fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012e1f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012e13f
@property(readonly) unsigned long long hash;
- (id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(_Bool)arg3 doubleValue:(double)arg4 stringValue:(id)arg5;	// IMP=0x000000000012e045
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;	// IMP=0x000000000012dfbf
- (id)initWithType:(long long)arg1 doubleValue:(double)arg2;	// IMP=0x000000000012df6b
- (id)initWithType:(long long)arg1 boolValue:(_Bool)arg2;	// IMP=0x000000000012df1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

