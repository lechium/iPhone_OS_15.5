//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSSet, NSString;

@interface UIKBCacheToken : NSObject <NSCopying>
{
    NSMutableArray *_components;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    int _emptyFields;	// 32 = 0x20
    NSSet *_transformationIdentifiers;	// 40 = 0x28
    long long _renderFlags;	// 48 = 0x30
}

+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;	// IMP=0x0000000000921e66
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;	// IMP=0x0000000000921e4a
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;	// IMP=0x0000000000921de2
+ (id)tokenForKeyMask:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000921dc9
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000921db0
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;	// IMP=0x0000000000921d97
+ (id)tokenForKeyplane:(id)arg1;	// IMP=0x0000000000921d7e
@property(retain, nonatomic) NSSet *transformationIdentifiers; // @synthesize transformationIdentifiers=_transformationIdentifiers;
@property(nonatomic) long long renderFlags; // @synthesize renderFlags=_renderFlags;
@property(nonatomic) int emptyFields; // @synthesize emptyFields=_emptyFields;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000921e7f
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;	// IMP=0x0000000000921cb8
- (id)stringForSplitState:(_Bool)arg1 handBias:(long long)arg2;	// IMP=0x0000000000921b82
- (id)stringForState:(int)arg1;	// IMP=0x0000000000921b3b
- (id)stringForKey:(id)arg1 state:(int)arg2;	// IMP=0x0000000000921a6e
@property(readonly, nonatomic) NSString *string;
- (id)stringForComponentArray:(id)arg1 additionalValues:(CDUnknownBlockType)arg2;	// IMP=0x0000000000921923
- (id)stringForConstruction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000921849
- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;	// IMP=0x0000000000921586
- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg1 toStr:(char *)arg2 maxLen:(int)arg3;	// IMP=0x0000000000921499
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;	// IMP=0x00000000009213c3
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;	// IMP=0x000000000092132c
- (void)annotateWithInt:(int)arg1;	// IMP=0x0000000000921326
- (void)annotateWithBool:(_Bool)arg1;	// IMP=0x0000000000921320
- (void)resetAnnotations;	// IMP=0x000000000092131a
@property(readonly, nonatomic) _Bool hasKey;
- (_Bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;	// IMP=0x000000000092130a
@property(nonatomic) CDStruct_227bb23d styling;
@property(nonatomic) int displayHint;
@property(nonatomic) int rowHint;
@property(nonatomic) struct CGSize size;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009212b9
- (void)dealloc;	// IMP=0x0000000000921268
- (id)initWithComponents:(id)arg1 name:(id)arg2;	// IMP=0x00000000009211f8
- (id)initWithName:(id)arg1;	// IMP=0x00000000009211e1

@end
