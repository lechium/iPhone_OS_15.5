//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBMainWorkspace;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest
{
    long long _source;	// 8 = 0x8
    CDUnknownBlockType _transactionProvider;	// 16 = 0x10
    CDUnknownBlockType _transactionConfigurator;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    _Bool _shouldPreventEmergencyNotificationBannerDismissal;	// 40 = 0x28
    id <SBBannerUnfurlSourceContextProviding> _bannerUnfurlSourceContextProvider;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004ce20
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType transactionConfigurator; // @synthesize transactionConfigurator=_transactionConfigurator;
@property(copy, nonatomic) CDUnknownBlockType transactionProvider; // @synthesize transactionProvider=_transactionProvider;
@property(nonatomic) _Bool shouldPreventEmergencyNotificationBannerDismissal; // @synthesize shouldPreventEmergencyNotificationBannerDismissal=_shouldPreventEmergencyNotificationBannerDismissal;
@property(retain, nonatomic) id <SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider; // @synthesize bannerUnfurlSourceContextProvider=_bannerUnfurlSourceContextProvider;
@property(nonatomic) long long source; // @synthesize source=_source;
- (_Bool)isMainWorkspaceTransitionRequest;	// IMP=0x00000000000149c9
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000009f6e
- (void)setTransientOverlayContext:(id)arg1;	// IMP=0x00000000005e5a91
- (id)compactDescriptionBuilder;	// IMP=0x000000000001456a
- (void)finalize;	// IMP=0x000000000000c3db
- (void)declineWithReason:(id)arg1;	// IMP=0x00000000000b361a
- (id)copyMainWorkspaceTransitionRequest;	// IMP=0x00000000005e51d6
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;	// IMP=0x00000000005e512b
- (id)initWithDisplayConfiguration:(id)arg1;	// IMP=0x00000000000092f4

// Remaining properties
@property(readonly, nonatomic) SBMainWorkspace *workspace; // @dynamic workspace;

@end
