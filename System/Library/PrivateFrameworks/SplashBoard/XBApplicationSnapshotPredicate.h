//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>

@class BSMutableSettings, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding>
{
    BSMutableSettings *_clientSettings;	// 8 = 0x8
}

+ (id)predicate;	// IMP=0x000000000001136f
- (void).cxx_destruct;	// IMP=0x00000000000127d6
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000012342
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000122f2
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000122d6
- (id)succinctDescription;	// IMP=0x0000000000012286
- (id)_clientObjectForKey:(unsigned long long)arg1;	// IMP=0x0000000000012270
- (_Bool)_hasClientObjectForKey:(unsigned long long)arg1;	// IMP=0x0000000000012252
- (void)_removeClientObjectForKey:(unsigned long long)arg1;	// IMP=0x0000000000012201
- (void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2;	// IMP=0x00000000000121ba
@property(copy, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property(nonatomic) long long userInterfaceStyle;
@property(nonatomic) unsigned long long statusBarStateMask;
@property(nonatomic) unsigned long long statusBarState;
@property(nonatomic) unsigned long long contentTypeMask;
@property(nonatomic) double imageScale;
@property(nonatomic) struct CGSize referenceSize;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen;
@property(nonatomic) unsigned long long interfaceOrientationMask;
@property(copy, nonatomic) NSString *requiredOSVersion;
@property(copy, nonatomic) NSString *launchInterfaceIdentifier;
@property(copy, nonatomic) NSString *scheme;
@property(copy, nonatomic) NSString *name;
- (_Bool)evaluateWithObject:(id)arg1;	// IMP=0x00000000000113eb
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000011381

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

