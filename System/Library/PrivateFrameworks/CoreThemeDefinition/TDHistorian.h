//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreThemeDocument;

@interface TDHistorian : NSObject
{
    CoreThemeDocument *document;	// 8 = 0x8
}

- (id)initWithDocument:(id)arg1;	// IMP=0x000000000004eceb
- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;	// IMP=0x000000000004ecaf
- (id)facetDefinitionsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ec93
- (id)namedElementsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ec77
- (id)fontSizesChangedSinceDate:(id)arg1;	// IMP=0x000000000004ec5b
- (id)fontsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ec3f
- (id)colorsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ec23
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(_Bool *)arg2;	// IMP=0x000000000004ea5f
- (id)productionsWithModifiedAssets;	// IMP=0x000000000004e3d9
- (_Bool)foundDataChangesSinceDate:(id)arg1;	// IMP=0x000000000004e258
- (void)updateEntriesForManagedObjects:(id)arg1;	// IMP=0x000000000004e1b3
- (void)_updateEntryForManagedObject:(id)arg1;	// IMP=0x000000000004e0ee
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;	// IMP=0x000000000004e09a

@end
