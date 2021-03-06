//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PIDisparitySampleResult-Protocol.h>

@class NSString;
@protocol NURenderStatistics;

@interface _PIDisparitySampleResult : _NURenderResult <PIDisparitySampleResult>
{
    float _sampledDisparityValue;	// 8 = 0x8
}

@property(readonly, nonatomic) float sampledDisparityValue; // @synthesize sampledDisparityValue=_sampledDisparityValue;
- (id)initWithDisparityValue:(float)arg1;	// IMP=0x00000000000097c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

