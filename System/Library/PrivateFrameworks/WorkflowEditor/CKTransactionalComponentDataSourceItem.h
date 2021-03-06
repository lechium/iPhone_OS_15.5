//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject
{
    struct CKComponentLayout _layout;	// 8 = 0x8
    id _model;	// 56 = 0x38
    CKComponentScopeRoot *_scopeRoot;	// 64 = 0x40
    struct CKComponentBoundsAnimation _boundsAnimation;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000032b4bd
- (void).cxx_destruct;	// IMP=0x000000000032b479
@property(readonly, nonatomic) struct CKComponentBoundsAnimation boundsAnimation; // @synthesize boundsAnimation=_boundsAnimation;
@property(readonly, nonatomic) CKComponentScopeRoot *scopeRoot; // @synthesize scopeRoot=_scopeRoot;
@property(readonly, nonatomic) id model; // @synthesize model=_model;
- (const void *)layout;	// IMP=0x000000000032b43b
- (id)initWithLayout:(const void *)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(struct CKComponentBoundsAnimation)arg4;	// IMP=0x000000000032b2ef

@end

