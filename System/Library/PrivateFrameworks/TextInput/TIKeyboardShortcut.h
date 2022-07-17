//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIKeyboardShortcut : NSObject
{
    NSString *_keyEquivalent;	// 8 = 0x8
    unsigned long long _modifierFlags;	// 16 = 0x10
    NSString *_displayStringOverride;	// 24 = 0x18
}

+ (_Bool)isMirroringCandidate:(id)arg1;	// IMP=0x0000000000075ec0
+ (id)findLocalizationForKeyboardShortcut:(id)arg1 withModifiers:(unsigned long long)arg2 inApplicableOverrides:(id)arg3 usingKeyboardType:(unsigned int)arg4;	// IMP=0x0000000000075a24
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 withAttributes:(id)arg3;	// IMP=0x000000000007575c
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2 usingKeyboardType:(unsigned int)arg3;	// IMP=0x00000000000755ed
+ (id)localizedKeyboardShortcut:(id)arg1 forKeyboardLayout:(id)arg2;	// IMP=0x000000000007549c
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;	// IMP=0x0000000000075421
+ (id)shortcutWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;	// IMP=0x00000000000753c9
- (void).cxx_destruct;	// IMP=0x00000000000753a1
@property(retain, nonatomic) NSString *displayStringOverride; // @synthesize displayStringOverride=_displayStringOverride;
@property unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(retain, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
- (unsigned long long)hash;	// IMP=0x0000000000075332
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000075247
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000751d2
- (id)description;	// IMP=0x0000000000074f2e
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 displayStringOverride:(id)arg3;	// IMP=0x0000000000074e6f
- (id)initWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2;	// IMP=0x0000000000074dda

@end
