//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSNumber, NSSet, NSString, VUIContentRating, VUIMediaEntityKind, VUIMediaEntityType, VUIMediaLibrary;
@protocol VUIMediaEntityIdentifier, VUIMediaEntityIdentifierInternal;

@interface VUIMediaEntity : NSObject
{
    _Bool _localChanges;	// 8 = 0x8
    _Bool _cachesPropertiesOnFirstAccess;	// 9 = 0x9
    VUIMediaLibrary *_mediaLibrary;	// 16 = 0x10
    NSObject<VUIMediaEntityIdentifierInternal> *_identifierInternal;	// 24 = 0x18
    NSMutableDictionary *_firstAccessPropertiesCache;	// 32 = 0x20
    VUIMediaEntityKind *_kind;	// 40 = 0x28
    NSSet *_requestedProperties;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001ed06d
@property(readonly, nonatomic) NSSet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
@property(readonly, nonatomic) VUIMediaEntityKind *kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool cachesPropertiesOnFirstAccess; // @synthesize cachesPropertiesOnFirstAccess=_cachesPropertiesOnFirstAccess;
@property(retain, nonatomic) NSMutableDictionary *firstAccessPropertiesCache; // @synthesize firstAccessPropertiesCache=_firstAccessPropertiesCache;
@property(copy, nonatomic) NSObject<VUIMediaEntityIdentifierInternal> *identifierInternal; // @synthesize identifierInternal=_identifierInternal;
@property(nonatomic, getter=hasLocalChanges) _Bool localChanges; // @synthesize localChanges=_localChanges;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (id)_defaultValueForPropertyDescriptor:(id)arg1;	// IMP=0x00000000001ecf94
- (id)_valueForPropertyDescriptor:(id)arg1;	// IMP=0x00000000001ecf3f
- (id)_propertyValueForKey:(id)arg1;	// IMP=0x00000000001ecec8
- (id)_propertyValueWithBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x00000000001eccaa
- (_Bool)_didRequestPropertyWithKey:(id)arg1;	// IMP=0x00000000001ecc2b
- (id)description;	// IMP=0x00000000001ec094
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ebb82
- (unsigned long long)hash;	// IMP=0x00000000001ebac7
- (id)assetController;	// IMP=0x00000000001ebabf
- (_Bool)isFetchedPropertiesEqualToFetchedMediaEntity:(id)arg1;	// IMP=0x00000000001eb50b
- (void)populateMetadata;	// IMP=0x00000000001eb467
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly, copy, nonatomic) NSString *showTitle;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property(copy, nonatomic) NSNumber *playedState;
@property(readonly, copy, nonatomic) NSString *brandName;
@property(readonly, copy, nonatomic) NSString *brandID;
@property(readonly, nonatomic) _Bool markedAsDeleted;
@property(readonly, copy, nonatomic) NSString *canonicalID;
@property(readonly, copy, nonatomic) NSNumber *purchaseHistoryID;
@property(readonly, copy, nonatomic) NSNumber *storeID;
@property(readonly, copy, nonatomic) NSString *coverArtImageIdentifier;
@property(readonly, copy, nonatomic) VUIContentRating *contentRating;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSString *genreTitle;
@property(readonly, copy, nonatomic) NSString *sortTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSNumber *HLSAudioCapability;
@property(readonly, copy, nonatomic) NSNumber *HLSColorCapability;
@property(readonly, copy, nonatomic) NSNumber *HLSResolution;
@property(readonly, copy, nonatomic) NSNumber *audioCapability;
@property(readonly, copy, nonatomic) NSNumber *colorCapability;
@property(readonly, copy, nonatomic) NSNumber *resolution;
@property(readonly, copy, nonatomic) NSNumber *isLocal;
@property(readonly, copy, nonatomic) VUIMediaEntityType *type;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;	// IMP=0x00000000001eae63
- (id)init;	// IMP=0x00000000001eadf4

@end
