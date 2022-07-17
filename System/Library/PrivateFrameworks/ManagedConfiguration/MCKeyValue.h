//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCKeyValue : NSObject
{
    NSString *_key;	// 8 = 0x8
    id _value;	// 16 = 0x10
    unsigned long long _valueType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001c1b8
@property(readonly, nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void)setValue:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001c00a
- (void)setLocalizedString:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001bf79
- (void)setLocalizedArray:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001bea0
- (void)setDate:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001be0f
- (void)setData:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001bd7e
- (id)initWithValue:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001bbb1
- (id)initWithLocalizedString:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001bb10
- (id)initWithLocalizedArray:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001ba6f
- (id)initWithDate:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001b9ce
- (id)initWithData:(id)arg1 localizedKey:(id)arg2;	// IMP=0x000000000001b92d

@end
