//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionFormatting-Protocol.h>

@class NSMutableString, NSString;
@protocol NSObject;

@interface BSDescriptionBuilder : NSObject <BSDescriptionFormatting>
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableString *_proem;	// 16 = 0x10
    NSMutableString *_description;	// 24 = 0x18
    _Bool _useDebugDescription;	// 32 = 0x20
    int _activeComponent;	// 36 = 0x24
    NSString *_activePrefix;	// 40 = 0x28
}

+ (id)succinctDescriptionForObject:(id)arg1;	// IMP=0x0000000000005be2
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;	// IMP=0x0000000000005949
+ (id)descriptionForObject:(id)arg1;	// IMP=0x0000000000005933
+ (id)builderWithObject:(id)arg1;	// IMP=0x0000000000005904
+ (id)nameObjectSeparator;	// IMP=0x00000000000058f7
+ (id)componentSeparator;	// IMP=0x00000000000058ea
- (void).cxx_destruct;	// IMP=0x00000000000088af
@property(nonatomic) _Bool useDebugDescription; // @synthesize useDebugDescription=_useDebugDescription;
@property(retain, nonatomic) NSString *activeMultilinePrefix; // @synthesize activeMultilinePrefix=_activePrefix;
@property(nonatomic) int activeComponent; // @synthesize activeComponent=_activeComponent;
- (id)build;	// IMP=0x0000000000008780
- (id)appendFormat:(id)arg1;	// IMP=0x0000000000008659
- (id)appendString:(id)arg1;	// IMP=0x0000000000008626
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4;	// IMP=0x00000000000082a8
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4 objectTransformer:(CDUnknownBlockType)arg5;	// IMP=0x000000000000802f
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0000000000007fb2
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4;	// IMP=0x0000000000007d73
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4 objectTransformer:(CDUnknownBlockType)arg5;	// IMP=0x0000000000007b11
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3 objectTransformer:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007a89
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0000000000007a0c
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007837
- (id)modifyBody:(CDUnknownBlockType)arg1;	// IMP=0x000000000000780b
- (id)modifyProem:(CDUnknownBlockType)arg1;	// IMP=0x00000000000077df
- (id)appendKeys:(id)arg1;	// IMP=0x0000000000007627
- (id)appendKey:(id)arg1;	// IMP=0x00000000000074d8
- (id)appendObjectsAndNames:(id)arg1;	// IMP=0x0000000000007423
- (id)appendVersionedPID:(long long)arg1 withName:(id)arg2;	// IMP=0x00000000000073bc
- (id)appendClass:(Class)arg1 withName:(id)arg2;	// IMP=0x0000000000007349
- (id)appendRect:(struct CGRect)arg1 withName:(id)arg2;	// IMP=0x00000000000072c5
- (id)appendSize:(struct CGSize)arg1 withName:(id)arg2;	// IMP=0x0000000000007232
- (id)appendPoint:(struct CGPoint)arg1 withName:(id)arg2;	// IMP=0x000000000000719f
- (id)appendQueue:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000007170
- (id)appendCString:(const char *)arg1 withName:(id)arg2;	// IMP=0x00000000000070f2
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;	// IMP=0x0000000000007086
- (id)appendPointer:(void *)arg1 withName:(id)arg2;	// IMP=0x0000000000007007
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(_Bool)arg3;	// IMP=0x0000000000006d61
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;	// IMP=0x0000000000006c75
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;	// IMP=0x0000000000006c63
- (id)appendFloat:(double)arg1 withName:(id)arg2;	// IMP=0x0000000000006c47
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;	// IMP=0x0000000000006bb5
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x0000000000006b37
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;	// IMP=0x0000000000006abb
- (id)appendInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x0000000000006a3d
- (id)appendInt:(int)arg1 withName:(id)arg2;	// IMP=0x00000000000069c1
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;	// IMP=0x000000000000692f
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x00000000000068b1
- (id)appendInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x0000000000006833
- (id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(_Bool)arg3;	// IMP=0x00000000000067b3
- (id)appendFlag:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000000679e
- (id)appendBool:(_Bool)arg1 withName:(id)arg2 ifEqualTo:(_Bool)arg3;	// IMP=0x0000000000006766
- (id)appendBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x00000000000066fb
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0000000000006552
- (void)appendString:(id)arg1 withName:(id)arg2;	// IMP=0x000000000000653d
- (void)appendProem:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000651f
- (void)appendCustomFormatWithName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000649f
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;	// IMP=0x0000000000006051
- (id)appendObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000000603c
- (id)appendSuper;	// IMP=0x0000000000005dfa
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000005c77

@end

