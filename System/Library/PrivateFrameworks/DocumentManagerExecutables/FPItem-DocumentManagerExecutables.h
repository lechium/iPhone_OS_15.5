//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPItem.h>

@class NSDate, NSString;

@interface FPItem (DocumentManagerExecutables)
@property(nonatomic, readonly) NSString *sourceIdentifier;
- (long long)doc_sharedByCompareWithItem:(id)arg1;	// IMP=0x0000000000063400
- (long long)_doc_fileTypeCompareWithItem:(id)arg1;	// IMP=0x0000000000062eb0
@property(nonatomic, readonly) NSDate *doc_dateForSortingRecents;
@end

