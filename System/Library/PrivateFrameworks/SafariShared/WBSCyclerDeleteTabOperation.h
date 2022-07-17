//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerContextualOperation-Protocol.h>

@class NSString;

@interface WBSCyclerDeleteTabOperation : NSObject <WBSCyclerContextualOperation>
{
}

- (void)_deleteItemWithIdentifier:(id)arg1 inContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007bb3c
- (void)_deleteRandomTabGroupWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b963
- (void)_deleteRandomTabWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b72e
- (void)executeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b69a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
