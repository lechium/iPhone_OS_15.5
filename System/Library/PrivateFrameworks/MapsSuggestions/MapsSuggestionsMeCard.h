//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface MapsSuggestionsMeCard : NSObject <NSCopying>
{
    NSDictionary *_perCNPostalAddress;	// 8 = 0x8
    _Bool _hasCorrected;	// 16 = 0x10
    _Bool _hasGeocoded;	// 17 = 0x11
    _Bool _hasHomeOrWork;	// 18 = 0x12
    _Bool _hasHomeOrWorkOrSchool;	// 19 = 0x13
    NSArray *_shortcutsForHome;	// 24 = 0x18
    NSArray *_shortcutsForWork;	// 32 = 0x20
    NSArray *_shortcutsForSchool;	// 40 = 0x28
    NSArray *_hiddenShortcutsForHome;	// 48 = 0x30
    NSArray *_hiddenShortcutsForWork;	// 56 = 0x38
    NSArray *_hiddenShortcutsForSchool;	// 64 = 0x40
    NSArray *_shortcutsForAll;	// 72 = 0x48
    NSArray *_shortcutsForAllIncludingHidden;	// 80 = 0x50
    NSArray *_mapItemsForHome;	// 88 = 0x58
    NSArray *_mapItemsForWork;	// 96 = 0x60
    NSArray *_mapItemsForSchool;	// 104 = 0x68
    NSArray *_mapItemsForAll;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000071642
@property(readonly, nonatomic) _Bool hasHomeOrWorkOrSchool; // @synthesize hasHomeOrWorkOrSchool=_hasHomeOrWorkOrSchool;
@property(readonly, nonatomic) _Bool hasHomeOrWork; // @synthesize hasHomeOrWork=_hasHomeOrWork;
@property(readonly, nonatomic) _Bool hasGeocoded; // @synthesize hasGeocoded=_hasGeocoded;
@property(readonly, nonatomic) _Bool hasCorrected; // @synthesize hasCorrected=_hasCorrected;
@property(readonly, nonatomic) NSArray *mapItemsForAll; // @synthesize mapItemsForAll=_mapItemsForAll;
@property(readonly, nonatomic) NSArray *mapItemsForSchool; // @synthesize mapItemsForSchool=_mapItemsForSchool;
@property(readonly, nonatomic) NSArray *mapItemsForWork; // @synthesize mapItemsForWork=_mapItemsForWork;
@property(readonly, nonatomic) NSArray *mapItemsForHome; // @synthesize mapItemsForHome=_mapItemsForHome;
@property(readonly, nonatomic) NSArray *shortcutsForAllIncludingHidden; // @synthesize shortcutsForAllIncludingHidden=_shortcutsForAllIncludingHidden;
@property(readonly, nonatomic) NSArray *shortcutsForAll; // @synthesize shortcutsForAll=_shortcutsForAll;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForSchool; // @synthesize hiddenShortcutsForSchool=_hiddenShortcutsForSchool;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForWork; // @synthesize hiddenShortcutsForWork=_hiddenShortcutsForWork;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForHome; // @synthesize hiddenShortcutsForHome=_hiddenShortcutsForHome;
@property(readonly, nonatomic) NSArray *shortcutsForSchool; // @synthesize shortcutsForSchool=_shortcutsForSchool;
@property(readonly, nonatomic) NSArray *shortcutsForWork; // @synthesize shortcutsForWork=_shortcutsForWork;
@property(readonly, nonatomic) NSArray *shortcutsForHome; // @synthesize shortcutsForHome=_shortcutsForHome;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070d42
- (id)description;	// IMP=0x0000000000070c4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070bec
- (_Bool)isEqualToMeCard:(id)arg1;	// IMP=0x0000000000070a8e
- (id)shortcutForCNPostalAddressIdentifier:(id)arg1;	// IMP=0x0000000000070a5c
- (id)shortcutsPerCNPostalAddress;	// IMP=0x0000000000070a4e
- (id)initWithShortcuts:(id)arg1 hasCorrected:(_Bool)arg2 hasGeocoded:(_Bool)arg3;	// IMP=0x0000000000070a34
- (id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(_Bool)arg3 hasGeocoded:(_Bool)arg4;	// IMP=0x0000000000070602

@end

