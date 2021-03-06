//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class SBChainableModifier, SBModifierCacheCoordinator;

@interface SBChainableModifierMethodCache : NSObject <NSCopying>
{
    SBChainableModifier *_modifier;	// 8 = 0x8
    SEL *_selectors;	// 16 = 0x10
    long long _selectorCount;	// 24 = 0x18
    CDUnknownFunctionPointerType *_imps;	// 32 = 0x20
    unsigned long long _genCount;	// 40 = 0x28
    SBModifierCacheCoordinator *_cacheCoordinator;	// 48 = 0x30
    struct SBModifierCacheDispatchData *_dispatchCache;	// 56 = 0x38
    CDUnknownFunctionPointerType _nextFunc;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004bda42
@property(retain, nonatomic) SBModifierCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(nonatomic) SBChainableModifier *modifier; // @synthesize modifier=_modifier;
@property(readonly, nonatomic) _Bool hasNonTrampolineIMPs;
- (void)dealloc;	// IMP=0x00000000004bd9cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004bd946
- (id)initWithIMPs:(CDUnknownFunctionPointerType *)arg1 selectorList:(id)arg2 subsequentMethodCacheFunc:(CDUnknownFunctionPointerType)arg3;	// IMP=0x00000000004bd897

@end

