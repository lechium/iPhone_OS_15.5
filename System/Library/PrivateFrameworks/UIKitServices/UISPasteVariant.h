//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UISPasteVariant : NSObject
{
    unsigned long long _index;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    NSString *_actionIdentifier;	// 24 = 0x18
    NSString *_localizationKey;	// 32 = 0x20
    NSString *_glyph;	// 40 = 0x28
    NSString *_keyInput;	// 48 = 0x30
    long long _keyModifierFlags;	// 56 = 0x38
}

+ (id)_bundle;	// IMP=0x0000000000008173
+ (id)variantForActionIdentifier:(id)arg1;	// IMP=0x0000000000007fa0
+ (id)variantForSelector:(SEL)arg1;	// IMP=0x0000000000007e41
+ (id)variantForIndex:(unsigned long long)arg1;	// IMP=0x0000000000007dc8
+ (id)allVariants;	// IMP=0x0000000000007aa2
- (void).cxx_destruct;	// IMP=0x000000000000830d
@property(readonly, nonatomic) long long keyModifierFlags; // @synthesize keyModifierFlags=_keyModifierFlags;
@property(readonly, nonatomic) NSString *keyInput; // @synthesize keyInput=_keyInput;
@property(readonly, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(readonly, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
@property(readonly, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)localizedStringForLocalization:(id)arg1;	// IMP=0x00000000000081f1
- (id)initWithIndex:(unsigned long long)arg1 selector:(SEL)arg2 actionIdentifier:(id)arg3 localizationKey:(id)arg4 glpyh:(id)arg5 keyInput:(id)arg6 keyModifierFlags:(long long)arg7;	// IMP=0x0000000000007c9f

@end
