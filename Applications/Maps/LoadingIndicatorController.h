//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LoadingIndicatorController : NSObject
{
    NSHashTable *_loadingTokens;	// 8 = 0x8
    _Bool _updateScheduled;	// 16 = 0x10
    _Bool _showing;	// 17 = 0x11
    _Bool _suppressed;	// 18 = 0x12
}

+ (void)setAsSharedInstanceClass;	// IMP=0x004000000083b13a
+ (id)sharedController;	// IMP=0x001000000083b0fe
- (void).cxx_destruct;	// IMP=0x002000000083b50c
@property(nonatomic, getter=isSuppressed) _Bool suppressed; // @synthesize suppressed=_suppressed;
@property(readonly, nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
- (void)_didInvalidateLoadingToken;	// IMP=0x001000000083b45d
- (id)beginShowingLoadingIndicator;	// IMP=0x001000000083b249
- (_Bool)_isLoading;	// IMP=0x001000000083b1fd
- (void)showingDidChange;	// IMP=0x001000000083b1f7
- (void)_updateLoadingIndicator;	// IMP=0x001000000083b1af
- (id)_allLoadingTokens;	// IMP=0x001000000083b17d

@end

