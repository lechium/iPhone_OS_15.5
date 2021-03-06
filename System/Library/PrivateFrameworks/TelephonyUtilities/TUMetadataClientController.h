//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUMetadataCache;

@interface TUMetadataClientController : NSObject
{
    TUMetadataCache *_metadataCache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000005a052
- (void).cxx_destruct;	// IMP=0x000000000005a89a
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (void)updateMetadataForDestinationID:(id)arg1;	// IMP=0x000000000005a7be
- (void)updateMetadataForRecentCalls:(id)arg1;	// IMP=0x000000000005a738
- (void)updateMetadataForCall:(id)arg1;	// IMP=0x000000000005a6ea
- (id)_metadataDestinationIdForSearchItem:(id)arg1;	// IMP=0x000000000005a528
- (id)directoryLabelForSearchItem:(id)arg1;	// IMP=0x000000000005a4c9
- (id)locationForSearchItem:(id)arg1;	// IMP=0x000000000005a46a
- (id)suggestionForSearchItem:(id)arg1;	// IMP=0x000000000005a40b
- (id)directoryLabelForDestinationID:(id)arg1;	// IMP=0x000000000005a35b
- (id)locationForDestinationID:(id)arg1;	// IMP=0x000000000005a2ab
- (id)suggestionForDestinationID:(id)arg1;	// IMP=0x000000000005a1fb
- (id)init;	// IMP=0x000000000005a0d7

@end

