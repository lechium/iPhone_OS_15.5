//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSGraphType, NSMutableArray;

@interface MPSGraphListData
{
    NSMutableArray *_list;	// 48 = 0x30
    long long _maxSize;	// 56 = 0x38
    MPSGraphType *_elementType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000017d779
- (id)clonedList;	// IMP=0x000000000017d6dc
- (id)list;	// IMP=0x000000000017d6c7
- (id)elementType;	// IMP=0x000000000017d6b2
- (long long)maxSize;	// IMP=0x000000000017d6a1
- (id)popBackElement;	// IMP=0x000000000017d61f
- (void)pushBackElement:(id)arg1;	// IMP=0x000000000017d57f
- (id)initEmptyListWithDevice:(id)arg1 maxSize:(long long)arg2 elementType:(id)arg3;	// IMP=0x000000000017d55f
- (id)initWithDevice:(id)arg1 list:(id)arg2 maxSize:(long long)arg3 elementType:(id)arg4;	// IMP=0x000000000017d410
- (id)mpsndarray;	// IMP=0x000000000017d3ed

@end
