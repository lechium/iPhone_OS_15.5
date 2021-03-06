//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CRKSettingsUIVisibilityProvider;

__attribute__((visibility("hidden")))
@interface PSUIClassroomVisibilityArbitrator : NSObject
{
    unsigned long long _visibilityState;	// 8 = 0x8
    NSString *_paneStatus;	// 16 = 0x10
    CDUnknownBlockType _visibilityStateChangeHandler;	// 24 = 0x18
    CDUnknownBlockType _paneStatusChangeHandler;	// 32 = 0x20
    id <CRKSettingsUIVisibilityProvider> _visibilityProvider;	// 40 = 0x28
}

+ (id)visibilityProviderKeyPaths;	// IMP=0x000000000000c58a
- (void).cxx_destruct;	// IMP=0x000000000000cc80
@property(retain, nonatomic) id <CRKSettingsUIVisibilityProvider> visibilityProvider; // @synthesize visibilityProvider=_visibilityProvider;
@property(copy, nonatomic) CDUnknownBlockType paneStatusChangeHandler; // @synthesize paneStatusChangeHandler=_paneStatusChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(copy, nonatomic) NSString *paneStatus; // @synthesize paneStatus=_paneStatus;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
- (void)connectToDaemon;	// IMP=0x000000000000cbe4
- (void)reloadVisibilityState;	// IMP=0x000000000000cb31
- (void)updatePaneStatus;	// IMP=0x000000000000c9c5
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000c8a8
- (void)stopObservingVisibilityProvider;	// IMP=0x000000000000c757
- (void)startObservingVisibilityProvider;	// IMP=0x000000000000c5fc
- (id)init;	// IMP=0x000000000000c4aa

@end

