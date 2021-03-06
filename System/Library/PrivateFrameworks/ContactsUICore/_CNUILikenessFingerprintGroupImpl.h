//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/_CNUILikenessFingerprintImpl-Protocol.h>

@class CNUILikenessRenderingScope, NSArray, NSString;

@interface _CNUILikenessFingerprintGroupImpl : NSObject <_CNUILikenessFingerprintImpl>
{
    NSArray *_impls;	// 8 = 0x8
    CNUILikenessRenderingScope *_scope;	// 16 = 0x10
    NSArray *_badges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a0c5
@property(readonly, copy) NSArray *badges; // @synthesize badges=_badges;
@property(readonly, copy) CNUILikenessRenderingScope *scope; // @synthesize scope=_scope;
@property(readonly, copy) NSArray *impls; // @synthesize impls=_impls;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a07e
- (_Bool)hasContactIdentifier:(id)arg1;	// IMP=0x0000000000009fca
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009e8a
@property(readonly, copy) NSString *description;
- (id)initWithImpls:(id)arg1 scope:(id)arg2 badges:(id)arg3;	// IMP=0x0000000000009c8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

