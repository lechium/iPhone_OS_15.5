//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPActionOperationLocator.h>

@interface FPActionOperationLocator (Daemon)
+ (_Bool)_isMoveAcrossZonesOrSharedRootsForSource:(id)arg1 destination:(id)arg2;	// IMP=0x000000000007a493
- (void)annotateWithPersonaSandboxIfNeeded:(id)arg1;	// IMP=0x000000000007aba7
- (id)startAccessingLocator;	// IMP=0x000000000007aae7
@property(readonly, nonatomic) _Bool isDownloaded;
- (unsigned long long)materializeOptionForDestinationItem:(id)arg1 recursively:(_Bool)arg2 isCopy:(_Bool)arg3 extensionManager:(id)arg4;	// IMP=0x000000000007a807
- (_Bool)willRequireDownloadForSourceItem:(id)arg1 extensionManager:(id)arg2;	// IMP=0x000000000007a224
- (id)materializedURLWithDomain:(id)arg1;	// IMP=0x000000000007a13f
- (id)materializedURLWithExtensionManager:(id)arg1;	// IMP=0x000000000007a03b
@end

