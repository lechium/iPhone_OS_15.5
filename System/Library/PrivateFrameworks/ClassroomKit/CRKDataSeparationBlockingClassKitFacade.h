//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRKClassKitCurrentUserProvider;

@interface CRKDataSeparationBlockingClassKitFacade
{
    CRKClassKitCurrentUserProvider *_currentUserProvider;	// 8 = 0x8
    long long _modifiedAccountState;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffectingAccountState;	// IMP=0x000000000002cf72
+ (id)observedKeyPathsOnCurrentUserProvider;	// IMP=0x000000000002c965
- (void).cxx_destruct;	// IMP=0x000000000002cfd7
@property(nonatomic) long long modifiedAccountState; // @synthesize modifiedAccountState=_modifiedAccountState;
@property(readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider; // @synthesize currentUserProvider=_currentUserProvider;
- (long long)accountState;	// IMP=0x000000000002cf92
- (long long)nextAccountState;	// IMP=0x000000000002ce6b
- (void)updateAccountState;	// IMP=0x000000000002ce10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002cdc3
- (void)stopObserving;	// IMP=0x000000000002cbad
- (void)startObserving;	// IMP=0x000000000002c991
- (id)initWithClassKitFacade:(id)arg1;	// IMP=0x000000000002c8b4
- (void)dealloc;	// IMP=0x000000000002c876

@end

