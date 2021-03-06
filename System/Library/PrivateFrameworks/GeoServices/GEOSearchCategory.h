//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOFeatureStyleAttributes, GEOPDAutocompleteEntry, GEOPDBrowseCategory, NSArray, NSData, NSString, NSURL;
@protocol GEOVenueIdentifier;

@interface GEOSearchCategory : NSObject <NSSecureCoding>
{
    GEOPDBrowseCategory *_browseCategory;	// 8 = 0x8
    GEOPDAutocompleteEntry *_autocompleteEntry;	// 16 = 0x10
    NSArray *_subcategories;	// 24 = 0x18
}

+ (id)categoryForURL:(id)arg1;	// IMP=0x0000000000fabe30
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000fab4b9
+ (void)sendFeedbackForVisibleCategories:(id)arg1;	// IMP=0x0000000000fac5ce
- (void).cxx_destruct;	// IMP=0x0000000000fac3a1
@property(readonly, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property(readonly, nonatomic, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property(readonly, nonatomic, getter=isSubCategorySameAsTopLevel) _Bool subCategorySameAsTopLevel;
@property(readonly, nonatomic) int subCategoryType;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) int displayMode;
- (id)_browseCategory;	// IMP=0x0000000000fac2bf
@property(readonly, nonatomic) NSURL *mapsURL;
@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) NSString *popularTokenString;
@property(readonly, nonatomic) NSString *shortDisplayString;
@property(readonly, nonatomic) NSString *displayString;
- (unsigned long long)hash;	// IMP=0x0000000000fab9aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fab941
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fab8a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fab7dc
- (id)initWithAutocompleteEntry:(id)arg1;	// IMP=0x0000000000fab72b
- (id)initWithBrowseCategory:(id)arg1;	// IMP=0x0000000000fab4c1
- (id)initWithStorage:(id)arg1;	// IMP=0x0000000000fac50a
- (id)serverMetadata;	// IMP=0x0000000000fac896
- (void)sendFeedback;	// IMP=0x0000000000fac7d1

@end

