//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DNDModeConfiguration;

@interface NCModeConfigurationRemoteSuggestionContentProvider
{
    unsigned long long _suggestionType;	// 64 = 0x40
    unsigned long long _scope;	// 72 = 0x48
    DNDModeConfiguration *_modeConfiguration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000075cef
- (void)handleAcceptAction:(id)arg1;	// IMP=0x0000000000075a5a
- (void)handleRejectAction:(id)arg1;	// IMP=0x00000000000759e9
- (void)configureOptionButtons:(id)arg1;	// IMP=0x0000000000075738
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5 suggestionType:(unsigned long long)arg6 scope:(unsigned long long)arg7 modeConfiguration:(id)arg8;	// IMP=0x0000000000075258

@end
