//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDResearchStudySourcesListTableViewSection
{
    NSArray *_researchSources;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006d1d5
@property(copy, nonatomic) NSArray *researchSources; // @synthesize researchSources=_researchSources;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d026
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x000000000006cf38
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;	// IMP=0x000000000006ce06
- (id)noneString;	// IMP=0x000000000006cdaa
- (id)titleForFooter;	// IMP=0x000000000006cd4e
- (id)titleForHeader;	// IMP=0x000000000006ccf2
- (unsigned long long)numberOfRows;	// IMP=0x000000000006cca4
- (void)dataSourceDidUpdate;	// IMP=0x000000000006c979

@end

