//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWindowLayoutStrategy-Protocol.h>

@class NSString;

@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    _Bool _clip;	// 8 = 0x8
}

+ (id)noClipStrategy;	// IMP=0x00000000006a3c08
+ (id)clipStrategy;	// IMP=0x00000000006a3bf1
+ (id)_strategyWithClipping:(_Bool)arg1;	// IMP=0x00000000006a3b27
- (void)removeObserver:(id)arg1;	// IMP=0x00000000006a3ce9
- (void)addObserver:(id)arg1;	// IMP=0x00000000006a3ce3
- (_Bool)shouldClipForWindow:(id)arg1;	// IMP=0x00000000006a3cda
- (struct CGRect)frameWithInterfaceOrientation:(long long)arg1;	// IMP=0x00000000006a3c1c
- (id)_init;	// IMP=0x00000000006a3af8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

