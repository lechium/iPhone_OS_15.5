//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLSpotlightDaemonClientHandler : NSObject
{
}

- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0020000000012b71
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000012b06
- (void)reindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012867
- (void)reindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001260b
- (id)bundleIdentifier;	// IMP=0x00100000000125fe
- (id)pathManager;	// IMP=0x0010000000012571
- (void)start;	// IMP=0x001000000001255d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

