//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface _CNAutocompleteTableViewModelDiff : NSObject
{
    NSIndexSet *_changedRows;	// 8 = 0x8
    NSIndexSet *_deletedRows;	// 16 = 0x10
    NSIndexSet *_insertedRows;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003c1d
@property(retain, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(retain, nonatomic) NSIndexSet *deletedRows; // @synthesize deletedRows=_deletedRows;
@property(retain, nonatomic) NSIndexSet *changedRows; // @synthesize changedRows=_changedRows;

@end

