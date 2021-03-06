//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PXNewSearchResultsSection : NSObject
{
    _Bool _expanded;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    NSArray *_results;	// 40 = 0x28
    NSArray *_visibleResultIdentifiers;	// 48 = 0x30
    NSDictionary *_identifierToResultMap;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000297d04
@property(copy, nonatomic) NSDictionary *identifierToResultMap; // @synthesize identifierToResultMap=_identifierToResultMap;
@property(copy, nonatomic) NSArray *visibleResultIdentifiers; // @synthesize visibleResultIdentifiers=_visibleResultIdentifiers;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000297a38
- (id)_stringForType:(unsigned long long)arg1;	// IMP=0x0000000000297968
- (unsigned long long)_sortOrder;	// IMP=0x0000000000297828
- (id)_titleForSectionType:(unsigned long long)arg1;	// IMP=0x0000000000297612
- (id)_identifierToResultMapWithResults:(id)arg1;	// IMP=0x00000000002973bf
- (id)searchResultForIdentifier:(id)arg1;	// IMP=0x00000000002972d0
- (id)_identifiersForResults:(id)arg1;	// IMP=0x0000000000297207
- (unsigned long long)_collapsedVisibleResultCount;	// IMP=0x00000000002971b8
- (unsigned long long)_expandedVisibleResultCount;	// IMP=0x0000000000297174
- (void)_updateVisibleResultIdentifiers;	// IMP=0x00000000002970a9
- (long long)compare:(id)arg1;	// IMP=0x000000000029701e
@property(readonly, nonatomic) _Bool isExpandable;
- (id)initWithType:(unsigned long long)arg1 results:(id)arg2;	// IMP=0x0000000000296dfd

@end

