//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKContainer, NSString;

__attribute__((visibility("hidden")))
@interface LPiCloudSharingMetadataProviderSpecialization
{
    NSString *_applicationFromURL;	// 8 = 0x8
    NSString *_titleFromURL;	// 16 = 0x10
    CKContainer *_baseContainer;	// 24 = 0x18
    CKContainer *_applicationContainer;	// 32 = 0x20
    _Bool _canceled;	// 40 = 0x28
}

+ (id)applicationNameMap;	// IMP=0x000000000009cc76
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x000000000009c5f4
+ (id)extractTitleFromURL:(id)arg1;	// IMP=0x000000000009c569
+ (id)extractApplicationFromURL:(id)arg1;	// IMP=0x000000000009c511
+ (unsigned long long)specialization;	// IMP=0x000000000009c506
- (void).cxx_destruct;	// IMP=0x000000000009d931
- (void)cancel;	// IMP=0x000000000009d920
- (void)fail;	// IMP=0x000000000009d8c7
- (void)completeUsingApplication:(id)arg1 title:(id)arg2;	// IMP=0x000000000009d7a4
- (void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2;	// IMP=0x000000000009d487
- (void)start;	// IMP=0x000000000009ce48
- (id)iconFromShare:(id)arg1;	// IMP=0x000000000009cd82
- (id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x000000000009c906
- (id)initWithContext:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3;	// IMP=0x000000000009c801
- (_Bool)canUseCloudKit;	// IMP=0x000000000009c751

@end
