//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/NSCopying-Protocol.h>
#import <EmojiFoundation/NSSecureCoding-Protocol.h>

@class EMFEmojiLocaleData, NSArray, NSString;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding>
{
    struct __EmojiTokenWrapper *_emojiTokenRef;	// 8 = 0x8
    _Bool _didFailCEM;	// 16 = 0x10
    NSString *_localeIdentifier;	// 24 = 0x18
    NSString *_string;	// 32 = 0x20
}

+ (id)emojiTokenWithLongCharacter:(unsigned int)arg1 localeData:(id)arg2;	// IMP=0x000000000001a46c
+ (id)emojiTokenWithString:(id)arg1 localeData:(id)arg2;	// IMP=0x000000000001a3d0
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray *)arg1;	// IMP=0x000000000001a2fc
+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg1;	// IMP=0x000000000001a2cd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a2c5
- (void).cxx_destruct;	// IMP=0x000000000001bc98
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
- (id)nameForType:(int)arg1;	// IMP=0x000000000001bc32
- (id)relatedEmojiTokens:(unsigned long long)arg1;	// IMP=0x000000000001bbb9
@property(readonly, nonatomic) _Bool isCommon;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b994
- (_Bool)isEqualIgnoringModifiers:(id)arg1;	// IMP=0x000000000001b8fe
- (id)copyWithoutModifiers;	// IMP=0x000000000001b7fe
- (id)copyWithPresentationStyle:(int)arg1;	// IMP=0x000000000001b78b
- (_Bool)supportsPresentationStyle:(int)arg1;	// IMP=0x000000000001b758
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) _Bool _shouldHighlightEmoji;
@property(readonly, nonatomic) _Bool isNewEmoji;
@property(readonly, nonatomic) unsigned short _emojiIndex;
@property(readonly, nonatomic) int gender;
- (id)copyWithSkinToneVariantSpecifier:(id)arg1;	// IMP=0x000000000001b53a
- (id)copyWithSkinToneVariant:(int)arg1;	// IMP=0x000000000001b3e1
@property(readonly, copy, nonatomic) NSArray *_skinToneVariantStrings;
@property(readonly, copy, nonatomic) NSArray *skinToneVariants;
@property(readonly, nonatomic) NSArray *skinToneChooserVariants;
@property(readonly, nonatomic) NSArray *skinToneSpecifiers;
@property(readonly, nonatomic) int skinTone;
@property(readonly, nonatomic) _Bool supportsSkinToneVariants;
@property(readonly, nonatomic) EMFEmojiLocaleData *localeData;
@property(readonly, nonatomic) const struct __EmojiTokenWrapper *emojiTokenRef; // @synthesize emojiTokenRef=_emojiTokenRef;
- (void)_createEmojiTokenRefIfNecessary;	// IMP=0x000000000001ab53
@property(readonly, nonatomic) NSString *_baseString;
- (unsigned long long)hash;	// IMP=0x000000000001aa73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a9e1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a91c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a884
- (id)description;	// IMP=0x000000000001a7c4
- (void)dealloc;	// IMP=0x000000000001a759
- (id)initWithString:(id)arg1 localeIdentifier:(id)arg2;	// IMP=0x000000000001a628
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg1;	// IMP=0x000000000001a524

@end

