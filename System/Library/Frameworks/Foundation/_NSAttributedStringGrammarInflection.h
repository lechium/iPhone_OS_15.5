//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>
#import <Foundation/_NSAttributedStringGrammarInflecting-Protocol.h>

@class NSData, NSMorphologyCustomPronoun, NSString;

@interface _NSAttributedStringGrammarInflection : NSObject <_NSAttributedStringGrammarInflecting, NSCopying, NSMutableCopying, NSSecureCoding>
{
    long long _number;	// 8 = 0x8
    NSMorphologyCustomPronoun *_englishCustomPronoun;	// 16 = 0x10
    long long _context;	// 24 = 0x18
    long long _gender;	// 32 = 0x20
    long long _grammaticalCase;	// 40 = 0x28
    long long _person;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019fe85
+ (id)_inflectionToMatchWordWithToken:(id)arg1 wordGrammar:(id)arg2;	// IMP=0x00000000001a06a3
+ (_Bool)_isSimulatingThirdPartyProcess;	// IMP=0x00000000001a2b1e
+ (_Bool)_isSimulatingLockedDevice;	// IMP=0x00000000001a2b12
+ (id)_thirdPartyPreferencesDomain;	// IMP=0x00000000001a2af7
+ (id)_protectedPreferencesDomain;	// IMP=0x00000000001a2adc
+ (void)_usePreferencesDomainForFirstParty:(id)arg1 thirdParty:(id)arg2 simulateLockedDevice:(_Bool)arg3 simulateThirdPartyProcess:(_Bool)arg4 withinBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001a2a4a
+ (void)_setThirdPartyApplicationsCanAccessUserInflection:(_Bool)arg1;	// IMP=0x00000000001a288e
+ (_Bool)_thirdPartyApplicationsCanAccessUserInflection;	// IMP=0x00000000001a2824
+ (void)_removeGlobalUserInflectionObserver:(id)arg1 context:(void *)arg2;	// IMP=0x00000000001a26a8
+ (void)_addGlobalUserInflectionObserver:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001a2655
+ (id)_currentGlobalUserInflection;	// IMP=0x00000000001a25d8
+ (id)userInflection;	// IMP=0x00000000001a2532
+ (_Bool)canSelectUserInflection;	// IMP=0x00000000001a2fe5
+ (_Bool)_canSelectUserInflectionWithPreferredLanguages:(id)arg1;	// IMP=0x00000000001a2e16
+ (_Bool)canSelectCustomInflection;	// IMP=0x00000000001a2cba
+ (id)presetInflections;	// IMP=0x00000000001a2ba3
@property(copy, nonatomic) NSMorphologyCustomPronoun *englishCustomPronoun; // @synthesize englishCustomPronoun=_englishCustomPronoun;
@property long long person; // @synthesize person=_person;
@property long long number; // @synthesize number=_number;
@property long long grammaticalCase; // @synthesize grammaticalCase=_grammaticalCase;
@property long long gender; // @synthesize gender=_gender;
@property long long context; // @synthesize context=_context;
@property(readonly, copy) NSString *description;
- (id)initWithInflectionRule:(id)arg1;	// IMP=0x00000000001a03d8
@property(readonly, nonatomic, getter=isIdentity) _Bool identity;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a006d
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019ff8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019feeb
- (void)dealloc;	// IMP=0x000000000019fe8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019fe4d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019fda8
- (id)init;	// IMP=0x000000000019fd56
- (void)_editByAddingWordAttributes:(CDStruct_be0ff5be)arg1 overrideIfAlreadySet:(_Bool)arg2;	// IMP=0x0000000000094c39
- (void)_editByApplyingPluralityRulesForNumbers:(id)arg1 inLanguages:(id)arg2;	// IMP=0x0000000000094887
- (id)_markupDictionary;	// IMP=0x00000000001a1a3f
- (id)_initWithMarkdownDictionary:(id)arg1;	// IMP=0x00000000001a1304
@property(readonly) NSData *externalRepresentation;
- (id)initWithExternalRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a1e80
- (void)_useInsteadOfUserInflectionInBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a29eb
- (void)_setAsGlobalUserInflection;	// IMP=0x00000000001a26f6
@property(readonly) NSString *localizedShortDescription;
- (id)_initWithGender:(long long)arg1;	// IMP=0x00000000001a2b2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
