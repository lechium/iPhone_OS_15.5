//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface RAPBatchSubmissionStatusResult : NSObject
{
    NSArray *_reviewedSubmissionIdentifiers;	// 8 = 0x8
    NSArray *_inReviewSubmissionIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000042d1a7
@property(retain, nonatomic) NSArray *inReviewSubmissionIdentifiers; // @synthesize inReviewSubmissionIdentifiers=_inReviewSubmissionIdentifiers;
@property(retain, nonatomic) NSArray *reviewedSubmissionIdentifiers; // @synthesize reviewedSubmissionIdentifiers=_reviewedSubmissionIdentifiers;
- (void)_setupResultWithRAPInfos:(id)arg1;	// IMP=0x001000000042cf25
- (id)initWithRAPInfos:(id)arg1;	// IMP=0x001000000042cebd

@end

