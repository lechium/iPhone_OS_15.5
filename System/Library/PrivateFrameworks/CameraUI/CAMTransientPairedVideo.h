//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CAMTransientPairedVideo : NSObject
{
    NSURL *_url;	// 8 = 0x8
    long long _filterType;	// 16 = 0x10
    CDStruct_1b6d18a9 _stillDisplayTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a1338
@property(readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithURL:(id)arg1 stillDisplayTime:(CDStruct_1b6d18a9)arg2 filterType:(long long)arg3;	// IMP=0x00000000000a1261

@end

