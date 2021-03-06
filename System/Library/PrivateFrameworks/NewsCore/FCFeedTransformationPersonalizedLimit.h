//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedLimit : NSObject <FCFeedTransforming>
{
    id <FCFeedPersonalizing> _feedPersonalizer;	// 8 = 0x8
    double _timeInterval;	// 16 = 0x10
}

+ (id)transformationWithPersonalizer:(id)arg1 timeInterval:(double)arg2;	// IMP=0x000000000024fd89
+ (id)transformationWithPersonalizer:(id)arg1 dateRange:(id)arg2;	// IMP=0x000000000024fbf5
- (void).cxx_destruct;	// IMP=0x0000000000250101
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
- (id)transformFeedItems:(id)arg1;	// IMP=0x000000000024fdfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

