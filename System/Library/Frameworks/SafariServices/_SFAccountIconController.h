//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, WBSCache, _SFSiteMetadataManager;
@protocol OS_dispatch_queue, _SFAccountIconControllerDelegate;

@interface _SFAccountIconController : NSObject
{
    WBSCache *_iconCache;	// 8 = 0x8
    NSMutableDictionary *_domainsToExtractedBackgroundColors;	// 16 = 0x10
    NSMutableSet *_touchIconRequests;	// 24 = 0x18
    NSMutableDictionary *_domainToItems;	// 32 = 0x20
    NSMutableSet *_domainsThatHaveRequestedIcon;	// 40 = 0x28
    NSMutableArray *_blocksAwaitingHistoryItems;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    _SFSiteMetadataManager *_metadataManager;	// 64 = 0x40
    NSMutableDictionary *_domainToAppID;	// 72 = 0x48
    NSMutableArray *_blocksAwaitingSharedWebCredentialsInformation;	// 80 = 0x50
    _Bool _initializedHistory;	// 88 = 0x58
    id <_SFAccountIconControllerDelegate> _delegate;	// 96 = 0x60
}

+ (struct CGSize)_preferredIconSize;	// IMP=0x0000000000092e31
+ (struct CGSize)tableViewIconSize;	// IMP=0x0000000000092e20
- (void).cxx_destruct;	// IMP=0x0000000000094bf6
@property(nonatomic) __weak id <_SFAccountIconControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_fetchAppIconForDomain:(id)arg1;	// IMP=0x0000000000094747
- (void)_populateDomainToAppIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009414a
- (void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(_Bool)arg2;	// IMP=0x0000000000093c96
- (void)_fetchTouchIconForDomain:(id)arg1;	// IMP=0x0000000000093b01
- (void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009394e
- (void)_populateDomainToItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000933b2
- (void)_iconDidUpdateForDomain:(id)arg1;	// IMP=0x0000000000093347
- (id)backgroundColorForDomain:(id)arg1;	// IMP=0x00000000000931a2
- (id)cachedIconForDomain:(id)arg1 resizedToSize:(struct CGSize)arg2;	// IMP=0x0000000000093122
- (id)iconForDomain:(id)arg1;	// IMP=0x0000000000092f03
- (void)clearIconFetchingState;	// IMP=0x0000000000092e42
- (id)initWithMetadataManager:(id)arg1;	// IMP=0x0000000000092c7a

@end

