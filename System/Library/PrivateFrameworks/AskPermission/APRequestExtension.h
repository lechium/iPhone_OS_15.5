//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AskPermission/NSExtensionRequestHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling>
{
    NSExtensionContext *_extensionContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004340
@property(retain, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x0000000000003d29
- (void)_finish;	// IMP=0x0000000000003b3a
- (void)requestUpdatedWithResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003a07
- (void)checkDownloadQueue;	// IMP=0x00000000000038f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

