//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAUserActivityInfo.h>

@class MISSING_TYPE;

@interface UAAdvertisableItem : UAUserActivityInfo
{
    _Bool _alwaysPick;	// 8 = 0x8
    _Bool _alwaysEligible;	// 9 = 0x9
    long long _alwaysPickValue;	// 16 = 0x10
}

@property(readonly) _Bool alwaysEligible; // @synthesize alwaysEligible=_alwaysEligible;
@property(readonly) long long alwaysPickValue; // @synthesize alwaysPickValue=_alwaysPickValue;
@property(readonly) _Bool alwaysPick; // @synthesize alwaysPick=_alwaysPick;
- (MISSING_TYPE *)statusString;	// IMP=0x001000000006bcbb
- (id)logString;	// IMP=0x001000000006badf
- (id)description;	// IMP=0x001000000006b8b8

@end
