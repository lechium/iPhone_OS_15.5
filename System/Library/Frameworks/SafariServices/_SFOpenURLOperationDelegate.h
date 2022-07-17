//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/LSOpenResourceOperationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenURLOperationDelegate : NSObject <LSOpenResourceOperationDelegate>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000078f59
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000078f45
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x0000000000078f2e
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x0000000000078f28
- (void)_didFinishWithSuccess:(_Bool)arg1;	// IMP=0x0000000000078e8a
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000078df2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
