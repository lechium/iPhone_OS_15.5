//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSTableCell;

__attribute__((visibility("hidden")))
@interface CSLPRFAppTableCellHelper : NSObject
{
    _Bool _requestInProgress;	// 8 = 0x8
    PSTableCell *_tableCell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000030b6
- (id)getLazyIcon;	// IMP=0x0000000000002c90
- (id)blankIcon;	// IMP=0x0000000000002b2f
- (id)initWithTableCell:(id)arg1;	// IMP=0x0000000000002acb

@end
