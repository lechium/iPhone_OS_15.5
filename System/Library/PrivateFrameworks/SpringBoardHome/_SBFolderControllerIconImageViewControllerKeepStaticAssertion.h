//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/BSInvalidatable-Protocol.h>

@class NSIndexSet, NSString, SBFolderController;

@interface _SBFolderControllerIconImageViewControllerKeepStaticAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    _Bool _invalidated;	// 8 = 0x8
    NSIndexSet *_pageIndexesToExclude;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    SBFolderController *_folderController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041628
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) __weak SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSIndexSet *pageIndexesToExclude; // @synthesize pageIndexesToExclude=_pageIndexesToExclude;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000414b9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000041469
- (id)succinctDescriptionBuilder;	// IMP=0x000000000004144d
- (id)succinctDescription;	// IMP=0x00000000000413fd
- (void)invalidate;	// IMP=0x0000000000041380
- (void)dealloc;	// IMP=0x0000000000041320
- (id)initWithFolderController:(id)arg1 pageIndexesToExclude:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000041243

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

