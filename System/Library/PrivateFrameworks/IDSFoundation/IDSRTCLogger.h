//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTMetricLogger-Protocol.h>

@class NSString;

@interface IDSRTCLogger : NSObject <CUTMetricLogger>
{
    unsigned short _category;	// 8 = 0x8
}

+ (id)loggerWithCategory:(unsigned short)arg1;	// IMP=0x00000000000f3f10
@property(readonly, nonatomic) unsigned short category; // @synthesize category=_category;
- (void)logMetric:(id)arg1;	// IMP=0x00000000000f3f3d
- (id)initWithCategory:(unsigned short)arg1;	// IMP=0x00000000000f3ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
