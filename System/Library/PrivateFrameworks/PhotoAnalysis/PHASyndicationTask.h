//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHATask-Protocol.h>

@class NSString;

@interface PHASyndicationTask : NSObject <PHATask>
{
    _Bool _performCurationJob;	// 8 = 0x8
    _Bool _performGuestInferenceJob;	// 9 = 0x9
}

@property(nonatomic) _Bool performGuestInferenceJob; // @synthesize performGuestInferenceJob=_performGuestInferenceJob;
@property(nonatomic) _Bool performCurationJob; // @synthesize performCurationJob=_performCurationJob;
- (_Bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000070fc3
- (_Bool)shouldRunWithGraphManager:(id)arg1;	// IMP=0x0000000000070d3a
- (id)init;	// IMP=0x0000000000070d00
@property(readonly, nonatomic) double period;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

