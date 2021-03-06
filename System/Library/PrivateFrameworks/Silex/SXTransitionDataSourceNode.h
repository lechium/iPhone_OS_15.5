//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXTransitionDataSource-Protocol.h>

@class NSString, UIView;
@protocol SXTransitionableComponentView;

@interface SXTransitionDataSourceNode : NSObject <SXTransitionDataSource>
{
    _Bool _usesThumbnail;	// 8 = 0x8
    unsigned long long _transitionType;	// 16 = 0x10
    id <SXTransitionableComponentView> _componentView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006f824
@property(readonly, nonatomic) _Bool usesThumbnail; // @synthesize usesThumbnail=_usesThumbnail;
@property(readonly, nonatomic) id <SXTransitionableComponentView> componentView; // @synthesize componentView=_componentView;
@property(readonly, nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(readonly, nonatomic) _Bool isTransitionable;
@property(readonly, nonatomic) struct CGRect transitionContentFrame;
@property(readonly, nonatomic) struct CGRect transitionContainerFrame;
@property(readonly, nonatomic) struct CGRect transitionVisibleFrame;
@property(readonly, nonatomic) _Bool transitionViewUsesThumbnail;
@property(readonly, nonatomic) _Bool transitionViewShouldFadeInContent;
@property(readonly, nonatomic) _Bool transitionViewIsVisible;
@property(readonly, nonatomic) UIView *transitionContentView;
@property(readonly, nonatomic) UIView *transitionContainerView;
- (id)initWithComponentView:(id)arg1 transitionType:(unsigned long long)arg2 usesThumbnail:(_Bool)arg3;	// IMP=0x000000000006f4ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

