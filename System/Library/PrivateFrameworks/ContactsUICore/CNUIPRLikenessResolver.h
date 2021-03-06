//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessResolver-Protocol.h>

@class CNCache, CNContactStore, CNQueue, CNSchedulerProvider, NSString;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, OS_dispatch_source;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>
{
    id <CNUIPRLikenessResolver> _likenessResolver;	// 8 = 0x8
    CNCache *_likenessCache;	// 16 = 0x10
    CNQueue *_evictionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;	// 32 = 0x20
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;	// 40 = 0x28
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;	// 48 = 0x30
}

+ (id)_cacheKeyForContact:(id)arg1;	// IMP=0x0000000000022cb9
+ (unsigned long long)maxContacts;	// IMP=0x0000000000021e2c
+ (id)descriptorForRequiredKeys;	// IMP=0x0000000000021e13
- (void).cxx_destruct;	// IMP=0x0000000000023589
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider; // @synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;
@property(retain, nonatomic) CNQueue *evictionQueue; // @synthesize evictionQueue=_evictionQueue;
@property(retain, nonatomic) CNCache *likenessCache; // @synthesize likenessCache=_likenessCache;
@property(retain, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;	// IMP=0x0000000000023443
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;	// IMP=0x00000000000233ac
@property(readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(nonatomic) long long prohibitedSources;
- (id)likenessLookup;	// IMP=0x00000000000231a2
- (id)badgeObservableWithLikenessBadge:(id)arg1 workScheduler:(id)arg2;	// IMP=0x0000000000022d69
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;	// IMP=0x0000000000022cd2
- (void)refreshCacheKey:(id)arg1;	// IMP=0x0000000000022c19
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;	// IMP=0x0000000000022838
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;	// IMP=0x0000000000022821
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022468
- (void)emptyCache:(id)arg1;	// IMP=0x000000000002242b
- (void)dealloc;	// IMP=0x00000000000223a9
- (id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2 schedulerProvider:(id)arg3;	// IMP=0x0000000000021eee
- (id)initWithLikenessResolver:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000021e68
- (id)initWithLikenessResolver:(id)arg1;	// IMP=0x0000000000021e51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

