//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFHistoryAnalyzerOptions;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzer : NSObject
{
    PFHistoryAnalyzerOptions *_options;	// 8 = 0x8
}

- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002f0655
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;	// IMP=0x00000000002f0626
- (void)dealloc;	// IMP=0x00000000002efc3c
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000002efbd2
- (id)init;	// IMP=0x00000000002efbbe

@end
