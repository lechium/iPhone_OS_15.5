//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HFCustomDiffableDataSourceSnapshot : NSObject
{
    NSArray *_sections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000028fabe
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x000000000028f918
- (long long)numberOfItems;	// IMP=0x000000000028f8d4
- (id)itemIdentifiers;	// IMP=0x000000000028f868
- (id)sectionIdentifiers;	// IMP=0x000000000028f856
- (long long)numberOfSections;	// IMP=0x000000000028f812

@end

