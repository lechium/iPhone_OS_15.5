//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, TSDTextureSet;

@interface TSDMagicMoveAnimationMatch : NSObject
{
    TSDTextureSet *_morphTexture;	// 8 = 0x8
    TSDTextureSet *_morphQueuedTexture;	// 16 = 0x10
    TSDTextureSet *_morphQueuedForDeletionTexture;	// 24 = 0x18
    NSLock *_morphTextureUpdateLock;	// 32 = 0x20
    _Bool _isUsingMorphTexture;	// 40 = 0x28
    _Bool _didUseMorphTexture;	// 41 = 0x29
    _Bool _hasBeenTornDown;	// 42 = 0x2a
    _Bool _isMorphMatch;	// 43 = 0x2b
    _Bool _isTextStyleIdenticalExceptSize;	// 44 = 0x2c
    _Bool _shouldDisableTextMorphing;	// 45 = 0x2d
    _Bool _shouldTearDownTextures;	// 46 = 0x2e
    TSDTextureSet *_outgoingTexture;	// 48 = 0x30
    TSDTextureSet *_incomingTexture;	// 56 = 0x38
    long long _matchType;	// 64 = 0x40
    NSDictionary *_outgoingTextureActionBuildFinalAttributes;	// 72 = 0x48
}

+ (unsigned long long)magicMoveMorphTexturesPerSecond;	// IMP=0x0000000000207a53
@property(nonatomic) _Bool shouldTearDownTextures; // @synthesize shouldTearDownTextures=_shouldTearDownTextures;
@property(retain, nonatomic) NSDictionary *outgoingTextureActionBuildFinalAttributes; // @synthesize outgoingTextureActionBuildFinalAttributes=_outgoingTextureActionBuildFinalAttributes;
@property(nonatomic) long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) _Bool shouldDisableTextMorphing; // @synthesize shouldDisableTextMorphing=_shouldDisableTextMorphing;
@property(nonatomic) _Bool isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize=_isTextStyleIdenticalExceptSize;
@property(nonatomic) _Bool isMorphMatch; // @synthesize isMorphMatch=_isMorphMatch;
@property(retain, nonatomic) TSDTextureSet *incomingTexture; // @synthesize incomingTexture=_incomingTexture;
@property(retain, nonatomic) TSDTextureSet *outgoingTexture; // @synthesize outgoingTexture=_outgoingTexture;
- (void)unlockCurrentMorphTexture;	// IMP=0x0000000000208351
- (id)lockCurrentMorphTexture;	// IMP=0x00000000002081be
- (void)clearMorphTexture;	// IMP=0x000000000020812b
- (void)addMorphTexture:(id)arg1;	// IMP=0x0000000000208060
@property(readonly, nonatomic) _Bool isMatched;
- (id)description;	// IMP=0x0000000000207e97
- (void)teardown;	// IMP=0x0000000000207d52
- (void)dealloc;	// IMP=0x0000000000207bcc
- (id)initWithMatchType:(long long)arg1 outgoingTexture:(id)arg2 incomingTexture:(id)arg3;	// IMP=0x0000000000207b30
- (id)init;	// IMP=0x0000000000207a5e

@end

