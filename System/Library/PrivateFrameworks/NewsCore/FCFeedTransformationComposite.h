//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming>
{
    _Bool _shouldLogTransformationResults;	// 8 = 0x8
    NSMutableArray *_transformationLogs;	// 16 = 0x10
    NSArray *_feedTransformations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000107e29
@property(copy, nonatomic) NSArray *feedTransformations; // @synthesize feedTransformations=_feedTransformations;
@property(readonly, nonatomic) NSMutableArray *transformationLogs; // @synthesize transformationLogs=_transformationLogs;
@property(readonly, nonatomic) _Bool shouldLogTransformationResults; // @synthesize shouldLogTransformationResults=_shouldLogTransformationResults;
- (id)transformFeedItems:(id)arg1;	// IMP=0x0000000000107d4a
- (id)initWithFeedTransformations:(id)arg1 logTransformationResults:(_Bool)arg2;	// IMP=0x0000000000107c0c
- (id)initWithFeedTransformations:(id)arg1;	// IMP=0x0000000000107ab0
- (id)init;	// IMP=0x000000000010796b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
