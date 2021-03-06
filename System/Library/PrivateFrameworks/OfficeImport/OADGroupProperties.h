//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/OADEffectsParent-Protocol.h>
#import <OfficeImport/OADProperties3DParent-Protocol.h>

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGroupProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;	// 72 = 0x48
    NSArray *mEffects;	// 80 = 0x50
    OADScene3D *mScene3D;	// 88 = 0x58
    OADShape3D *mShape3D;	// 96 = 0x60
}

+ (id)defaultProperties;	// IMP=0x000000000010a90b
- (void).cxx_destruct;	// IMP=0x000000000031aa81
@property(readonly, copy) NSString *description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000031a40e
- (_Bool)hasShape3D;	// IMP=0x000000000031a3b2
- (void)setShape3D:(id)arg1;	// IMP=0x000000000010aae8
- (id)shape3D;	// IMP=0x000000000031a368
- (_Bool)hasScene3D;	// IMP=0x000000000031a341
- (void)setScene3D:(id)arg1;	// IMP=0x000000000010aad4
- (id)scene3D;	// IMP=0x000000000031a2f7
- (_Bool)hasEffects;	// IMP=0x000000000031a2d0
- (void)setEffects:(id)arg1;	// IMP=0x000000000010aac0
- (id)effects;	// IMP=0x000000000031a286
- (_Bool)hasFill;	// IMP=0x00000000001d66f7
- (void)setFill:(id)arg1;	// IMP=0x000000000010aaac
- (id)fill;	// IMP=0x00000000001d66ad
- (id)initWithDefaults;	// IMP=0x000000000010a93b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

