//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, _PLDescriptionStyle;

@interface PLDescriptionBuilder : NSObject
{
    NSObject *_object;	// 8 = 0x8
    NSMutableString *_description;	// 16 = 0x10
    NSString *_separator;	// 24 = 0x18
    long long _indent;	// 32 = 0x20
    NSString *_indentString;	// 40 = 0x28
    _PLDescriptionStyle *_style;	// 48 = 0x30
    long long _descriptionStyle;	// 56 = 0x38
}

+ (id)prettyMultiLineDescriptionBuilderWithObject:(id)arg1 indent:(long long)arg2;	// IMP=0x000000000026b622
+ (id)plainMultiLineDescriptionBuilder;	// IMP=0x000000000026b5f6
+ (id)plainDescriptionBuilder;	// IMP=0x000000000026b5ca
+ (id)descriptionBuilderWithObject:(id)arg1;	// IMP=0x000000000026b57c
- (void).cxx_destruct;	// IMP=0x000000000026b146
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
- (id)build;	// IMP=0x000000000026b053
- (void)appendName:(id)arg1 typeCode:(const char *)arg2 value:(const void *)arg3;	// IMP=0x000000000026afab
- (void)appendName:(id)arg1 cgSize:(struct CGSize)arg2;	// IMP=0x000000000026af36
- (void)appendName:(id)arg1 doubleValue:(double)arg2;	// IMP=0x000000000026aea7
- (void)appendName:(id)arg1 floatValue:(float)arg2;	// IMP=0x000000000026ae14
- (void)appendName:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;	// IMP=0x000000000026ad8a
- (void)appendName:(id)arg1 integerValue:(long long)arg2;	// IMP=0x000000000026ad00
- (void)appendName:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x000000000026acd7
- (void)appendName:(id)arg1 object:(id)arg2;	// IMP=0x000000000026abb2
@property(readonly, nonatomic) long long indent;
@property(readonly, nonatomic) long long style;
- (id)initWithObject:(id)arg1 style:(long long)arg2 indent:(long long)arg3;	// IMP=0x000000000026a9f4

@end

