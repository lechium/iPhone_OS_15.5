//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail <UIWebViewDelegate>
{
    NSString *_releaseNotes;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000081a27
@property(retain, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000000081964
- (void)loadView;	// IMP=0x000000000008186e
- (id)specifiers;	// IMP=0x0000000000081766
- (id)init;	// IMP=0x00000000000816be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

