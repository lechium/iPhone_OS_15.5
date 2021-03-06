//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPointerArbitrating-Protocol.h>

@class NSString;
@protocol _UIPointerArbitrating;

__attribute__((visibility("hidden")))
@interface _UIPointerArbiter : NSObject <_UIPointerArbitrating>
{
    id <_UIPointerArbitrating> _core;	// 8 = 0x8
}

+ (id)sharedArbiter;	// IMP=0x0000000000b2571e
- (void).cxx_destruct;	// IMP=0x0000000000b25837
- (void)endScrollingWithRegion:(id)arg1;	// IMP=0x0000000000b25821
- (void)beginScrollingWithRegion:(id)arg1;	// IMP=0x0000000000b2580b
@property(readonly, nonatomic) long long pointerState;
- (void)exitRegion:(id)arg1 removeStyle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b257df
- (void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b257c9
- (id)init;	// IMP=0x0000000000b25773

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

