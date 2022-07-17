//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFPendingPromise, SXLayoutOptions;
@protocol SXComponent;

@interface SXPendingLayoutInvalidation : NSObject
{
    id <SXComponent> _component;	// 8 = 0x8
    NFPendingPromise *_pendingPromise;	// 16 = 0x10
    SXLayoutOptions *_layoutOptions;	// 24 = 0x18
    CDUnknownBlockType _invalidation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e777b
@property(readonly, nonatomic) CDUnknownBlockType invalidation; // @synthesize invalidation=_invalidation;
@property(readonly, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) NFPendingPromise *pendingPromise; // @synthesize pendingPromise=_pendingPromise;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
- (id)initWithComponent:(id)arg1 pendingPromise:(id)arg2 layoutOptions:(id)arg3 invalidation:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e7666

@end
