//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WKURLSchemeHandler-Protocol.h>

@class NSMapTable, NSString;

@interface WBSWebExtensionURLSchemeHandler : NSObject <WKURLSchemeHandler>
{
    NSMapTable *_fileLoadOperations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000942d5
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;	// IMP=0x000000000009424d
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;	// IMP=0x000000000009333a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

