//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch
{
    NSString *_searchedString;	// 8 = 0x8
    TSWPFilteredString *_filteredString;	// 16 = 0x10
    TSWPStorage *_storage;	// 24 = 0x18
    struct _NSRange _range;	// 32 = 0x20
}

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, retain, nonatomic) TSWPFilteredString *filteredString; // @synthesize filteredString=_filteredString;
@property(readonly, nonatomic) NSString *searchedString; // @synthesize searchedString=_searchedString;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void)foundHitWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000305fd5
- (_Bool)isComplete;	// IMP=0x0000000000305fbc
- (void)dealloc;	// IMP=0x0000000000305f7a
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3 storage:(id)arg4 range:(struct _NSRange)arg5;	// IMP=0x0000000000305bcc

@end

