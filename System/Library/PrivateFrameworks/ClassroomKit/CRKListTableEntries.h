//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSArray, NSString;

@interface CRKListTableEntries : NSObject <CRKTableEntries>
{
    NSArray *mArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000631da
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;	// IMP=0x000000000006316b
- (unsigned long long)columnCount;	// IMP=0x0000000000063160
- (unsigned long long)rowCount;	// IMP=0x000000000006314a
- (id)initWithArray:(id)arg1;	// IMP=0x000000000006305a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

