//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AddressBookAddress, MISSING_TYPE, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface CarAddressWaypointsController
{
    AddressBookAddress *_address;	// 8 = 0x8
    NSString *_titleOverride;	// 16 = 0x10
    SearchResult *_searchResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002d67ad
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) NSString *titleOverride; // @synthesize titleOverride=_titleOverride;
@property(readonly, nonatomic) AddressBookAddress *address; // @synthesize address=_address;
- (id)subtitleForCurrentDestination;	// IMP=0x00100000002d672a
- (MISSING_TYPE *)titleForCurrentDestination;	// IMP=0x00100000002d66b9
- (id)destinationSearchResultIfAvailable;	// IMP=0x00100000002d66a7
- (id)initWithAddress:(id)arg1;	// IMP=0x00100000002d6693
- (id)initWithAddress:(id)arg1 overridingTitle:(id)arg2;	// IMP=0x00100000002d658c

@end
