//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface CSContentActionInterpreter : NSObject
{
    UIViewController *_nowPlayingViewController;	// 8 = 0x8
    UIViewController *_digestOnboardingSuggestionViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000111696
@property(nonatomic) __weak UIViewController *digestOnboardingSuggestionViewController; // @synthesize digestOnboardingSuggestionViewController=_digestOnboardingSuggestionViewController;
@property(nonatomic) __weak UIViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
- (void)_viewControllerFromAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001114f3

@end

