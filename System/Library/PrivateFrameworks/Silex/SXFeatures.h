//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFeatures-Protocol.h>

@class NSString;

@interface SXFeatures : NSObject <SXFeatures>
{
    _Bool _newAdsEnabled;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool newAdsEnabled; // @synthesize newAdsEnabled=_newAdsEnabled;
- (id)initWithNewAdsEnabled:(_Bool)arg1;	// IMP=0x000000000002ed3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

