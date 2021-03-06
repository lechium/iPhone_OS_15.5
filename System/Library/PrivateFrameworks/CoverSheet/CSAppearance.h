//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>
#import <CoverSheet/CSAppearanceProviding-Protocol.h>
#import <CoverSheet/NSCopying-Protocol.h>

@class NSMutableSet, NSSet, NSString, _UILegibilitySettings;

@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying>
{
    NSMutableSet *_components;	// 8 = 0x8
    _Bool _transitional;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
}

+ (id)appearanceForProvider:(id)arg1;	// IMP=0x00000000000f1c07
+ (id)appearanceWithIdentifier:(id)arg1;	// IMP=0x00000000000f1bbe
- (void).cxx_destruct;	// IMP=0x00000000000f2e60
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(copy, nonatomic) NSSet *components; // @synthesize components=_components;
@property(nonatomic, getter=isTransitional) _Bool transitional; // @synthesize transitional=_transitional;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000f2bd4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000f2b84
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000f2aff
- (id)succinctDescription;	// IMP=0x00000000000f2aaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f2a50
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f2a22
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (void)conformsToCSAppearanceProviding;	// IMP=0x00000000000f28b1
- (void)removeAllComponentsWithIdentifier:(id)arg1;	// IMP=0x00000000000f26e0
- (void)removeComponent:(id)arg1;	// IMP=0x00000000000f26c3
- (void)addComponent:(id)arg1;	// IMP=0x00000000000f2602
- (long long)flagForComponentType:(long long)arg1;	// IMP=0x00000000000f25a9
- (id)componentForType:(long long)arg1 property:(unsigned long long)arg2;	// IMP=0x00000000000f239a
- (id)componentForType:(long long)arg1 identifier:(id)arg2;	// IMP=0x00000000000f21af
- (_Bool)isEqualToAppearance:(id)arg1;	// IMP=0x00000000000f208d
- (void)unionAppearance:(id)arg1;	// IMP=0x00000000000f1ef1
- (void)reset;	// IMP=0x00000000000f1ebf
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000f1cf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

