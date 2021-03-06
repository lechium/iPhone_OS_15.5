//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject
{
    CDUnknownBlockType _cellUpdateHandler;	// 8 = 0x8
    NSIndexPath *_insertionIndexPath;	// 16 = 0x10
    NSString *_reuseIdentifier;	// 24 = 0x18
    double _rowHeight;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000f012da
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSIndexPath *insertionIndexPath; // @synthesize insertionIndexPath=_insertionIndexPath;
@property(copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3;	// IMP=0x0000000000f01055

@end

