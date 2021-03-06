//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNAvatarCacheChangeListenerDelegate-Protocol.h>
#import <ContactsUICore/CNUILikenessCachingRenderer-Protocol.h>
#import <ContactsUICore/CNUILikenessRendering-Protocol.h>

@class CNAvatarCacheChangeListener, CNCache, CNQueue, NSPointerArray, NSString, _CNUILikenessRenderer;
@protocol CNSchedulerProvider, OS_dispatch_source;

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering, CNUILikenessCachingRenderer, CNAvatarCacheChangeListenerDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldRequireMainThread;	// 12 = 0xc
    _CNUILikenessRenderer *_renderer;	// 16 = 0x10
    id <CNSchedulerProvider> _schedulerProvider;	// 24 = 0x18
    CNCache *_imageCache;	// 32 = 0x20
    CNQueue *_evictionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;	// 48 = 0x30
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;	// 56 = 0x38
    CNAvatarCacheChangeListener *_changeHistoryListener;	// 64 = 0x40
    NSPointerArray *_delegates;	// 72 = 0x48
}

+ (id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2;	// IMP=0x0000000000060146
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1;	// IMP=0x000000000005f4ed
+ (id)descriptorForRequiredKeys;	// IMP=0x000000000005ef45
- (void).cxx_destruct;	// IMP=0x0000000000060c7d
@property(retain, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) CNAvatarCacheChangeListener *changeHistoryListener; // @synthesize changeHistoryListener=_changeHistoryListener;
@property(retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider; // @synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;
@property(retain, nonatomic) CNQueue *evictionQueue; // @synthesize evictionQueue=_evictionQueue;
@property(retain, nonatomic) CNCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) _Bool shouldRequireMainThread; // @synthesize shouldRequireMainThread=_shouldRequireMainThread;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) _CNUILikenessRenderer *renderer; // @synthesize renderer=_renderer;
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000060b4c
- (void)invalidateCacheEntriesContainingIdentifiers:(id)arg1;	// IMP=0x0000000000060836
- (void)updateContactsWithIdentifiers:(id)arg1;	// IMP=0x00000000000605c4
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;	// IMP=0x000000000006056c
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;	// IMP=0x00000000000604d5
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;	// IMP=0x000000000006044c
- (id)renderedLikenessForBadge:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;	// IMP=0x000000000006015f
- (void)refreshCacheKey:(id)arg1;	// IMP=0x00000000000600a6
- (id)resizeCacheEntry:(id)arg1 withScope:(id)arg2 workScheduler:(id)arg3;	// IMP=0x000000000005fe15
- (id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3;	// IMP=0x000000000005fc05
- (id)initialRenderedLikenessesForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 workScheduler:(id)arg4;	// IMP=0x000000000005fb2b
- (id)renderedLikenessesForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 workScheduler:(id)arg4;	// IMP=0x000000000005f746
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;	// IMP=0x000000000005f727
- (void)emptyCache:(id)arg1;	// IMP=0x000000000005f6ea
- (void)dealloc;	// IMP=0x000000000005f46b
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(_Bool)arg4 contactStore:(id)arg5;	// IMP=0x000000000005f016
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3 shouldRequireMainThread:(_Bool)arg4;	// IMP=0x000000000005ef7c
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x000000000005ef5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

