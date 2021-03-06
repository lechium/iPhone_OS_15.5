//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXArrayDataSection
{
    NSArray *_sectionContent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f650f
@property(readonly, copy, nonatomic) NSArray *sectionContent; // @synthesize sectionContent=_sectionContent;
- (long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2;	// IMP=0x00000000000f645b
- (long long)indexOfObject:(id)arg1;	// IMP=0x00000000000f63e4
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000f637d
- (id)objectAtIndex:(long long)arg1;	// IMP=0x00000000000f631e
- (long long)count;	// IMP=0x00000000000f62da
- (id)initWithOutlineObject:(id)arg1;	// IMP=0x00000000000f6257
- (id)initWithSectionContent:(id)arg1;	// IMP=0x00000000000f6240
- (id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2;	// IMP=0x00000000000f61bc

@end

