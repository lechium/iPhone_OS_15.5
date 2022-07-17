//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXViewControllerEventTracker-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol PXAnonymousViewController;

@interface PXViewControllerEventTracker <PXViewControllerEventTracker, PXChangeObserver>
{
    _Bool _isViewVisible;	// 8 = 0x8
    NSString *_viewName;	// 16 = 0x10
    NSObject<PXAnonymousViewController> *_currentViewController;	// 24 = 0x18
    long long _viewSignpost;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000997240
@property(nonatomic) long long viewSignpost; // @synthesize viewSignpost=_viewSignpost;
@property(nonatomic) __weak NSObject<PXAnonymousViewController> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(readonly, nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000009970f5
- (void)logViewControllerDidDisappear:(id)arg1;	// IMP=0x0000000000996d69
- (void)logViewControllerDidAppear:(id)arg1;	// IMP=0x0000000000996a12
- (void)didPerformChanges;	// IMP=0x00000000009969a8
- (void)_updateIsViewVisible;	// IMP=0x0000000000996927
- (void)_invalidateIsViewVisible;	// IMP=0x00000000009968e3
- (void)setIsViewVisible:(_Bool)arg1;	// IMP=0x000000000099683e
- (id)initWithViewName:(id)arg1;	// IMP=0x00000000009967da
- (id)init;	// IMP=0x0000000000996743

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSMutableDictionary *payload;
@property(readonly) Class superclass;

@end
