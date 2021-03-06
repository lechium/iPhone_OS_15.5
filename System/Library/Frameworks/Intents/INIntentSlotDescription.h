//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INIntentSlotDescriptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INCodableAttribute, NSArray, NSNumber, NSString;

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying>
{
    _Bool _isExtended;	// 8 = 0x8
    _Bool _isPrivate;	// 9 = 0x9
    Class _resolutionResultClass;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _tag;	// 32 = 0x20
    NSString *_facadePropertyName;	// 40 = 0x28
    NSString *_dataPropertyName;	// 48 = 0x30
    long long _valueType;	// 56 = 0x38
    long long _valueStyle;	// 64 = 0x40
    NSArray *_resolveSelectorStrings;	// 72 = 0x48
    NSArray *_provideOptionsSelectorStrings;	// 80 = 0x50
    NSArray *_defaultValueSelectorStrings;	// 88 = 0x58
    INCodableAttribute *_codableAttribute;	// 96 = 0x60
    NSNumber *_rank;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001b6f94
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property(readonly, copy, nonatomic) NSArray *defaultValueSelectorStrings; // @synthesize defaultValueSelectorStrings=_defaultValueSelectorStrings;
@property(readonly, copy, nonatomic) NSArray *provideOptionsSelectorStrings; // @synthesize provideOptionsSelectorStrings=_provideOptionsSelectorStrings;
@property(readonly, copy, nonatomic) NSArray *resolveSelectorStrings; // @synthesize resolveSelectorStrings=_resolveSelectorStrings;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) _Bool isExtended; // @synthesize isExtended=_isExtended;
@property(readonly, nonatomic) long long valueStyle; // @synthesize valueStyle=_valueStyle;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *dataPropertyName; // @synthesize dataPropertyName=_dataPropertyName;
@property(readonly, copy, nonatomic) NSString *facadePropertyName; // @synthesize facadePropertyName=_facadePropertyName;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b6ef8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b6ddb
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class resolutionResultClass; // @synthesize resolutionResultClass=_resolutionResultClass;
@property(readonly, nonatomic) SEL deprecatedResolveSelector;
@property(readonly, nonatomic) SEL resolveSelector;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(_Bool)arg5 isPrivate:(_Bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 defaultValueSelectorStrings:(id)arg9 provideOptionsSelectorStrings:(id)arg10 resolutionResultClass:(Class)arg11 resolveSelectors:(SEL)arg12;	// IMP=0x00000000001b68c4
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(_Bool)arg7 isPrivate:(_Bool)arg8 resolveSelectors:(SEL)arg9;	// IMP=0x00000000001b666f
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(_Bool)arg5 isPrivate:(_Bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 codableAttribute:(id)arg9 defaultValueSelectorStrings:(id)arg10 provideOptionsSelectorStrings:(id)arg11 resolutionResultClass:(Class)arg12 resolveSelectors:(SEL)arg13;	// IMP=0x00000000001b6363
@property(readonly, nonatomic) _Bool isEnum;
- (id)localizeValue:(id)arg1 withLocalizer:(id)arg2;	// IMP=0x000000000012b3fe
- (id)localizeValue:(id)arg1 forLanguage:(id)arg2;	// IMP=0x000000000012b36c
- (void)setValue:(id)arg1 forSlotComposer:(id)arg2;	// IMP=0x0000000000255279
- (id)valueForSlotComposer:(id)arg1;	// IMP=0x00000000002551bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

