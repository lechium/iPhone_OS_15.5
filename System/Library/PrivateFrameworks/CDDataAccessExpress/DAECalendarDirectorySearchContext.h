//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DAECalendarDirectorySearchContext : NSObject
{
    CDUnknownBlockType _resultsBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001327a
- (void)finishedWithError:(id)arg1 exceededResultLimit:(_Bool)arg2;	// IMP=0x00000000000131dd
- (void)resultsReturned:(id)arg1;	// IMP=0x0000000000013166
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000130c2

@end
