//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessResolver-Protocol.h>

@class CNContactStore, CNUIMeContactMonitor, NSString;
@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory;

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver>
{
    long long _prohibitedSources;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    id <CNSchedulerProvider> _schedulerProvider;	// 24 = 0x18
    CNUIMeContactMonitor *_meMonitor;	// 32 = 0x20
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;	// 40 = 0x28
}

+ (id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;	// IMP=0x000000000003f791
+ (id)photoObservableWithPhotoFuture:(id)arg1 likenessFingerprint:(id)arg2 scheduler:(id)arg3;	// IMP=0x000000000003f5c7
+ (id)observableFromLikenessProviderBlock:(CDUnknownBlockType)arg1 withScheduler:(id)arg2;	// IMP=0x000000000003f2de
+ (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;	// IMP=0x000000000003ece4
+ (id)basicMonogramObservableForContactFuture:(id)arg1 monogramColor:(id)arg2;	// IMP=0x000000000003eb27
+ (id)descriptorForRequiredKeys;	// IMP=0x000000000003d598
- (void).cxx_destruct;	// IMP=0x0000000000040138
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long prohibitedSources; // @synthesize prohibitedSources=_prohibitedSources;
- (id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(_Bool)arg3;	// IMP=0x00000000000400c4
- (id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2;	// IMP=0x000000000003fcc5
- (_Bool)isMeContact:(id)arg1;	// IMP=0x000000000003fb88
- (_Bool)mayIncludeSource:(long long)arg1;	// IMP=0x000000000003fb65
- (id)badgeObservableWithLikenessBadge:(id)arg1 workScheduler:(id)arg2;	// IMP=0x000000000003f163
- (id)silhouetteWithPlaceholderProviderFactory:(id)arg1 workScheduler:(id)arg2;	// IMP=0x000000000003efe2
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;	// IMP=0x000000000003ef6e
- (id)basicMonogramObservableWithContactFuture:(id)arg1 monogramColor:(id)arg2;	// IMP=0x000000000003e995
- (id)remoteImagesObservableWithContactFuture:(id)arg1 workScheduler:(id)arg2;	// IMP=0x000000000003e650
- (id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2 workScheduler:(id)arg3;	// IMP=0x000000000003e477
- (id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1;	// IMP=0x000000000003e365
- (id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;	// IMP=0x000000000003df4a
- (id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4;	// IMP=0x000000000003dd51
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;	// IMP=0x000000000003dbb9
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;	// IMP=0x000000000003dba2
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d9b8
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;	// IMP=0x000000000003d9a3
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;	// IMP=0x000000000003d98e
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;	// IMP=0x000000000003d7cd
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 meMonitor:(id)arg3;	// IMP=0x000000000003d6ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
