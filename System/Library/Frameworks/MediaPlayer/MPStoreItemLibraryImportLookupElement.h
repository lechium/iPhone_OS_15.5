//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStorePlatformMetadata, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement
{
    ICStorePlatformMetadata *_storeItem;	// 24 = 0x18
    NSDictionary *_lookupDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f43d8
@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
- (id)storeItem;	// IMP=0x00000000001f43b2
- (id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2;	// IMP=0x00000000001f4296

@end

