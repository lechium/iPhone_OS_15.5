//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, SKUIStackedBar;

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _split;	// 8 = 0x8
    SKUIStackedBar *_fromBar;	// 16 = 0x10
    SKUIStackedBar *_toBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000052b53
@property(retain, nonatomic) SKUIStackedBar *toBar; // @synthesize toBar=_toBar;
@property(retain, nonatomic) SKUIStackedBar *fromBar; // @synthesize fromBar=_fromBar;
@property(nonatomic) double split; // @synthesize split=_split;
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000052af9
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000051935

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
