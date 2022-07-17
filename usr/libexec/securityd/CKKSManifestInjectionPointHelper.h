//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair;

__attribute__((visibility("hidden")))
@interface CKKSManifestInjectionPointHelper : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFECKeyPair *_keyPair;	// 16 = 0x10
}

+ (void)setIgnoreChanges:(_Bool)arg1;	// IMP=0x0020000000125bd8
+ (_Bool)ignoreChanges;	// IMP=0x0010000000125bcc
+ (void)registerEgoPeerID:(id)arg1 keyPair:(id)arg2;	// IMP=0x0010000000125b4f
+ (void)registerHelper:(id)arg1 forPeer:(id)arg2;	// IMP=0x0010000000125ac4
- (void).cxx_destruct;	// IMP=0x00200000001258b4
- (id)peerID;	// IMP=0x00100000001258a6
- (id)keyPair;	// IMP=0x0010000000125898
- (void)performWithPeerVerifyingKeys:(CDUnknownBlockType)arg1;	// IMP=0x0010000000125582
- (void)performWithEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00100000001254b2
- (void)performWithSigningKey:(CDUnknownBlockType)arg1;	// IMP=0x001000000012531b
- (id)description;	// IMP=0x0010000000125295
- (id)initWithPeerID:(id)arg1 keyPair:(id)arg2 isEgoPeer:(_Bool)arg3;	// IMP=0x00100000001251c3

@end
