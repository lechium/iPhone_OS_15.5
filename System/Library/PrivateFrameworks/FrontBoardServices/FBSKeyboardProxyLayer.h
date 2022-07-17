//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer
{
    FBSSceneIdentityToken *_keyboardOwner;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d3d6
@property(readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner; // @synthesize keyboardOwner=_keyboardOwner;
- (_Bool)isKeyboardProxyLayer;	// IMP=0x000000000001d3bd
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000001d348
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000001d2c4
- (id)_succinctDescription;	// IMP=0x000000000001d294
- (long long)alignment;	// IMP=0x000000000001d289
- (id)description;	// IMP=0x000000000001d1b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d0b0
- (unsigned long long)hash;	// IMP=0x000000000001d061
- (id)initWithLevel:(double)arg1 keyboardOwner:(id)arg2;	// IMP=0x000000000001cf62

@end
